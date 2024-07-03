%{
void yyerror (char *s);
int yylex();
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int symbols[52000];
int symbolVal(char symbol);
void updateSymbolVal(char symbol, int val);
void readSymbolVal(char symbol);

// Assembleur variables
char *header = "section .data\nA: dd 0\nB: dd 0\nC: dd 0\nD: dd 0\nfmt: db \"%d\", 10, 0\nfmtlec: db \"%d\", 0\nsection .text\nglobal _start\nextern printf\nextern scanf\n\n_start:\n\n";
char *trailer = "mov eax, 1\nmov ebx, 0\nint 0x80\n";
extern FILE *yyout;
int compteurDo = 0;
int compteurFor = 0;
int compteurSi = 0;
int compteurTest = 0;
int compteurWhile = 0;
int sinonVu = 0;
char *cmpEgal;
char *testGene;
char *cmpDifferent;
char *cmpSuperieur;
char *cmpInferieur;
char *cmp = "pop ebx\npop eax\ncmp eax, ebx\n\n";
%}

%union {int num; char id;}         
%start program
%token print exit_command if_token else_token while_token for_token do_token then_token read_token write_token faire fsi_token endwhile_token endfor_token
%token plus minus multiply divide mod
%token less_than greater_than less_equal greater_equal equal
%token assign plus_assign minus_assign multiply_assign divide_assign different
%token logical_and logical_or logical_not
%token left_paren right_paren left_block right_block semicolon
%token <num> number
%token <id> identifier
%type <num> program line exp term assignment condition statement block

%%

program : line {printf("Program: line\n");}
        | program line {printf("Program: line\n");}
        ;

line    : statement semicolon {printf("Line: statement;\n");}
        | exit_command semicolon {printf("Line: exit_command;\n"); exit(EXIT_SUCCESS);}
        ;

statement : assignment {printf("Statement: assignment\n");}
          | print exp {printf("Statement: print exp\n"); fprintf(yyout, "pop eax\npush eax\npush dword fmt\ncall printf\nadd esp, 8\n");}
          | if_statement { printf("Statement: if_statement\n"); }
          | while_statement { printf("Statement: while_statement\n"); }
          | do_statement { printf("Statement: do_statement\n"); }
          | for_statement { printf("Statement: for_statement\n"); }
          | read_token identifier {printf("Statement: read_token identifier\n"); fprintf(yyout, "lea eax, [%c]\npush eax\npush dword fmtlec\ncall scanf\nadd esp, 8\n", $2);}
          | write_token identifier {printf("Statement: write_token identifier\n"); fprintf(yyout, "mov eax, [%c]\npush eax\npush dword fmt\ncall printf\nadd esp, 8\n", $2);}
          ;      

if_statement : if_token left_paren condition right_paren alors blocBody finsi 
              | if_token left_paren condition right_paren alors blocBody sinon blocBody finsi
              ;

finsi : fsi_token {
            if(sinonVu) {
                fprintf(yyout, "suite%d:\n", compteurSi);
                fprintf(yyout, ";Réduction du fsis%d\n", compteurSi);
                sinonVu = 0;
            } else {
                fprintf(yyout, "sinon%d:\n", compteurSi);
                fprintf(yyout, ";Réduction du fsi%d\n", compteurSi);
            }
        }
      ;
      
alors : then_token {
            compteurSi++;
            fprintf(yyout, ";Réduction du alors%d\n", compteurSi);
            fprintf(yyout, "pop eax\n");
            fprintf(yyout, "cmp eax, 1\n");
            fprintf(yyout, "jne sinon%d\n", compteurSi);
        }
    ;

sinon : else_token {
            fprintf(yyout, "jmp suite%d\nsinon%d:\n", compteurSi, compteurSi);
            fprintf(yyout, ";Réduction du sinon%d\n", compteurSi);
            sinonVu = 1;
        }
    ;

while_statement : 
                |while_token debutWhile left_paren expbool right_paren then_token blocBody finWhile
                ;
debutWhile : {
    printf("debutWhile\n");
    compteurWhile++;
    fprintf(yyout,"debutWhile%d:\n",compteurWhile);
};

expbool : condition {
    fprintf(yyout,"; Checking condition\n");
    fprintf(yyout,"pop eax\ncmp eax,1\njne finWhile%d\n",compteurWhile);
};

finWhile : endwhile_token {
    fprintf(yyout,"jmp debutWhile%d\nfinWhile%d:\n",compteurWhile,compteurWhile);
};

                


do_statement : do_token left_block debutDoWhile blocBody right_block while_token left_paren expboolForDo right_paren finDoWhile

debutDoWhile : {
    printf("debutDoWhile\n");
    compteurDo++;
    fprintf(yyout,"debutDoWhile%d:\n",compteurDo);
};

expboolForDo : condition {
    fprintf(yyout,"; Checking condition\n");
    fprintf(yyout,"pop eax\ncmp eax,0\njne finDoWhile%d\n",compteurDo);
};


finDoWhile : {
    fprintf(yyout,"jmp debutDoWhile%d\nfinDoWhile%d:\n",compteurDo,compteurDo);
};


for_statement : for_token left_paren init_assignment semicolon condition_for semicolon next_value_assignment right_paren do_for blocBody for_end
              {
                    fprintf(yyout, "\n\n; Block end\n");
                    fprintf(yyout, "; Increment iterator\n");
                    fprintf(yyout, "jmp next_iterator%d\n", compteurFor);
                    fprintf(yyout, "for_end%d:\n", compteurFor);
                    fprintf(yyout, "; End of for loop\n\n\n");
                    printf("Reduction of for loop....\n");
              }  
              ;



init_assignment : assignment {
                    printf("Initializing loop iterator\n");
                    fprintf(yyout, "; Condition check\n");
                    fprintf(yyout, "condition_check%d:\n", compteurFor);
                };


condition_for : condition 
                {
                    fprintf(yyout, "pop eax             ; eax is now the boolean value of the condition\n");
                    fprintf(yyout, "cmp eax, 0\n");
                    fprintf(yyout, "je for_end%d        ; Jump to the end of the for loop if the condition is no longer true\n", compteurFor);
                    fprintf(yyout, "jmp for_block_start%d\n", compteurFor);
                    fprintf(yyout, "; Increment iterator\n");
                    fprintf(yyout, "next_iterator%d:\n", compteurFor);
                };

next_value_assignment : assignment
                {
                    fprintf(yyout, "jmp condition_check%d\n", compteurFor);
                };                


do_for : then_token
                {
                    fprintf(yyout, "; Block start\n");
                    fprintf(yyout, "for_block_start%d\n\n", compteurFor);
                };

for_end : endfor_token { printf("end for");}                
         
          

block : left_block program right_block {printf("Block: { program }\n");}
      | statement {printf("Block: statement\n");}
      ;

blocBody: program  {printf("block body:  program \n");}
         | statement {printf("blocBody body: statement\n");}
         ;      

assignment : identifier assign exp
              {printf("Assignment: identifier assign exp\n"); updateSymbolVal($1, $3); fprintf(yyout, "pop eax\nmov [%c], eax\n", $1);}
           | identifier plus_assign exp
              {printf("Assignment: identifier plus_assign exp\n");
               int currentVal = symbolVal($1);
               updateSymbolVal($1, currentVal + $3);
               fprintf(yyout, "pop eax\nadd [%c], eax\n", $1);}
           | identifier minus_assign exp
              {printf("Assignment: identifier minus_assign exp\n");
               int currentVal = symbolVal($1);
               updateSymbolVal($1, currentVal - $3);
               fprintf(yyout, "pop eax\nsub [%c], eax\n", $1);}
           | identifier multiply_assign exp
              {printf("Assignment: identifier multiply_assign exp\n");
               int currentVal = symbolVal($1);
               updateSymbolVal($1, currentVal * $3);
               fprintf(yyout, "pop eax\nimul dword [%c], eax\n", $1);}
           | identifier divide_assign exp
              {printf("Assignment: identifier divide_assign exp\n");
               int currentVal = symbolVal($1);
               updateSymbolVal($1, currentVal / $3);
               fprintf(yyout, "pop eax\nmov ebx, dword [%c]\ncdq\nidiv ebx\nmov dword [%c], eax\n", $1, $1);}
           | identifier mod exp
              {printf("Assignment: identifier mod exp\n");
               int currentVal = symbolVal($1);
               updateSymbolVal($1, currentVal % $3);
               fprintf(yyout, "pop eax\nmov ebx, dword [%c]\ncdq\nidiv ebx\nmov dword [%c], edx\n", $1, $1);}
           ;

condition : exp less_than exp {
                printf("Condition: exp LESS_THAN exp\n");
                compteurTest++;
                cmpInferieur=";Teste d'infériorité\n";
			    fprintf(yyout,"%s%sjge test%d\npush 1\njmp fintest%d \ntest%d:\npush 0\nfintest%d:\n\n\n",cmpInferieur,cmp,compteurTest,compteurTest,compteurTest,compteurTest);		       	      
            }
          | exp greater_than exp {
                printf("Condition: exp GREATER_THAN exp\n");
                compteurTest++;
		        cmpSuperieur=";Teste de superiorité\n";       
		        fprintf(yyout,"%s%sjge test%d\npush 0\njmp fintest%d \ntest%d:\npush 1\nfintest%d:\n\n\n",cmpSuperieur,cmp,compteurTest,compteurTest,compteurTest,compteurTest);
            }
          | exp less_equal exp {
                printf("Condition: exp LESS_EQUAL exp\n");
                compteurTest++;
                cmpInferieur=";Teste d'infériorité\n";
			    fprintf(yyout,"%s%sjg test%d\npush 1\njmp fintest%d \ntest%d:\npush 0\nfintest%d:\n\n\n",cmpInferieur,cmp,compteurTest,compteurTest,compteurTest,compteurTest);		       	          
            }
          | exp greater_equal exp {$$ = $1 >= $3; 
                printf("Condition: exp GREATER_EQUAL exp\n");
                compteurTest++;
		        cmpSuperieur=";Teste de superiorité\n";       
		        fprintf(yyout,"%s%sjg test%d\npush 0\njmp fintest%d \ntest%d:\npush 1\nfintest%d:\n\n\n",cmpSuperieur,cmp,compteurTest,compteurTest,compteurTest,compteurTest);    
            }
          | exp equal exp {
                printf("Condition: exp EQUAL exp\n");
                compteurTest++;
			    cmpEgal = ";Teste d'égalité\n";
			    fprintf(yyout,"%s%sjne test%d\npush 1\njmp fintest%d \ntest%d:\npush 0\nfintest%d:\n\n\n",cmpEgal,cmp,compteurTest,compteurTest,compteurTest,compteurTest);      
            }
          | exp different exp {$$ = $1 != $3;
                printf("Condition: exp DIFFERENT exp\n");
                compteurTest++;
			    cmpDifferent=";Teste de différence\n";
			    fprintf(yyout,"%s%sjne test%d\npush 0\njmp fintest%d \ntest%d:\npush 1\nfintest%d:\n\n\n",cmpDifferent,cmp,compteurTest,compteurTest,compteurTest,compteurTest);
            }
          | logical_not exp {$$ = !$2; 
                printf("Condition: LOGICAL_NOT exp\n");
                fprintf(yyout, "mov eax, %d\n", $2);
                fprintf(yyout, "cmp eax, 0\n");
                fprintf(yyout, "sete al\n");
                fprintf(yyout, "movzx eax, al\n");
            }
          | exp logical_and exp {$$ = $1 && $3; 
                printf("Condition: exp LOGICAL_AND exp\n");
                fprintf(yyout, "mov eax, %d\n", $1);
                fprintf(yyout, "cmp eax, 0\n");
                fprintf(yyout, "setne al\n");
                fprintf(yyout, "mov ebx, %d\n", $3);
                fprintf(yyout, "cmp ebx, 0\n");
                fprintf(yyout, "setne bl\n");
                fprintf(yyout, "and eax, ebx\n");
            }
          | exp logical_or exp {$$ = $1 || $3; 
                printf("Condition: exp LOGICAL_OR exp\n");
                fprintf(yyout, "mov eax, %d\n", $1);
                fprintf(yyout, "cmp eax, 0\n");
                fprintf(yyout, "setne al\n");
                fprintf(yyout, "mov ebx, %d\n", $3);
                fprintf(yyout, "cmp ebx, 0\n");
                fprintf(yyout, "setne bl\n");
                fprintf(yyout, "or eax, ebx\n");
            }
          ;

exp : term {$$ = $1; printf("Exp: term\n");}
    | exp plus term {$$ = $1 + $3; printf("Exp: exp plus term\n"); fprintf(yyout, "pop ebx\npop eax\nadd eax, ebx\npush eax\n");}
    | exp minus term {$$ = $1 - $3; printf("Exp: exp minus term\n"); fprintf(yyout, "pop ebx\npop eax\nsub eax, ebx\npush eax\n");}
    | exp multiply term {$$ = $1 * $3; printf("Exp: exp multiply term\n"); fprintf(yyout, "pop ebx\npop eax\nimul eax, ebx\npush eax\n");}
    | exp divide term {$$ = $1 / $3; printf("Exp: exp divide term\n"); fprintf(yyout, "pop ebx\npop eax\ncdq\nidiv ebx\npush eax\n");}
    | exp mod term {$$ = $1 % $3; printf("Exp: exp mod term\n"); fprintf(yyout, "pop ebx\npop eax\ncdq\nidiv ebx\npush edx\n");}
    | left_paren condition right_paren { $$ = $2; }
    ;

term : number {$$ = $1; printf("Term: number\n"); fprintf(yyout, "push %d\n", $1);}
     | identifier {$$ = symbolVal($1); printf("Term: identifier\n"); fprintf(yyout, "push dword [%c]\n", $1);}
     ;

%%

int computeSymbolIndex(char token) {
    int idx = -1;
    if(islower(token)) {
        idx = token - 'a' + 26;
    } else if(isupper(token)) {
        idx = token - 'A';
    }
    return idx;
} 

int symbolVal(char symbol) {
    int bucket = computeSymbolIndex(symbol);
    return symbols[bucket];
}

void updateSymbolVal(char symbol, int val) {
    int bucket = computeSymbolIndex(symbol);
    symbols[bucket] = val;
}

void readSymbolVal(char symbol) {
    int bucket = computeSymbolIndex(symbol);
    printf("Enter value for %c: ", symbol);
    scanf("%d", &symbols[bucket]);
}

int main(void) {
    for(int i = 0; i < 52; i++) {
        symbols[i] = 0;
    }
    yyout = fopen("output.asm", "w");
    if (!yyout) {
        fprintf(stderr, "Could not open output file.\n");
        return 1;
    }
    fprintf(yyout, "%s", header);
    int result = yyparse();
    fprintf(yyout, "%s", trailer);
    fclose(yyout);
    return result;
}

void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}
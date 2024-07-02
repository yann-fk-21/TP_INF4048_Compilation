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
%}

%union {int num; char id;}         
%start program
%token print exit_command if_token else_token while_token for_token do_token then_token read_token write_token faire
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

if_statement : if_token left_paren condition right_paren then_token block
              | if_token left_paren condition right_paren then_token block else_token block
              ;

while_statement : while_token left_paren condition right_paren then_token block
                ;

do_statement : do_token block while_token left_paren condition right_paren semicolon
             ;

for_statement : for_token left_paren assignment semicolon condition semicolon assignment right_paren then_token block
              ;           

block : left_block program right_block {printf("Block: { program }\n");}
      | statement {printf("Block: statement\n");}
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

condition : exp less_than exp {$$ = $1 < $3; printf("Condition: exp less_than exp\n");}
          | exp greater_than exp {$$ = $1 > $3; printf("Condition: exp greater_than exp\n");}
          | exp less_equal exp {$$ = $1 <= $3; printf("Condition: exp less_equal exp\n");}
          | exp greater_equal exp {$$ = $1 >= $3; printf("Condition: exp greater_equal exp\n");}
          | exp equal exp {$$ = $1 == $3; printf("Condition: exp equal exp\n");}
          | exp different exp {$$ = $1 != $3; printf("Condition: exp different exp\n");}
          | logical_not exp {$$ = !$2; printf("Condition: logical_not exp\n");}
          | exp logical_and exp {$$ = $1 && $3; printf("Condition: exp logical_and exp\n");}
          | exp logical_or exp {$$ = $1 || $3; printf("Condition: exp logical_or exp\n");}
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

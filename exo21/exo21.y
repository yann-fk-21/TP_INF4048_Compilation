%{
#include<stdio.h>
#include "simple.h"
#define nbMax
#define YYSTYPE int

void emit(char* opcode, int operand);
%}

%token INTEGER

%%
S:
  E	{printf("\n Réduction S ----> E    Fin!!!\n"); }

E:
  E '+' T {emit("ADD", $3); }
 |T	  {/* Nothing to do here */ }

T:
  T '*' F {emit("MUL", $3); }
 |F       {/* Nothing to do here */ }
 
F:
  INTEGER {emit("PUSH", $1); }

%%

int main(void)
{
  
 yyparse();
  
 return 0;
 
}
int yyerror(char *str)
{
	printf("error parsing %s\n",str);
	return 0;
}


void emit(char* opcode, int operand)
{
    printf("%s %d\n", opcode, operand);
}


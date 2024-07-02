%{
#include<stdio.h>
#include<string.h>
#include "simple.h"
#define nbMax
#define YYSTYPE int

void emit(char* opcode, int operand);
%}

%token INTEGER

%%
S:
  E	{/* Réduction S ----> E    Fin!!!*/ }

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
  
  printf("\n\
section .data\n\
\n\
section .text\n\
    global _start\n\
\n\
_start:\n\n"
  );


  yyparse();
  

  printf(
"\n; Exit the program\n\
    mov rax, 60   ; System call number for sys_exit\n\
    xor rdi, rdi  ; Exit code 0\n\
    syscall       ; Call the kernel\n"
  );


 return 0;
 
}
int yyerror(char *str)
{
	printf("error parsing %s\n",str);
	return 0;
}


void emit(char* opcode, int operand)
{

  if(!strcmp(opcode, "PUSH"))
    printf("PUSH %d\n", operand);

  else if(!strcmp(opcode, "ADD"))

    printf("\n\
POP rax\n\
POP rbx\n\
ADD rax, rbx\n\
PUSH rax\n");

  else

    printf("\n\
POP rax\n\
POP rbx\n\
MUL rbx\n\
PUSH rax\n");


}


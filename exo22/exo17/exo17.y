%{
#include<stdio.h>
#include "simple.h"
#include "stack.h"
#define nbMax
int compteurSi = 0, compteurTest = 0, compteurWhile = 0;
FILE *yyout;
int var[4];
Stack p;
int eax, ebx;

void print(int value);
void emit(char* opcode, int operand);



int take(int address)
{
  return var[address -'a'];
}
void affec(int address)
{
  int val = pop(&p);
  var[address -'a'] = val;
}

void add()
{
  eax = pop(&p);
  ebx = pop(&p);
  
  push(&p, eax + ebx);
  
  printf("\tdans add : eax=%d ebx=%d prod=%d ",eax,ebx,eax + ebx);
}

void mult()
{
  eax = pop(&p);
  ebx = pop(&p);
  
  push(&p,eax * ebx);
  
  printf("\tdans mult: eax=%d ebx=%d prod=%d ",eax,ebx,eax * ebx);
}

%}

%token INTEGER
%token PRINT
%token VARIABLE

%%
Program:
       stat {printf("\n\n\t\t Correcte pour la syntaxe \n\n");}
       

stat: 
      bloc

bloc:
      instr ';'
     |instr ';' bloc


instr:

      VARIABLE '=' E {affec($1); printf("\nRéduction instr ---> var = E ");}
     | PRINT VARIABLE {printf("\nRéduction instr ---> print: %d", take($2));}


E:
   T{printf("\nRéduction E ----> T    $$=%d",$$); }
   | E '+' T {add(); printf("\nRéduction E ----> E + T    "); }


T:
   F 
   | T '*' F {mult(); printf("\nRéduction T ----> T * F    "); }

F:  
    INTEGER {push(&p, $1);printf("\nRéduction F ----> int"); }
    | VARIABLE  {push(&p, take($1)); printf("\nRéduction F ----> var");}   

%%

int main(void)
{
   
 initStack(&p);
 
 yyparse();
  
 return 0;

}


int yyerror(char *str)
{
	printf("error parsing %s\n",str);
	return 0;
}


void print(int value)
{

  printf("\
section .data\n\
  num db '%d', 0    ; The number to print as a string\n\
  len equ $ - num  ; Length of the string\n\
\n\
section .text\n\
    global _start\n\
\n\
_start:\n\
    ; Write the string to stdout\n\
    mov eax, 4        ; System call number for sys_write\n\
    mov ebx, 1        ; File descriptor 1 is stdout\n\
    mov ecx, num      ; Pointer to the string\n\
    mov edx, len      ; Length of the string\n\
    int 0x80          ; Call the kernel\n\
\n\
    ; Exit the program\n\
    mov eax, 1        ; System call number for sys_exit\n\
    xor ebx, ebx      ; Return 0 status\n\
    int 0x80          ; Call the kernel\n\

  ", value);

}


void emit(char* opcode, int operand)
{
    printf("%s %d\n", opcode, operand);
}


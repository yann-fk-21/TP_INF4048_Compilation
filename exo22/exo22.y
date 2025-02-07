%{
#include<stdio.h>
#include "simple.h"
#include "stack.h"
int var[4];
Stack p;
int eax, ebx;



// Other useful functions
void print();
int take(int address);
void affec(int address);
void add();
void mult();

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

      VARIABLE '=' E {affec($1); /* Réduction instr ---> var = E */}
     | PRINT VARIABLE {take($2); print(); /* Réduction instr ---> print: %d", take($2) */}


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
  
  printf("\n\
section .data\n\
  a dq 0\n\
  b dq 0\n\
  c dq 0\n\
  d dq 0\n\
\n\
section .text\n\
\n\
section .text\n\
    global _start\n\
\n\
_start:\n\n"
  ) ;

  
  yyparse();
  

  printf(
"\n; Exit the program\n\
    mov rax, 60   ; System call number for sys_exit\n\
    xor rdi, rdi  ; Exit code 0\n\
    syscall       ; Call the kernel\n\
printf:\n\
    push rax                 ; Save rax (caller-saved)\n\
    push rdx                 ; Save rdx (caller-saved)\n\
    push rdi                 ; Save rdi (callee-saved)\n\
    push rsi                 ; Save rsi (callee-saved)\n\
\n\
    mov rax, 0               ; System call number for sys_write\n\
    mov rdx, 10              ; Length of the output format string\n\
    syscall                   ; Call the kernel\n\
\n\
    pop rsi                  ; Restore rsi (callee-saved)\n\
    pop rdi                  ; Restore rdi (callee-saved)\n\
    pop rdx                  ; Restore rdx (caller-saved)\n\
    pop rax                  ; Restore rax (caller-saved)\n\
    ret\n\
    ");



 return 0;

}



int yyerror(char *str)
{
	printf("error parsing %s\n",str);
	return 0;
}


void print()
{

  printf("\n\
    ; Load the number into rax\n\
    mov rax, rbx    ; Number to print\n\
\n\
    ; Prepare for printing the number\n\
    lea rdi, [output_format] ; Load the address of the format string\n\
    mov rsi, rax             ; Move the number to be printed into rsi\n\
    xor rax, rax             ; Clear rax for syscall\n\
    call printf              ; Call printf\n\
  ");

}




int take(int address)
{
  // return var[address -'a']; Ready to read values are stored in rbx
  printf("\nmov rbx, %d", address -'a');
}


void affec(int address)
{
  // int val = pop(&p);
  // var[address -'a'] = val;
  printf("\npop %d", address -'a');
}

void add()
{
  // eax = pop(&p);
  // ebx = pop(&p);
  printf("\npop eax");
  printf("\npop ebx");
  
  //push(&p, eax + ebx);
  printf("\nadd eax, ebx\npush eax");


  //printf("\tdans add : eax=%d ebx=%d prod=%d ",eax,ebx,eax + ebx);
}

void mult()
{
  //eax = pop(&p);
  //ebx = pop(&p);
  printf("\npop rax");
  printf("\npop ebx");
  
  //push(&p,eax * ebx);
  printf("\nMUL ebx\npush rax");
  
  //printf("\tdans mult: eax=%d ebx=%d prod=%d ",eax,ebx,eax * ebx);
}

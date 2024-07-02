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
}

void mult()
{
  eax = pop(&p);
  ebx = pop(&p);
  
  push(&p,eax * ebx);
}

%}

%token INTEGER
%token PRINT
%token VARIABLE

%%
Program:
       stat {printf("\n\n\t\t Succès \n\n");}
       

stat: 
      bloc

bloc:
      instr ';'
     |instr ';' bloc


instr:

      VARIABLE '=' E {affec($1);}
     | PRINT VARIABLE {printf("\n%d", take($2));}


E:
   T
   | E '+' T {add();}


T:
   F 
   | T '*' F {mult(); }

F:  
    INTEGER {push(&p, $1);}
    | VARIABLE  {push(&p, take($1));}   

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

%{
#include<stdio.h>
#include "simple.h"
#define nbMax
%}

%token INTEGER

%%
S:
  E	{printf("\n\n\t\t\t    Resultat: %d\t\t\t\n\n",$$); }

E:
  E '+' T {$$ = $1 + $3; printf("\n Réduction E ----> E + T    $$ <-- %d + %d (%d)",$1,$3,$$); }
 |T	  {printf("\n Réduction E ----> T        void"); }

T:
  T '*' F {$$ = $1 * $3; printf("\n Réduction T ----> T * F    $$ <-- %d * %d (%d)",$1,$3,$$); }
 |F       {printf("\n Réduction T ----> F        void"); }
 
F:
  INTEGER {printf("\n Réduction F ----> int      $$ <-- %d",$1); }

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

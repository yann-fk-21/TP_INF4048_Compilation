
%{
/*code qui sera rajouté en haut du fichier généré*/
#include<stdio.h>
%}

/* entier*/
entier [0-9]+

/*operateur*/
operateur  \+|\*|\-

%%
{entier}     printf("<int:%s>",yytext);
{operateur}  printf("<operateur:");ECHO; printf(">");
.;
[\n];

%%
/* code ajouté en bas du parseur*/
int main(int argc, char **argv)
{
	yylex();
	printf("\n");
	return 0;
}




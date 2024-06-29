%{
#include <stdio.h>
%}

entier [0-9]+
operateur \+|\*|\-

%%

{entier}     printf("<int:%s>",yytext);
{operateur}  printf("<operateur:");ECHO; printf(">");
.;
[\n];

%%


int main() {
    yylex();
    printf("\n");
    return 0;
}

%{
#include <stdio.h>
#include <stdlib.h>

void yyerror(const char *s);
int yylex(void);

%}

%token INT
%token PLUS
%token MULT

%%

E
  : E PLUS E { printf("Reduction: E -> E + E\n"); }
  | E MULT E { printf("Reduction: E -> E * E\n"); }
  | INT      { printf("Reduction: E -> int\n"); }
  ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main(void) {
    if (yyparse() == 0) {
        printf("Parsing completed successfully.\n");
    } else {
        printf("Parsing failed.\n");
    }
    return 0;
}

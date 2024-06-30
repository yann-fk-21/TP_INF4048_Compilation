%{
#include "y.tab.h"
%}

%%
"+"    { return PLUS; }
"*"    { return MULT; }
[0-9]+ { yylval = atoi(yytext); return INT; }
[ \t\n]+  /* ignore whitespaces */
.      { return yytext[0]; }

%%

int yywrap(void) {
    return 1;
}

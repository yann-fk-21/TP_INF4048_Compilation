%{
#include <stdio.h>
%}

%%

"Hello World"       printf("Good Bye");
.                   ; /* Cette ligne permet de gérer tout autre caractère */

%%

int main() {
    yylex();
    return 0;
}

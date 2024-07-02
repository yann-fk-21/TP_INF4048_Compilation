%{
#include "y.tab.h"
void yyerror (char *s);
int yylex();
%}
%%
"tchue"           { return write_token; }
"ntep"            { return exit_command; }
"mbeug"              { return if_token; }
"tepaahpoh"            { return else_token; }
"tehque"           { return while_token; }
"mbowne"             { return for_token; }
"tchie"            { return read_token; }
"mouah"           { return write_token; }
"ngre"              { return do_token; }
"then"            { return then_token; }
"+"               { return plus; }
"-"               { return minus; }
"*"               { return multiply; }
"/"               { return divide; }
"%"               { return mod; }
"<"               { return less_than; }
">"               { return greater_than; }
"<="              { return less_equal; }
">="              { return greater_equal; }
"=="              { return equal; }
"="               { return assign; }
"+="              { return plus_assign; }
"-="              { return minus_assign; }
"*="              { return multiply_assign; }
"/="              { return divide_assign; }
"!="              { return different; }
"&&"              { return logical_and; }
"||"              { return logical_or; }
"!"               { return logical_not; }
"("               { return left_paren; }
")"               { return right_paren; }
"{"               { return left_block; }
"}"               { return right_block; }
";"               { return semicolon; }
[a-zA-Z]          { yylval.id = yytext[0]; return identifier; }
[0-9]+            { yylval.num = atoi(yytext); return number; }
[ \t\n]           ;  
.                 { yyerror("unexpected character"); }

/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_LANGUE1_TAB_H_INCLUDED
# define YY_YY_LANGUE1_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    print = 258,                   /* print  */
    exit_command = 259,            /* exit_command  */
    if_token = 260,                /* if_token  */
    else_token = 261,              /* else_token  */
    while_token = 262,             /* while_token  */
    for_token = 263,               /* for_token  */
    do_token = 264,                /* do_token  */
    then_token = 265,              /* then_token  */
    read_token = 266,              /* read_token  */
    write_token = 267,             /* write_token  */
    faire = 268,                   /* faire  */
    plus = 269,                    /* plus  */
    minus = 270,                   /* minus  */
    multiply = 271,                /* multiply  */
    divide = 272,                  /* divide  */
    mod = 273,                     /* mod  */
    less_than = 274,               /* less_than  */
    greater_than = 275,            /* greater_than  */
    less_equal = 276,              /* less_equal  */
    greater_equal = 277,           /* greater_equal  */
    equal = 278,                   /* equal  */
    assign = 279,                  /* assign  */
    plus_assign = 280,             /* plus_assign  */
    minus_assign = 281,            /* minus_assign  */
    multiply_assign = 282,         /* multiply_assign  */
    divide_assign = 283,           /* divide_assign  */
    different = 284,               /* different  */
    logical_and = 285,             /* logical_and  */
    logical_or = 286,              /* logical_or  */
    logical_not = 287,             /* logical_not  */
    left_paren = 288,              /* left_paren  */
    right_paren = 289,             /* right_paren  */
    left_block = 290,              /* left_block  */
    right_block = 291,             /* right_block  */
    semicolon = 292,               /* semicolon  */
    number = 293,                  /* number  */
    identifier = 294               /* identifier  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "langue1.y"
int num; char id;

#line 106 "langue1.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_LANGUE1_TAB_H_INCLUDED  */

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    fsi_token = 269,               /* fsi_token  */
    plus = 270,                    /* plus  */
    minus = 271,                   /* minus  */
    multiply = 272,                /* multiply  */
    divide = 273,                  /* divide  */
    mod = 274,                     /* mod  */
    less_than = 275,               /* less_than  */
    greater_than = 276,            /* greater_than  */
    less_equal = 277,              /* less_equal  */
    greater_equal = 278,           /* greater_equal  */
    equal = 279,                   /* equal  */
    assign = 280,                  /* assign  */
    plus_assign = 281,             /* plus_assign  */
    minus_assign = 282,            /* minus_assign  */
    multiply_assign = 283,         /* multiply_assign  */
    divide_assign = 284,           /* divide_assign  */
    different = 285,               /* different  */
    logical_and = 286,             /* logical_and  */
    logical_or = 287,              /* logical_or  */
    logical_not = 288,             /* logical_not  */
    left_paren = 289,              /* left_paren  */
    right_paren = 290,             /* right_paren  */
    left_block = 291,              /* left_block  */
    right_block = 292,             /* right_block  */
    semicolon = 293,               /* semicolon  */
    number = 294,                  /* number  */
    identifier = 295               /* identifier  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define print 258
#define exit_command 259
#define if_token 260
#define else_token 261
#define while_token 262
#define for_token 263
#define do_token 264
#define then_token 265
#define read_token 266
#define write_token 267
#define faire 268
#define fsi_token 269
#define plus 270
#define minus 271
#define multiply 272
#define divide 273
#define mod 274
#define less_than 275
#define greater_than 276
#define less_equal 277
#define greater_equal 278
#define equal 279
#define assign 280
#define plus_assign 281
#define minus_assign 282
#define multiply_assign 283
#define divide_assign 284
#define different 285
#define logical_and 286
#define logical_or 287
#define logical_not 288
#define left_paren 289
#define right_paren 290
#define left_block 291
#define right_block 292
#define semicolon 293
#define number 294
#define identifier 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 24 "langue1.y"
int num; char id;

#line 150 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

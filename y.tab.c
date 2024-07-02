/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "langue1.y"

void yyerror (char *s);
int yylex();
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int symbols[52000];
int symbolVal(char symbol);
void updateSymbolVal(char symbol, int val);
void readSymbolVal(char symbol);

// Assembleur variables
char *header = "section .data\nA: dd 0\nB: dd 0\nC: dd 0\nD: dd 0\nfmt: db \"%d\", 10, 0\nfmtlec: db \"%d\", 0\nsection .text\nglobal _start\nextern printf\nextern scanf\n\n_start:\n\n";
char *trailer = "mov eax, 1\nmov ebx, 0\nint 0x80\n";
extern FILE *yyout;
int compteurDo = 0;
int compteurFor = 0;
int compteurSi = 0;
int compteurTest = 0;
int compteurWhile = 0;
int sinonVu = 0;
char *cmpEgal;
char *testGene;
char *cmpDifferent;
char *cmpSuperieur;
char *cmpInferieur;
char *cmp = "pop ebx\npop eax\ncmp eax, ebx\n\n";

#line 100 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    endwhile_token = 270,          /* endwhile_token  */
    plus = 271,                    /* plus  */
    minus = 272,                   /* minus  */
    multiply = 273,                /* multiply  */
    divide = 274,                  /* divide  */
    mod = 275,                     /* mod  */
    less_than = 276,               /* less_than  */
    greater_than = 277,            /* greater_than  */
    less_equal = 278,              /* less_equal  */
    greater_equal = 279,           /* greater_equal  */
    equal = 280,                   /* equal  */
    assign = 281,                  /* assign  */
    plus_assign = 282,             /* plus_assign  */
    minus_assign = 283,            /* minus_assign  */
    multiply_assign = 284,         /* multiply_assign  */
    divide_assign = 285,           /* divide_assign  */
    different = 286,               /* different  */
    logical_and = 287,             /* logical_and  */
    logical_or = 288,              /* logical_or  */
    logical_not = 289,             /* logical_not  */
    left_paren = 290,              /* left_paren  */
    right_paren = 291,             /* right_paren  */
    left_block = 292,              /* left_block  */
    right_block = 293,             /* right_block  */
    semicolon = 294,               /* semicolon  */
    number = 295,                  /* number  */
    identifier = 296               /* identifier  */
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
#define endwhile_token 270
#define plus 271
#define minus 272
#define multiply 273
#define divide 274
#define mod 275
#define less_than 276
#define greater_than 277
#define less_equal 278
#define greater_equal 279
#define equal 280
#define assign 281
#define plus_assign 282
#define minus_assign 283
#define multiply_assign 284
#define divide_assign 285
#define different 286
#define logical_and 287
#define logical_or 288
#define logical_not 289
#define left_paren 290
#define right_paren 291
#define left_block 292
#define right_block 293
#define semicolon 294
#define number 295
#define identifier 296

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 30 "langue1.y"
int num; char id;

#line 238 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_print = 3,                      /* print  */
  YYSYMBOL_exit_command = 4,               /* exit_command  */
  YYSYMBOL_if_token = 5,                   /* if_token  */
  YYSYMBOL_else_token = 6,                 /* else_token  */
  YYSYMBOL_while_token = 7,                /* while_token  */
  YYSYMBOL_for_token = 8,                  /* for_token  */
  YYSYMBOL_do_token = 9,                   /* do_token  */
  YYSYMBOL_then_token = 10,                /* then_token  */
  YYSYMBOL_read_token = 11,                /* read_token  */
  YYSYMBOL_write_token = 12,               /* write_token  */
  YYSYMBOL_faire = 13,                     /* faire  */
  YYSYMBOL_fsi_token = 14,                 /* fsi_token  */
  YYSYMBOL_endwhile_token = 15,            /* endwhile_token  */
  YYSYMBOL_plus = 16,                      /* plus  */
  YYSYMBOL_minus = 17,                     /* minus  */
  YYSYMBOL_multiply = 18,                  /* multiply  */
  YYSYMBOL_divide = 19,                    /* divide  */
  YYSYMBOL_mod = 20,                       /* mod  */
  YYSYMBOL_less_than = 21,                 /* less_than  */
  YYSYMBOL_greater_than = 22,              /* greater_than  */
  YYSYMBOL_less_equal = 23,                /* less_equal  */
  YYSYMBOL_greater_equal = 24,             /* greater_equal  */
  YYSYMBOL_equal = 25,                     /* equal  */
  YYSYMBOL_assign = 26,                    /* assign  */
  YYSYMBOL_plus_assign = 27,               /* plus_assign  */
  YYSYMBOL_minus_assign = 28,              /* minus_assign  */
  YYSYMBOL_multiply_assign = 29,           /* multiply_assign  */
  YYSYMBOL_divide_assign = 30,             /* divide_assign  */
  YYSYMBOL_different = 31,                 /* different  */
  YYSYMBOL_logical_and = 32,               /* logical_and  */
  YYSYMBOL_logical_or = 33,                /* logical_or  */
  YYSYMBOL_logical_not = 34,               /* logical_not  */
  YYSYMBOL_left_paren = 35,                /* left_paren  */
  YYSYMBOL_right_paren = 36,               /* right_paren  */
  YYSYMBOL_left_block = 37,                /* left_block  */
  YYSYMBOL_right_block = 38,               /* right_block  */
  YYSYMBOL_semicolon = 39,                 /* semicolon  */
  YYSYMBOL_number = 40,                    /* number  */
  YYSYMBOL_identifier = 41,                /* identifier  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_program = 43,                   /* program  */
  YYSYMBOL_line = 44,                      /* line  */
  YYSYMBOL_statement = 45,                 /* statement  */
  YYSYMBOL_dstatement = 46,                /* dstatement  */
  YYSYMBOL_if_statement = 47,              /* if_statement  */
  YYSYMBOL_finsi = 48,                     /* finsi  */
  YYSYMBOL_alors = 49,                     /* alors  */
  YYSYMBOL_sinon = 50,                     /* sinon  */
  YYSYMBOL_while_statement = 51,           /* while_statement  */
  YYSYMBOL_debutWhile = 52,                /* debutWhile  */
  YYSYMBOL_expbool = 53,                   /* expbool  */
  YYSYMBOL_blocInWhile = 54,               /* blocInWhile  */
  YYSYMBOL_finWhile = 55,                  /* finWhile  */
  YYSYMBOL_do_statement = 56,              /* do_statement  */
  YYSYMBOL_debutDoWhile = 57,              /* debutDoWhile  */
  YYSYMBOL_expboolForDo = 58,              /* expboolForDo  */
  YYSYMBOL_blocInDoWhile = 59,             /* blocInDoWhile  */
  YYSYMBOL_finDoWhile = 60,                /* finDoWhile  */
  YYSYMBOL_for_statement = 61,             /* for_statement  */
  YYSYMBOL_block = 62,                     /* block  */
  YYSYMBOL_assignment = 63,                /* assignment  */
  YYSYMBOL_condition = 64,                 /* condition  */
  YYSYMBOL_exp = 65,                       /* exp  */
  YYSYMBOL_term = 66                       /* term  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   216

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  127

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    44,    44,    45,    48,    49,    52,    53,    54,    55,
      56,    57,    58,    59,    62,    63,    65,    66,    69,    81,
      90,    97,    98,   100,   106,   111,   112,   113,   114,   117,
     124,   126,   132,   137,   138,   139,   140,   143,   148,   163,
     164,   167,   169,   174,   179,   184,   189,   196,   202,   208,
     214,   220,   226,   233,   240,   250,   262,   263,   264,   265,
     266,   267,   268,   271,   272
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "print",
  "exit_command", "if_token", "else_token", "while_token", "for_token",
  "do_token", "then_token", "read_token", "write_token", "faire",
  "fsi_token", "endwhile_token", "plus", "minus", "multiply", "divide",
  "mod", "less_than", "greater_than", "less_equal", "greater_equal",
  "equal", "assign", "plus_assign", "minus_assign", "multiply_assign",
  "divide_assign", "different", "logical_and", "logical_or", "logical_not",
  "left_paren", "right_paren", "left_block", "right_block", "semicolon",
  "number", "identifier", "$accept", "program", "line", "statement",
  "dstatement", "if_statement", "finsi", "alors", "sinon",
  "while_statement", "debutWhile", "expbool", "blocInWhile", "finWhile",
  "do_statement", "debutDoWhile", "expboolForDo", "blocInDoWhile",
  "finDoWhile", "for_statement", "block", "assignment", "condition", "exp",
  "term", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-36)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-35)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      77,    73,   -32,   -26,   -36,   -21,   -19,   -16,     5,     1,
       8,   -36,   -17,   -36,   -36,   -36,   -36,   -36,    93,   -36,
     -36,   161,   -36,   -36,    93,    20,    32,   -36,   -36,   -36,
      73,    73,    73,    73,    73,    73,   -36,   -36,   -36,    73,
      23,   183,   -35,   -35,   -35,   -35,   -35,    40,    93,    44,
      49,   161,   161,   161,   161,   161,   161,   161,   -36,    73,
      73,    73,    73,    73,    73,    73,    73,   -36,   -36,   -36,
     -36,   -36,    82,    58,   -36,    93,    59,    88,    98,    64,
     161,   161,   161,   161,   161,   161,   161,   161,   -36,    49,
      94,    76,    49,   -36,   -36,   110,    18,    49,    32,   -36,
      85,   -36,   -36,   -36,    49,   135,   146,   107,    87,    93,
     116,   -36,   -36,   -36,   -36,   114,    95,   -36,   -36,   157,
     -36,    77,   -36,   -36,   -36,    36,   -36
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      21,     0,     0,     0,    23,     0,     0,     0,     0,     0,
      21,     2,     0,     8,     9,    10,    11,     6,     0,    63,
      64,     7,    56,     5,     0,     0,     0,    31,    12,    13,
       0,     0,     0,     0,     0,     0,     1,     3,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,    46,    41,    42,    43,    44,    45,    53,    62,     0,
       0,     0,     0,     0,     0,     0,     0,    57,    58,    59,
      60,    61,     0,     0,    24,     0,     0,    21,     8,     0,
      47,    48,    49,    50,    51,    52,    54,    55,    19,    21,
       0,     0,    14,    36,    35,     0,     0,    21,     0,    15,
       0,    20,    18,    16,    21,    21,     8,     0,     0,     0,
       0,    28,    27,    29,    22,     0,     0,    32,    17,    21,
      37,    21,    40,    38,    30,    21,    39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -36,    11,    -9,     0,    78,   -27,    25,   -36,   -36,   -36,
     -36,   -36,   -34,   -36,   -36,   -36,   -36,    34,   -36,   -36,
     -36,   -23,   -22,     3,   147
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    10,    11,    76,    77,    13,   103,    89,   104,    14,
      25,    73,   107,   114,    15,    50,   116,    79,   124,    16,
     123,    17,    40,    41,    22
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      12,    37,    47,    49,    21,    19,    20,    23,    36,    24,
      12,     1,     2,     3,    26,     4,     5,     6,    27,     7,
       8,    30,    38,    78,   101,    28,    74,    31,    32,    33,
      34,    35,   102,    51,    52,    53,    54,    55,    56,     1,
       2,     3,    57,     4,     5,     6,    29,     7,     8,     9,
      78,    78,     1,    91,     3,    48,     4,     5,     6,    58,
       7,     8,    80,    81,    82,    83,    84,    85,    86,    87,
     106,   111,   112,     9,   126,   108,    72,     9,   106,   106,
       1,     2,     3,    75,     4,     5,     6,   117,     7,     8,
       9,     1,    88,     3,    90,     4,     5,     6,    92,     7,
       8,     1,    95,     3,    97,     4,     5,     6,    18,     7,
       8,    93,    94,    19,    20,    98,    37,   100,     9,   122,
     109,    12,   113,   115,   119,    12,   -33,    39,    18,     9,
     102,   120,   125,    19,    20,   118,   -34,     0,     1,     9,
       3,     0,     4,     5,     6,     0,     7,     8,     0,     1,
     -25,     3,     0,     4,     5,     6,     0,     7,     8,     0,
       1,   -26,     3,     0,     4,     5,     6,    96,     7,     8,
      99,     0,     0,     0,     0,   105,     9,    42,    43,    44,
      45,    46,   110,   105,   105,     0,     0,     9,     0,    67,
      68,    69,    70,    71,   121,     0,     0,     0,     9,    42,
      43,    44,    45,    46,    59,    60,    61,    62,    63,     0,
       0,     0,     0,     0,    64,    65,    66
};

static const yytype_int8 yycheck[] =
{
       0,    10,    24,    26,     1,    40,    41,    39,     0,    35,
      10,     3,     4,     5,    35,     7,     8,     9,    37,    11,
      12,    20,    39,    50,     6,    41,    48,    26,    27,    28,
      29,    30,    14,    30,    31,    32,    33,    34,    35,     3,
       4,     5,    39,     7,     8,     9,    41,    11,    12,    41,
      77,    78,     3,    75,     5,    35,     7,     8,     9,    36,
      11,    12,    59,    60,    61,    62,    63,    64,    65,    66,
      97,   105,   106,    41,    38,    98,    36,    41,   105,   106,
       3,     4,     5,    39,     7,     8,     9,   109,    11,    12,
      41,     3,    10,     5,    36,     7,     8,     9,    39,    11,
      12,     3,    38,     5,    10,     7,     8,     9,    35,    11,
      12,    77,    78,    40,    41,    39,   125,     7,    41,   119,
      35,   121,    15,    36,    10,   125,    38,    34,    35,    41,
      14,    36,   121,    40,    41,   110,    38,    -1,     3,    41,
       5,    -1,     7,     8,     9,    -1,    11,    12,    -1,     3,
      15,     5,    -1,     7,     8,     9,    -1,    11,    12,    -1,
       3,    15,     5,    -1,     7,     8,     9,    89,    11,    12,
      92,    -1,    -1,    -1,    -1,    97,    41,    16,    17,    18,
      19,    20,   104,   105,   106,    -1,    -1,    41,    -1,    42,
      43,    44,    45,    46,    37,    -1,    -1,    -1,    41,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     7,     8,     9,    11,    12,    41,
      43,    44,    45,    47,    51,    56,    61,    63,    35,    40,
      41,    65,    66,    39,    35,    52,    35,    37,    41,    41,
      20,    26,    27,    28,    29,    30,     0,    44,    39,    34,
      64,    65,    16,    17,    18,    19,    20,    64,    35,    63,
      57,    65,    65,    65,    65,    65,    65,    65,    36,    21,
      22,    23,    24,    25,    31,    32,    33,    66,    66,    66,
      66,    66,    36,    53,    64,    39,    45,    46,    47,    59,
      65,    65,    65,    65,    65,    65,    65,    65,    10,    49,
      36,    64,    39,    59,    59,    38,    46,    10,    39,    46,
       7,     6,    14,    48,    50,    46,    47,    54,    63,    35,
      46,    54,    54,    15,    55,    36,    58,    64,    48,    10,
      36,    37,    45,    62,    60,    43,    38
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    43,    44,    44,    45,    45,    45,    45,
      45,    45,    45,    45,    46,    46,    47,    47,    48,    49,
      50,    51,    51,    52,    53,    54,    54,    54,    54,    55,
      56,    57,    58,    59,    59,    59,    59,    60,    61,    62,
      62,    63,    63,    63,    63,    63,    63,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    65,    65,    65,    65,
      65,    65,    65,    66,    66
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     1,     2,     1,     1,
       1,     1,     2,     2,     2,     3,     7,     9,     1,     1,
       1,     0,     8,     0,     1,     1,     1,     2,     2,     1,
      10,     0,     1,     1,     1,     2,     2,     0,    10,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: line  */
#line 44 "langue1.y"
               {printf("Program: line\n");}
#line 1385 "y.tab.c"
    break;

  case 3: /* program: program line  */
#line 45 "langue1.y"
                       {printf("Program: line\n");}
#line 1391 "y.tab.c"
    break;

  case 4: /* line: statement semicolon  */
#line 48 "langue1.y"
                              {printf("Line: statement;\n");}
#line 1397 "y.tab.c"
    break;

  case 5: /* line: exit_command semicolon  */
#line 49 "langue1.y"
                                 {printf("Line: exit_command;\n"); exit(EXIT_SUCCESS);}
#line 1403 "y.tab.c"
    break;

  case 6: /* statement: assignment  */
#line 52 "langue1.y"
                       {printf("Statement: assignment\n");}
#line 1409 "y.tab.c"
    break;

  case 7: /* statement: print exp  */
#line 53 "langue1.y"
                      {printf("Statement: print exp\n"); fprintf(yyout, "pop eax\npush eax\npush dword fmt\ncall printf\nadd esp, 8\n");}
#line 1415 "y.tab.c"
    break;

  case 8: /* statement: if_statement  */
#line 54 "langue1.y"
                         { printf("Statement: if_statement\n"); }
#line 1421 "y.tab.c"
    break;

  case 9: /* statement: while_statement  */
#line 55 "langue1.y"
                            { printf("Statement: while_statement\n"); }
#line 1427 "y.tab.c"
    break;

  case 10: /* statement: do_statement  */
#line 56 "langue1.y"
                         { printf("Statement: do_statement\n"); }
#line 1433 "y.tab.c"
    break;

  case 11: /* statement: for_statement  */
#line 57 "langue1.y"
                          { printf("Statement: for_statement\n"); }
#line 1439 "y.tab.c"
    break;

  case 12: /* statement: read_token identifier  */
#line 58 "langue1.y"
                                  {printf("Statement: read_token identifier\n"); fprintf(yyout, "lea eax, [%c]\npush eax\npush dword fmtlec\ncall scanf\nadd esp, 8\n", (yyvsp[0].id));}
#line 1445 "y.tab.c"
    break;

  case 13: /* statement: write_token identifier  */
#line 59 "langue1.y"
                                   {printf("Statement: write_token identifier\n"); fprintf(yyout, "mov eax, [%c]\npush eax\npush dword fmt\ncall printf\nadd esp, 8\n", (yyvsp[0].id));}
#line 1451 "y.tab.c"
    break;

  case 18: /* finsi: fsi_token  */
#line 69 "langue1.y"
                  {
            if(sinonVu) {
                fprintf(yyout, "suite%d:\n", compteurSi);
                fprintf(yyout, ";Réduction du fsis%d\n", compteurSi);
                sinonVu = 0;
            } else {
                fprintf(yyout, "sinon%d:\n", compteurSi);
                fprintf(yyout, ";Réduction du fsi%d\n", compteurSi);
            }
        }
#line 1466 "y.tab.c"
    break;

  case 19: /* alors: then_token  */
#line 81 "langue1.y"
                   {
            compteurSi++;
            fprintf(yyout, ";Réduction du alors%d\n", compteurSi);
            fprintf(yyout, "pop eax\n");
            fprintf(yyout, "cmp eax, 1\n");
            fprintf(yyout, "jne sinon%d\n", compteurSi);
        }
#line 1478 "y.tab.c"
    break;

  case 20: /* sinon: else_token  */
#line 90 "langue1.y"
                   {
            fprintf(yyout, "jmp suite%d\nsinon%d:\n", compteurSi, compteurSi);
            fprintf(yyout, ";Réduction du sinon%d\n", compteurSi);
            sinonVu = 1;
        }
#line 1488 "y.tab.c"
    break;

  case 23: /* debutWhile: %empty  */
#line 100 "langue1.y"
             {
    printf("debutWhile\n");
    compteurWhile++;
    fprintf(yyout,"debutWhile%d:\n",compteurWhile);
}
#line 1498 "y.tab.c"
    break;

  case 24: /* expbool: condition  */
#line 106 "langue1.y"
                    {
    fprintf(yyout,"; Checking condition\n");
    fprintf(yyout,"pop eax\ncmp eax,1\njne finWhile%d\n",compteurWhile);
}
#line 1507 "y.tab.c"
    break;

  case 29: /* finWhile: endwhile_token  */
#line 117 "langue1.y"
                          {
    fprintf(yyout,"jmp debutWhile%d\nfinWhile%d:\n",compteurWhile,compteurWhile);
}
#line 1515 "y.tab.c"
    break;

  case 31: /* debutDoWhile: %empty  */
#line 126 "langue1.y"
               {
    printf("debutDoWhile\n");
    compteurDo++;
    fprintf(yyout,"debutDoWhile%d:\n",compteurDo);
}
#line 1525 "y.tab.c"
    break;

  case 32: /* expboolForDo: condition  */
#line 132 "langue1.y"
                         {
    fprintf(yyout,"; Checking condition\n");
    fprintf(yyout,"pop eax\ncmp eax,0\njne finDoWhile%d\n",compteurDo);
}
#line 1534 "y.tab.c"
    break;

  case 37: /* finDoWhile: %empty  */
#line 143 "langue1.y"
             {
    fprintf(yyout,"jmp debutDoWhile%d\nfinDoWhile%d:\n",compteurDo,compteurDo);
}
#line 1542 "y.tab.c"
    break;

  case 38: /* for_statement: for_token left_paren assignment semicolon condition semicolon assignment right_paren then_token block  */
#line 149 "langue1.y"
              {
                fprintf(yyout, "; for loop\n");
                fprintf(yyout, "; Initialization\n");
                fprintf(yyout, "pop eax\n");
                fprintf(yyout, "cmp eax, 0\n");
                fprintf(yyout, "je for_end%d\n", compteurFor);
                fprintf(yyout, "; Block start\n");
                fprintf(yyout, "; Increment\n");
                fprintf(yyout, "jmp for_init%d\n", compteurFor);
                fprintf(yyout, "for_end%d:\n", compteurFor);
              }
#line 1558 "y.tab.c"
    break;

  case 39: /* block: left_block program right_block  */
#line 163 "langue1.y"
                                       {printf("Block: { program }\n");}
#line 1564 "y.tab.c"
    break;

  case 40: /* block: statement  */
#line 164 "langue1.y"
                  {printf("Block: statement\n");}
#line 1570 "y.tab.c"
    break;

  case 41: /* assignment: identifier assign exp  */
#line 168 "langue1.y"
              {printf("Assignment: identifier assign exp\n"); updateSymbolVal((yyvsp[-2].id), (yyvsp[0].num)); fprintf(yyout, "pop eax\nmov [%c], eax\n", (yyvsp[-2].id));}
#line 1576 "y.tab.c"
    break;

  case 42: /* assignment: identifier plus_assign exp  */
#line 170 "langue1.y"
              {printf("Assignment: identifier plus_assign exp\n");
               int currentVal = symbolVal((yyvsp[-2].id));
               updateSymbolVal((yyvsp[-2].id), currentVal + (yyvsp[0].num));
               fprintf(yyout, "pop eax\nadd [%c], eax\n", (yyvsp[-2].id));}
#line 1585 "y.tab.c"
    break;

  case 43: /* assignment: identifier minus_assign exp  */
#line 175 "langue1.y"
              {printf("Assignment: identifier minus_assign exp\n");
               int currentVal = symbolVal((yyvsp[-2].id));
               updateSymbolVal((yyvsp[-2].id), currentVal - (yyvsp[0].num));
               fprintf(yyout, "pop eax\nsub [%c], eax\n", (yyvsp[-2].id));}
#line 1594 "y.tab.c"
    break;

  case 44: /* assignment: identifier multiply_assign exp  */
#line 180 "langue1.y"
              {printf("Assignment: identifier multiply_assign exp\n");
               int currentVal = symbolVal((yyvsp[-2].id));
               updateSymbolVal((yyvsp[-2].id), currentVal * (yyvsp[0].num));
               fprintf(yyout, "pop eax\nimul dword [%c], eax\n", (yyvsp[-2].id));}
#line 1603 "y.tab.c"
    break;

  case 45: /* assignment: identifier divide_assign exp  */
#line 185 "langue1.y"
              {printf("Assignment: identifier divide_assign exp\n");
               int currentVal = symbolVal((yyvsp[-2].id));
               updateSymbolVal((yyvsp[-2].id), currentVal / (yyvsp[0].num));
               fprintf(yyout, "pop eax\nmov ebx, dword [%c]\ncdq\nidiv ebx\nmov dword [%c], eax\n", (yyvsp[-2].id), (yyvsp[-2].id));}
#line 1612 "y.tab.c"
    break;

  case 46: /* assignment: identifier mod exp  */
#line 190 "langue1.y"
              {printf("Assignment: identifier mod exp\n");
               int currentVal = symbolVal((yyvsp[-2].id));
               updateSymbolVal((yyvsp[-2].id), currentVal % (yyvsp[0].num));
               fprintf(yyout, "pop eax\nmov ebx, dword [%c]\ncdq\nidiv ebx\nmov dword [%c], edx\n", (yyvsp[-2].id), (yyvsp[-2].id));}
#line 1621 "y.tab.c"
    break;

  case 47: /* condition: exp less_than exp  */
#line 196 "langue1.y"
                              {
                printf("Condition: exp LESS_THAN exp\n");
                compteurTest++;
                cmpInferieur=";Teste d'infériorité\n";
			    fprintf(yyout,"%s%sjg test%d\npush 1\njmp fintest%d \ntest%d:\npush 0\nfintest%d:\n\n\n",cmpInferieur,cmp,compteurTest,compteurTest,compteurTest,compteurTest);		       	      
            }
#line 1632 "y.tab.c"
    break;

  case 48: /* condition: exp greater_than exp  */
#line 202 "langue1.y"
                                 {
                printf("Condition: exp GREATER_THAN exp\n");
                compteurTest++;
		        cmpSuperieur=";Teste de superiorité\n";       
		        fprintf(yyout,"%s%sjg test%d\npush 0\njmp fintest%d \ntest%d:\npush 1\nfintest%d:\n\n\n",cmpSuperieur,cmp,compteurTest,compteurTest,compteurTest,compteurTest);
            }
#line 1643 "y.tab.c"
    break;

  case 49: /* condition: exp less_equal exp  */
#line 208 "langue1.y"
                               {
                printf("Condition: exp LESS_EQUAL exp\n");
                compteurTest++;
                cmpInferieur=";Teste d'infériorité\n";
			    fprintf(yyout,"%s%sjge test%d\npush 1\njmp fintest%d \ntest%d:\npush 0\nfintest%d:\n\n\n",cmpInferieur,cmp,compteurTest,compteurTest,compteurTest,compteurTest);		       	          
            }
#line 1654 "y.tab.c"
    break;

  case 50: /* condition: exp greater_equal exp  */
#line 214 "langue1.y"
                                  {(yyval.num) = (yyvsp[-2].num) >= (yyvsp[0].num); 
                printf("Condition: exp GREATER_EQUAL exp\n");
                compteurTest++;
		        cmpSuperieur=";Teste de superiorité\n";       
		        fprintf(yyout,"%s%sjge test%d\npush 0\njmp fintest%d \ntest%d:\npush 1\nfintest%d:\n\n\n",cmpSuperieur,cmp,compteurTest,compteurTest,compteurTest,compteurTest);    
            }
#line 1665 "y.tab.c"
    break;

  case 51: /* condition: exp equal exp  */
#line 220 "langue1.y"
                          {
                printf("Condition: exp EQUAL exp\n");
                compteurTest++;
			    cmpEgal = ";Teste d'égalité\n";
			    fprintf(yyout,"%s%sjne test%d\npush 1\njmp fintest%d \ntest%d:\npush 0\nfintest%d:\n\n\n",cmpEgal,cmp,compteurTest,compteurTest,compteurTest,compteurTest);      
            }
#line 1676 "y.tab.c"
    break;

  case 52: /* condition: exp different exp  */
#line 226 "langue1.y"
                              {(yyval.num) = (yyvsp[-2].num) != (yyvsp[0].num);
                printf("Condition: exp DIFFERENT exp\n");
                compteurTest++;
			    cmpDifferent=";Teste de différence\n";
			    fprintf(yyout,"%s%sjne test%d\npush 0\njmp fintest%d \ntest%d:\npush 1\nfintest%d:\n\n\n",cmpDifferent,cmp,compteurTest,compteurTest,compteurTest,compteurTest);
    
            }
#line 1688 "y.tab.c"
    break;

  case 53: /* condition: logical_not exp  */
#line 233 "langue1.y"
                            {(yyval.num) = !(yyvsp[0].num); 
                printf("Condition: LOGICAL_NOT exp\n");
                fprintf(yyout, "mov eax, %d\n", (yyvsp[0].num));
                fprintf(yyout, "cmp eax, 0\n");
                fprintf(yyout, "sete al\n");
                fprintf(yyout, "movzx eax, al\n");
            }
#line 1700 "y.tab.c"
    break;

  case 54: /* condition: exp logical_and exp  */
#line 240 "langue1.y"
                                {(yyval.num) = (yyvsp[-2].num) && (yyvsp[0].num); 
                printf("Condition: exp LOGICAL_AND exp\n");
                fprintf(yyout, "mov eax, %d\n", (yyvsp[-2].num));
                fprintf(yyout, "cmp eax, 0\n");
                fprintf(yyout, "setne al\n");
                fprintf(yyout, "mov ebx, %d\n", (yyvsp[0].num));
                fprintf(yyout, "cmp ebx, 0\n");
                fprintf(yyout, "setne bl\n");
                fprintf(yyout, "and eax, ebx\n");
            }
#line 1715 "y.tab.c"
    break;

  case 55: /* condition: exp logical_or exp  */
#line 250 "langue1.y"
                               {(yyval.num) = (yyvsp[-2].num) || (yyvsp[0].num); 
                printf("Condition: exp LOGICAL_OR exp\n");
                fprintf(yyout, "mov eax, %d\n", (yyvsp[-2].num));
                fprintf(yyout, "cmp eax, 0\n");
                fprintf(yyout, "setne al\n");
                fprintf(yyout, "mov ebx, %d\n", (yyvsp[0].num));
                fprintf(yyout, "cmp ebx, 0\n");
                fprintf(yyout, "setne bl\n");
                fprintf(yyout, "or eax, ebx\n");
            }
#line 1730 "y.tab.c"
    break;

  case 56: /* exp: term  */
#line 262 "langue1.y"
           {(yyval.num) = (yyvsp[0].num); printf("Exp: term\n");}
#line 1736 "y.tab.c"
    break;

  case 57: /* exp: exp plus term  */
#line 263 "langue1.y"
                    {(yyval.num) = (yyvsp[-2].num) + (yyvsp[0].num); printf("Exp: exp plus term\n"); fprintf(yyout, "pop ebx\npop eax\nadd eax, ebx\npush eax\n");}
#line 1742 "y.tab.c"
    break;

  case 58: /* exp: exp minus term  */
#line 264 "langue1.y"
                     {(yyval.num) = (yyvsp[-2].num) - (yyvsp[0].num); printf("Exp: exp minus term\n"); fprintf(yyout, "pop ebx\npop eax\nsub eax, ebx\npush eax\n");}
#line 1748 "y.tab.c"
    break;

  case 59: /* exp: exp multiply term  */
#line 265 "langue1.y"
                        {(yyval.num) = (yyvsp[-2].num) * (yyvsp[0].num); printf("Exp: exp multiply term\n"); fprintf(yyout, "pop ebx\npop eax\nimul eax, ebx\npush eax\n");}
#line 1754 "y.tab.c"
    break;

  case 60: /* exp: exp divide term  */
#line 266 "langue1.y"
                      {(yyval.num) = (yyvsp[-2].num) / (yyvsp[0].num); printf("Exp: exp divide term\n"); fprintf(yyout, "pop ebx\npop eax\ncdq\nidiv ebx\npush eax\n");}
#line 1760 "y.tab.c"
    break;

  case 61: /* exp: exp mod term  */
#line 267 "langue1.y"
                   {(yyval.num) = (yyvsp[-2].num) % (yyvsp[0].num); printf("Exp: exp mod term\n"); fprintf(yyout, "pop ebx\npop eax\ncdq\nidiv ebx\npush edx\n");}
#line 1766 "y.tab.c"
    break;

  case 62: /* exp: left_paren condition right_paren  */
#line 268 "langue1.y"
                                       { (yyval.num) = (yyvsp[-1].num); }
#line 1772 "y.tab.c"
    break;

  case 63: /* term: number  */
#line 271 "langue1.y"
              {(yyval.num) = (yyvsp[0].num); printf("Term: number\n"); fprintf(yyout, "push %d\n", (yyvsp[0].num));}
#line 1778 "y.tab.c"
    break;

  case 64: /* term: identifier  */
#line 272 "langue1.y"
                  {(yyval.num) = symbolVal((yyvsp[0].id)); printf("Term: identifier\n"); fprintf(yyout, "push dword [%c]\n", (yyvsp[0].id));}
#line 1784 "y.tab.c"
    break;


#line 1788 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 275 "langue1.y"


int computeSymbolIndex(char token) {
    int idx = -1;
    if(islower(token)) {
        idx = token - 'a' + 26;
    } else if(isupper(token)) {
        idx = token - 'A';
    }
    return idx;
} 

int symbolVal(char symbol) {
    int bucket = computeSymbolIndex(symbol);
    return symbols[bucket];
}

void updateSymbolVal(char symbol, int val) {
    int bucket = computeSymbolIndex(symbol);
    symbols[bucket] = val;
}

void readSymbolVal(char symbol) {
    int bucket = computeSymbolIndex(symbol);
    printf("Enter value for %c: ", symbol);
    scanf("%d", &symbols[bucket]);
}

int main(void) {
    for(int i = 0; i < 52; i++) {
        symbols[i] = 0;
    }
    yyout = fopen("output.asm", "w");
    if (!yyout) {
        fprintf(stderr, "Could not open output file.\n");
        return 1;
    }
    fprintf(yyout, "%s", header);
    int result = yyparse();
    fprintf(yyout, "%s", trailer);
    fclose(yyout);
    return result;
}

void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}

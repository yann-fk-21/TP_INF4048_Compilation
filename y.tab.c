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

#line 94 "y.tab.c"

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

#line 230 "y.tab.c"

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
  YYSYMBOL_plus = 15,                      /* plus  */
  YYSYMBOL_minus = 16,                     /* minus  */
  YYSYMBOL_multiply = 17,                  /* multiply  */
  YYSYMBOL_divide = 18,                    /* divide  */
  YYSYMBOL_mod = 19,                       /* mod  */
  YYSYMBOL_less_than = 20,                 /* less_than  */
  YYSYMBOL_greater_than = 21,              /* greater_than  */
  YYSYMBOL_less_equal = 22,                /* less_equal  */
  YYSYMBOL_greater_equal = 23,             /* greater_equal  */
  YYSYMBOL_equal = 24,                     /* equal  */
  YYSYMBOL_assign = 25,                    /* assign  */
  YYSYMBOL_plus_assign = 26,               /* plus_assign  */
  YYSYMBOL_minus_assign = 27,              /* minus_assign  */
  YYSYMBOL_multiply_assign = 28,           /* multiply_assign  */
  YYSYMBOL_divide_assign = 29,             /* divide_assign  */
  YYSYMBOL_different = 30,                 /* different  */
  YYSYMBOL_logical_and = 31,               /* logical_and  */
  YYSYMBOL_logical_or = 32,                /* logical_or  */
  YYSYMBOL_logical_not = 33,               /* logical_not  */
  YYSYMBOL_left_paren = 34,                /* left_paren  */
  YYSYMBOL_right_paren = 35,               /* right_paren  */
  YYSYMBOL_left_block = 36,                /* left_block  */
  YYSYMBOL_right_block = 37,               /* right_block  */
  YYSYMBOL_semicolon = 38,                 /* semicolon  */
  YYSYMBOL_number = 39,                    /* number  */
  YYSYMBOL_identifier = 40,                /* identifier  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_program = 42,                   /* program  */
  YYSYMBOL_line = 43,                      /* line  */
  YYSYMBOL_statement = 44,                 /* statement  */
  YYSYMBOL_if_statement = 45,              /* if_statement  */
  YYSYMBOL_finsi = 46,                     /* finsi  */
  YYSYMBOL_alors = 47,                     /* alors  */
  YYSYMBOL_sinon = 48,                     /* sinon  */
  YYSYMBOL_while_statement = 49,           /* while_statement  */
  YYSYMBOL_do_statement = 50,              /* do_statement  */
  YYSYMBOL_for_statement = 51,             /* for_statement  */
  YYSYMBOL_block = 52,                     /* block  */
  YYSYMBOL_assignment = 53,                /* assignment  */
  YYSYMBOL_condition = 54,                 /* condition  */
  YYSYMBOL_exp = 55,                       /* exp  */
  YYSYMBOL_term = 56                       /* term  */
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
#define YYFINAL  38
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   149

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  47
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  110

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    38,    38,    39,    42,    43,    46,    47,    48,    49,
      50,    51,    52,    53,    56,    57,    60,    72,    81,    88,
     102,   111,   126,   127,   130,   132,   137,   142,   147,   152,
     159,   167,   175,   183,   191,   199,   207,   214,   224,   236,
     237,   238,   239,   240,   241,   242,   245,   246
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
  "fsi_token", "plus", "minus", "multiply", "divide", "mod", "less_than",
  "greater_than", "less_equal", "greater_equal", "equal", "assign",
  "plus_assign", "minus_assign", "multiply_assign", "divide_assign",
  "different", "logical_and", "logical_or", "logical_not", "left_paren",
  "right_paren", "left_block", "right_block", "semicolon", "number",
  "identifier", "$accept", "program", "line", "statement", "if_statement",
  "finsi", "alors", "sinon", "while_statement", "do_statement",
  "for_statement", "block", "assignment", "condition", "exp", "term", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-82)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      82,    99,   -34,   -27,   -16,   -13,    96,    11,    12,    10,
       8,   -82,    -4,   -82,   -82,   -82,   -82,   -82,    95,   -82,
     -82,   125,   -82,   -82,    95,    95,    13,    82,   -82,    33,
     -82,   -82,    99,    99,    99,    99,    99,    99,   -82,   -82,
     -82,    99,    14,    94,    -7,    -7,    -7,    -7,    -7,    26,
      30,    16,    19,    34,   125,   125,   125,   125,   125,   125,
     125,   -82,    99,    99,    99,    99,    99,    99,    99,    99,
     -82,   -82,   -82,   -82,   -82,    59,    69,    95,   -82,    95,
     125,   125,   125,   125,   125,   125,   125,   125,   -82,    55,
      96,    42,    46,    44,   -82,    13,    50,     0,    57,   -82,
     -82,   -82,   -82,    55,    86,    60,    96,    88,   -82,   -82
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     8,     9,    10,    11,     6,     0,    46,
      47,     7,    39,     5,     0,     0,     0,     0,    23,     0,
      12,    13,     0,     0,     0,     0,     0,     0,     1,     3,
       4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,    24,    25,    26,    27,    28,
      36,    45,     0,     0,     0,     0,     0,     0,     0,     0,
      40,    41,    42,    43,    44,     0,     0,     0,    22,     0,
      30,    31,    32,    33,    34,    35,    37,    38,    17,     0,
       0,     0,     0,     0,    19,     0,     0,     0,     0,    20,
      18,    16,    14,     0,     0,     0,     0,     0,    21,    15
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -82,    79,    -5,    -6,   -82,    20,   -82,   -82,   -82,   -82,
     -82,   -81,   -25,   -22,     9,   101
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    10,    11,    12,    13,   102,    89,   103,    14,    15,
      16,    29,    17,    42,    43,    22
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      28,    51,    49,    50,    23,    39,   100,    24,    38,    94,
      21,     1,     2,     3,   101,     4,     5,     6,    25,     7,
       8,    26,     1,     2,     3,   108,     4,     5,     6,    32,
       7,     8,    19,    20,    40,    33,    34,    35,    36,    37,
      53,    54,    55,    56,    57,    58,    59,    39,     9,    61,
      60,    30,    31,     9,    77,    91,    78,    92,     1,     9,
       3,    75,     4,     5,     6,    76,     7,     8,    79,    88,
      98,    80,    81,    82,    83,    84,    85,    86,    87,    90,
      95,    96,    97,    93,    28,     1,     2,     3,    99,     4,
       5,     6,   104,     7,     8,     9,   106,   105,   107,     1,
      28,     3,   101,     4,     5,     6,    52,     7,     8,    44,
      45,    46,    47,    48,    62,    63,    64,    65,    66,     0,
       0,     0,     9,     0,    67,    68,    69,   109,    41,    18,
       0,     0,    27,    18,    19,    20,     9,     0,    19,    20,
      44,    45,    46,    47,    48,    70,    71,    72,    73,    74
};

static const yytype_int8 yycheck[] =
{
       6,    26,    24,    25,    38,    10,     6,    34,     0,    90,
       1,     3,     4,     5,    14,     7,     8,     9,    34,    11,
      12,    34,     3,     4,     5,   106,     7,     8,     9,    19,
      11,    12,    39,    40,    38,    25,    26,    27,    28,    29,
       7,    32,    33,    34,    35,    36,    37,    52,    40,    35,
      41,    40,    40,    40,    38,    77,    37,    79,     3,    40,
       5,    35,     7,     8,     9,    35,    11,    12,    34,    10,
      95,    62,    63,    64,    65,    66,    67,    68,    69,    10,
      38,    35,    38,    89,    90,     3,     4,     5,    38,     7,
       8,     9,    35,    11,    12,    40,    10,   103,    38,     3,
     106,     5,    14,     7,     8,     9,    27,    11,    12,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    40,    -1,    30,    31,    32,   107,    33,    34,
      -1,    -1,    36,    34,    39,    40,    40,    -1,    39,    40,
      15,    16,    17,    18,    19,    44,    45,    46,    47,    48
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     7,     8,     9,    11,    12,    40,
      42,    43,    44,    45,    49,    50,    51,    53,    34,    39,
      40,    55,    56,    38,    34,    34,    34,    36,    44,    52,
      40,    40,    19,    25,    26,    27,    28,    29,     0,    43,
      38,    33,    54,    55,    15,    16,    17,    18,    19,    54,
      54,    53,    42,     7,    55,    55,    55,    55,    55,    55,
      55,    35,    20,    21,    22,    23,    24,    30,    31,    32,
      56,    56,    56,    56,    56,    35,    35,    38,    37,    34,
      55,    55,    55,    55,    55,    55,    55,    55,    10,    47,
      10,    54,    54,    44,    52,    38,    35,    38,    53,    38,
       6,    14,    46,    48,    35,    44,    10,    38,    52,    46
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    42,    43,    43,    44,    44,    44,    44,
      44,    44,    44,    44,    45,    45,    46,    47,    48,    49,
      50,    51,    52,    52,    53,    53,    53,    53,    53,    53,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    55,
      55,    55,    55,    55,    55,    55,    56,    56
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     1,     2,     1,     1,
       1,     1,     2,     2,     8,    11,     1,     1,     1,     6,
       7,    10,     3,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     1,
       3,     3,     3,     3,     3,     3,     1,     1
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
#line 38 "langue1.y"
               {printf("Program: line\n");}
#line 1336 "y.tab.c"
    break;

  case 3: /* program: program line  */
#line 39 "langue1.y"
                       {printf("Program: line\n");}
#line 1342 "y.tab.c"
    break;

  case 4: /* line: statement semicolon  */
#line 42 "langue1.y"
                              {printf("Line: statement;\n");}
#line 1348 "y.tab.c"
    break;

  case 5: /* line: exit_command semicolon  */
#line 43 "langue1.y"
                                 {printf("Line: exit_command;\n"); exit(EXIT_SUCCESS);}
#line 1354 "y.tab.c"
    break;

  case 6: /* statement: assignment  */
#line 46 "langue1.y"
                       {printf("Statement: assignment\n");}
#line 1360 "y.tab.c"
    break;

  case 7: /* statement: print exp  */
#line 47 "langue1.y"
                      {printf("Statement: print exp\n"); fprintf(yyout, "pop eax\npush eax\npush dword fmt\ncall printf\nadd esp, 8\n");}
#line 1366 "y.tab.c"
    break;

  case 8: /* statement: if_statement  */
#line 48 "langue1.y"
                         { printf("Statement: if_statement\n"); }
#line 1372 "y.tab.c"
    break;

  case 9: /* statement: while_statement  */
#line 49 "langue1.y"
                            { printf("Statement: while_statement\n"); }
#line 1378 "y.tab.c"
    break;

  case 10: /* statement: do_statement  */
#line 50 "langue1.y"
                         { printf("Statement: do_statement\n"); }
#line 1384 "y.tab.c"
    break;

  case 11: /* statement: for_statement  */
#line 51 "langue1.y"
                          { printf("Statement: for_statement\n"); }
#line 1390 "y.tab.c"
    break;

  case 12: /* statement: read_token identifier  */
#line 52 "langue1.y"
                                  {printf("Statement: read_token identifier\n"); fprintf(yyout, "lea eax, [%c]\npush eax\npush dword fmtlec\ncall scanf\nadd esp, 8\n", (yyvsp[0].id));}
#line 1396 "y.tab.c"
    break;

  case 13: /* statement: write_token identifier  */
#line 53 "langue1.y"
                                   {printf("Statement: write_token identifier\n"); fprintf(yyout, "mov eax, [%c]\npush eax\npush dword fmt\ncall printf\nadd esp, 8\n", (yyvsp[0].id));}
#line 1402 "y.tab.c"
    break;

  case 16: /* finsi: fsi_token  */
#line 60 "langue1.y"
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
#line 1417 "y.tab.c"
    break;

  case 17: /* alors: then_token  */
#line 72 "langue1.y"
                   {
            compteurSi++;
            fprintf(yyout, ";Réduction du alors%d\n", compteurSi);
            fprintf(yyout, "pop eax\n");
            fprintf(yyout, "cmp eax, 1\n");
            fprintf(yyout, "jne sinon%d\n", compteurSi);
        }
#line 1429 "y.tab.c"
    break;

  case 18: /* sinon: else_token  */
#line 81 "langue1.y"
                   {
            fprintf(yyout, "jmp suite%d\nsinon%d:\n", compteurSi, compteurSi);
            fprintf(yyout, ";Réduction du sinon%d\n", compteurSi);
            sinonVu = 1;
        }
#line 1439 "y.tab.c"
    break;

  case 19: /* while_statement: while_token left_paren condition right_paren then_token block  */
#line 89 "langue1.y"
                {
                   fprintf(yyout, "; while loop\n");
                   fprintf(yyout, "while_start%d:\n", ++compteurWhile);
                   fprintf(yyout, "; condition check\n");
                   fprintf(yyout, "pop eax\n");
                   fprintf(yyout, "cmp eax, 0\n");
                   fprintf(yyout, "jne while_body%d\n", compteurWhile);
                   fprintf(yyout, "jmp while_end%d\n", compteurWhile);
                   fprintf(yyout, "while_body%d:\n", compteurWhile);
                }
#line 1454 "y.tab.c"
    break;

  case 20: /* do_statement: do_token block while_token left_paren condition right_paren semicolon  */
#line 103 "langue1.y"
              {
                fprintf(yyout, "; do-while loop\n");
                fprintf(yyout, "do_start%d:\n", ++compteurDo);
                fprintf(yyout, "; loop body\n");
              }
#line 1464 "y.tab.c"
    break;

  case 21: /* for_statement: for_token left_paren assignment semicolon condition semicolon assignment right_paren then_token block  */
#line 112 "langue1.y"
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
#line 1480 "y.tab.c"
    break;

  case 22: /* block: left_block program right_block  */
#line 126 "langue1.y"
                                       {printf("Block: { program }\n");}
#line 1486 "y.tab.c"
    break;

  case 23: /* block: statement  */
#line 127 "langue1.y"
                  {printf("Block: statement\n");}
#line 1492 "y.tab.c"
    break;

  case 24: /* assignment: identifier assign exp  */
#line 131 "langue1.y"
              {printf("Assignment: identifier assign exp\n"); updateSymbolVal((yyvsp[-2].id), (yyvsp[0].num)); fprintf(yyout, "pop eax\nmov [%c], eax\n", (yyvsp[-2].id));}
#line 1498 "y.tab.c"
    break;

  case 25: /* assignment: identifier plus_assign exp  */
#line 133 "langue1.y"
              {printf("Assignment: identifier plus_assign exp\n");
               int currentVal = symbolVal((yyvsp[-2].id));
               updateSymbolVal((yyvsp[-2].id), currentVal + (yyvsp[0].num));
               fprintf(yyout, "pop eax\nadd [%c], eax\n", (yyvsp[-2].id));}
#line 1507 "y.tab.c"
    break;

  case 26: /* assignment: identifier minus_assign exp  */
#line 138 "langue1.y"
              {printf("Assignment: identifier minus_assign exp\n");
               int currentVal = symbolVal((yyvsp[-2].id));
               updateSymbolVal((yyvsp[-2].id), currentVal - (yyvsp[0].num));
               fprintf(yyout, "pop eax\nsub [%c], eax\n", (yyvsp[-2].id));}
#line 1516 "y.tab.c"
    break;

  case 27: /* assignment: identifier multiply_assign exp  */
#line 143 "langue1.y"
              {printf("Assignment: identifier multiply_assign exp\n");
               int currentVal = symbolVal((yyvsp[-2].id));
               updateSymbolVal((yyvsp[-2].id), currentVal * (yyvsp[0].num));
               fprintf(yyout, "pop eax\nimul dword [%c], eax\n", (yyvsp[-2].id));}
#line 1525 "y.tab.c"
    break;

  case 28: /* assignment: identifier divide_assign exp  */
#line 148 "langue1.y"
              {printf("Assignment: identifier divide_assign exp\n");
               int currentVal = symbolVal((yyvsp[-2].id));
               updateSymbolVal((yyvsp[-2].id), currentVal / (yyvsp[0].num));
               fprintf(yyout, "pop eax\nmov ebx, dword [%c]\ncdq\nidiv ebx\nmov dword [%c], eax\n", (yyvsp[-2].id), (yyvsp[-2].id));}
#line 1534 "y.tab.c"
    break;

  case 29: /* assignment: identifier mod exp  */
#line 153 "langue1.y"
              {printf("Assignment: identifier mod exp\n");
               int currentVal = symbolVal((yyvsp[-2].id));
               updateSymbolVal((yyvsp[-2].id), currentVal % (yyvsp[0].num));
               fprintf(yyout, "pop eax\nmov ebx, dword [%c]\ncdq\nidiv ebx\nmov dword [%c], edx\n", (yyvsp[-2].id), (yyvsp[-2].id));}
#line 1543 "y.tab.c"
    break;

  case 30: /* condition: exp less_than exp  */
#line 159 "langue1.y"
                              {(yyval.num) = (yyvsp[-2].num) < (yyvsp[0].num);
                printf("Condition: exp LESS_THAN exp\n");
                compteurTest++;
                fprintf(yyout, ";Teste d'infériorité\n");
                fprintf(yyout, "mov eax, %d\n", (yyvsp[-2].num));
                fprintf(yyout, "cmp eax, %d\n", (yyvsp[0].num));
                fprintf(yyout, "jge test%d\npush 1\njmp fintest%d\ntest%d:\npush 0\nfintest%d:\n\n", compteurTest, compteurTest, compteurTest, compteurTest);
            }
#line 1556 "y.tab.c"
    break;

  case 31: /* condition: exp greater_than exp  */
#line 167 "langue1.y"
                                 {(yyval.num) = (yyvsp[-2].num) > (yyvsp[0].num); 
                printf("Condition: exp GREATER_THAN exp\n");
                compteurTest++;
                fprintf(yyout, ";Teste de superiorité\n");
                fprintf(yyout, "mov eax, %d\n", (yyvsp[-2].num));
                fprintf(yyout, "cmp eax, %d\n", (yyvsp[0].num));
                fprintf(yyout, "jle test%d\npush 1\njmp fintest%d\ntest%d:\npush 0\nfintest%d:\n\n", compteurTest, compteurTest, compteurTest, compteurTest);
            }
#line 1569 "y.tab.c"
    break;

  case 32: /* condition: exp less_equal exp  */
#line 175 "langue1.y"
                               {(yyval.num) = (yyvsp[-2].num) <= (yyvsp[0].num); 
                printf("Condition: exp LESS_EQUAL exp\n");
                compteurTest++;
                fprintf(yyout, ";Teste d'infériorité ou égalité\n");
                fprintf(yyout, "mov eax, %d\n", (yyvsp[-2].num));
                fprintf(yyout, "cmp eax, %d\n", (yyvsp[0].num));
                fprintf(yyout, "jg test%d\npush 1\njmp fintest%d\ntest%d:\npush 0\nfintest%d:\n\n", compteurTest, compteurTest, compteurTest, compteurTest);
            }
#line 1582 "y.tab.c"
    break;

  case 33: /* condition: exp greater_equal exp  */
#line 183 "langue1.y"
                                  {(yyval.num) = (yyvsp[-2].num) >= (yyvsp[0].num); 
                    printf("Condition: exp GREATER_EQUAL exp\n");
                    compteurTest++;
                    fprintf(yyout, ";Teste de superiorité ou égalité\n");
                    fprintf(yyout, "mov eax, %d\n", (yyvsp[-2].num));
                    fprintf(yyout, "cmp eax, %d\n", (yyvsp[0].num));
                    fprintf(yyout, "jl test%d\npush 1\njmp fintest%d\ntest%d:\npush 0\nfintest%d:\n\n", compteurTest, compteurTest, compteurTest, compteurTest);
            }
#line 1595 "y.tab.c"
    break;

  case 34: /* condition: exp equal exp  */
#line 191 "langue1.y"
                          {(yyval.num) = (yyvsp[-2].num) == (yyvsp[0].num); 
                printf("Condition: exp EQUAL exp\n");
                compteurTest++;
                fprintf(yyout, ";Teste d'égalité\n");
                fprintf(yyout, "mov eax, %d\n", (yyvsp[-2].num));
                fprintf(yyout, "cmp eax, %d\n", (yyvsp[0].num));
                fprintf(yyout, "jne test%d\npush 1\njmp fintest%d\ntest%d:\npush 0\nfintest%d:\n\n", compteurTest, compteurTest, compteurTest, compteurTest);
            }
#line 1608 "y.tab.c"
    break;

  case 35: /* condition: exp different exp  */
#line 199 "langue1.y"
                              {(yyval.num) = (yyvsp[-2].num) != (yyvsp[0].num);
                printf("Condition: exp DIFFERENT exp\n");
                compteurTest++;
                fprintf(yyout, ";Teste de différence\n");
                fprintf(yyout, "mov eax, %d\n", (yyvsp[-2].num));
                fprintf(yyout, "cmp eax, %d\n", (yyvsp[0].num));
                fprintf(yyout, "je test%d\npush 1\njmp fintest%d\ntest%d:\npush 0\nfintest%d:\n\n", compteurTest, compteurTest, compteurTest, compteurTest);
            }
#line 1621 "y.tab.c"
    break;

  case 36: /* condition: logical_not exp  */
#line 207 "langue1.y"
                            {(yyval.num) = !(yyvsp[0].num); 
                printf("Condition: LOGICAL_NOT exp\n");
                fprintf(yyout, "mov eax, %d\n", (yyvsp[0].num));
                fprintf(yyout, "cmp eax, 0\n");
                fprintf(yyout, "sete al\n");
                fprintf(yyout, "movzx eax, al\n");
            }
#line 1633 "y.tab.c"
    break;

  case 37: /* condition: exp logical_and exp  */
#line 214 "langue1.y"
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
#line 1648 "y.tab.c"
    break;

  case 38: /* condition: exp logical_or exp  */
#line 224 "langue1.y"
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
#line 1663 "y.tab.c"
    break;

  case 39: /* exp: term  */
#line 236 "langue1.y"
           {(yyval.num) = (yyvsp[0].num); printf("Exp: term\n");}
#line 1669 "y.tab.c"
    break;

  case 40: /* exp: exp plus term  */
#line 237 "langue1.y"
                    {(yyval.num) = (yyvsp[-2].num) + (yyvsp[0].num); printf("Exp: exp plus term\n"); fprintf(yyout, "pop ebx\npop eax\nadd eax, ebx\npush eax\n");}
#line 1675 "y.tab.c"
    break;

  case 41: /* exp: exp minus term  */
#line 238 "langue1.y"
                     {(yyval.num) = (yyvsp[-2].num) - (yyvsp[0].num); printf("Exp: exp minus term\n"); fprintf(yyout, "pop ebx\npop eax\nsub eax, ebx\npush eax\n");}
#line 1681 "y.tab.c"
    break;

  case 42: /* exp: exp multiply term  */
#line 239 "langue1.y"
                        {(yyval.num) = (yyvsp[-2].num) * (yyvsp[0].num); printf("Exp: exp multiply term\n"); fprintf(yyout, "pop ebx\npop eax\nimul eax, ebx\npush eax\n");}
#line 1687 "y.tab.c"
    break;

  case 43: /* exp: exp divide term  */
#line 240 "langue1.y"
                      {(yyval.num) = (yyvsp[-2].num) / (yyvsp[0].num); printf("Exp: exp divide term\n"); fprintf(yyout, "pop ebx\npop eax\ncdq\nidiv ebx\npush eax\n");}
#line 1693 "y.tab.c"
    break;

  case 44: /* exp: exp mod term  */
#line 241 "langue1.y"
                   {(yyval.num) = (yyvsp[-2].num) % (yyvsp[0].num); printf("Exp: exp mod term\n"); fprintf(yyout, "pop ebx\npop eax\ncdq\nidiv ebx\npush edx\n");}
#line 1699 "y.tab.c"
    break;

  case 45: /* exp: left_paren condition right_paren  */
#line 242 "langue1.y"
                                       { (yyval.num) = (yyvsp[-1].num); }
#line 1705 "y.tab.c"
    break;

  case 46: /* term: number  */
#line 245 "langue1.y"
              {(yyval.num) = (yyvsp[0].num); printf("Term: number\n"); fprintf(yyout, "push %d\n", (yyvsp[0].num));}
#line 1711 "y.tab.c"
    break;

  case 47: /* term: identifier  */
#line 246 "langue1.y"
                  {(yyval.num) = symbolVal((yyvsp[0].id)); printf("Term: identifier\n"); fprintf(yyout, "push dword [%c]\n", (yyvsp[0].id));}
#line 1717 "y.tab.c"
    break;


#line 1721 "y.tab.c"

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

#line 249 "langue1.y"


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

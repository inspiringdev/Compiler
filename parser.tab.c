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
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(const char *s);
int  yylex();

int list_created = 0;
int list_type    = 0;

FILE *out;

const char *ctype() {
    if (list_type == 1) return "double";
    if (list_type == 2) return "string";
    return "int";
}

#define NEED_LIST \
    if (!list_created) { fprintf(out, "// Error: no list created yet\n"); } \
    else

#line 95 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_MAKE = 3,                       /* MAKE  */
  YYSYMBOL_LIST = 4,                       /* LIST  */
  YYSYMBOL_NUMBERS = 5,                    /* NUMBERS  */
  YYSYMBOL_STRINGS = 6,                    /* STRINGS  */
  YYSYMBOL_FLOATS = 7,                     /* FLOATS  */
  YYSYMBOL_FROM = 8,                       /* FROM  */
  YYSYMBOL_USER = 9,                       /* USER  */
  YYSYMBOL_FIXED = 10,                     /* FIXED  */
  YYSYMBOL_OF = 11,                        /* OF  */
  YYSYMBOL_A = 12,                         /* A  */
  YYSYMBOL_AN = 13,                        /* AN  */
  YYSYMBOL_SORT = 14,                      /* SORT  */
  YYSYMBOL_ASC = 15,                       /* ASC  */
  YYSYMBOL_DESC = 16,                      /* DESC  */
  YYSYMBOL_BY = 17,                        /* BY  */
  YYSYMBOL_REMOVE = 18,                    /* REMOVE  */
  YYSYMBOL_DUPLICATES = 19,                /* DUPLICATES  */
  YYSYMBOL_UNIQUE = 20,                    /* UNIQUE  */
  YYSYMBOL_FILTER = 21,                    /* FILTER  */
  YYSYMBOL_KEEP = 22,                      /* KEEP  */
  YYSYMBOL_ONLY = 23,                      /* ONLY  */
  YYSYMBOL_WHERE = 24,                     /* WHERE  */
  YYSYMBOL_EVEN = 25,                      /* EVEN  */
  YYSYMBOL_ODD = 26,                       /* ODD  */
  YYSYMBOL_POSITIVE = 27,                  /* POSITIVE  */
  YYSYMBOL_NEGATIVE = 28,                  /* NEGATIVE  */
  YYSYMBOL_GREATER = 29,                   /* GREATER  */
  YYSYMBOL_LESS = 30,                      /* LESS  */
  YYSYMBOL_THAN = 31,                      /* THAN  */
  YYSYMBOL_EQUAL = 32,                     /* EQUAL  */
  YYSYMBOL_TO = 33,                        /* TO  */
  YYSYMBOL_SUM = 34,                       /* SUM  */
  YYSYMBOL_AVERAGE = 35,                   /* AVERAGE  */
  YYSYMBOL_MAX = 36,                       /* MAX  */
  YYSYMBOL_MIN = 37,                       /* MIN  */
  YYSYMBOL_COUNT = 38,                     /* COUNT  */
  YYSYMBOL_SIZE = 39,                      /* SIZE  */
  YYSYMBOL_REVERSE = 40,                   /* REVERSE  */
  YYSYMBOL_SHUFFLE = 41,                   /* SHUFFLE  */
  YYSYMBOL_CLEAR = 42,                     /* CLEAR  */
  YYSYMBOL_ADD = 43,                       /* ADD  */
  YYSYMBOL_APPEND = 44,                    /* APPEND  */
  YYSYMBOL_INSERT = 45,                    /* INSERT  */
  YYSYMBOL_POP = 46,                       /* POP  */
  YYSYMBOL_DELETE_CMD = 47,                /* DELETE_CMD  */
  YYSYMBOL_FIND = 48,                      /* FIND  */
  YYSYMBOL_CONTAINS = 49,                  /* CONTAINS  */
  YYSYMBOL_INDEX_OF = 50,                  /* INDEX_OF  */
  YYSYMBOL_AT = 51,                        /* AT  */
  YYSYMBOL_REPLACE = 52,                   /* REPLACE  */
  YYSYMBOL_WITH = 53,                      /* WITH  */
  YYSYMBOL_SLICE = 54,                     /* SLICE  */
  YYSYMBOL_FROM_IDX = 55,                  /* FROM_IDX  */
  YYSYMBOL_COPY = 56,                      /* COPY  */
  YYSYMBOL_MERGE = 57,                     /* MERGE  */
  YYSYMBOL_INTO = 58,                      /* INTO  */
  YYSYMBOL_FILL = 59,                      /* FILL  */
  YYSYMBOL_REPEAT = 60,                    /* REPEAT  */
  YYSYMBOL_TIMES = 61,                     /* TIMES  */
  YYSYMBOL_END_KW = 62,                    /* END_KW  */
  YYSYMBOL_FRONT_KW = 63,                  /* FRONT_KW  */
  YYSYMBOL_PRINT = 64,                     /* PRINT  */
  YYSYMBOL_SHOW = 65,                      /* SHOW  */
  YYSYMBOL_DISPLAY = 66,                   /* DISPLAY  */
  YYSYMBOL_AND = 67,                       /* AND  */
  YYSYMBOL_THEN = 68,                      /* THEN  */
  YYSYMBOL_THE = 69,                       /* THE  */
  YYSYMBOL_IN = 70,                        /* IN  */
  YYSYMBOL_ITEMS = 71,                     /* ITEMS  */
  YYSYMBOL_NUMBER_KW = 72,                 /* NUMBER_KW  */
  YYSYMBOL_NUMBER = 73,                    /* NUMBER  */
  YYSYMBOL_FLOAT_LIT = 74,                 /* FLOAT_LIT  */
  YYSYMBOL_STRING_LIT = 75,                /* STRING_LIT  */
  YYSYMBOL_YYACCEPT = 76,                  /* $accept  */
  YYSYMBOL_program = 77,                   /* program  */
  YYSYMBOL_command_list = 78,              /* command_list  */
  YYSYMBOL_command = 79,                   /* command  */
  YYSYMBOL_make_cmd = 80,                  /* make_cmd  */
  YYSYMBOL_num_seq = 81,                   /* num_seq  */
  YYSYMBOL_sort_cmd = 82,                  /* sort_cmd  */
  YYSYMBOL_dedup_cmd = 83,                 /* dedup_cmd  */
  YYSYMBOL_filter_cmd = 84,                /* filter_cmd  */
  YYSYMBOL_stat_cmd = 85,                  /* stat_cmd  */
  YYSYMBOL_manip_cmd = 86,                 /* manip_cmd  */
  YYSYMBOL_print_cmd = 87                  /* print_cmd  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   236

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  181

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   330


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    49,    49,    53,    54,    55,    56,    57,    61,    62,
      63,    64,    65,    66,    67,    71,    77,    83,    89,    95,
     101,   107,   113,   118,   123,   128,   133,   138,   142,   149,
     151,   156,   158,   160,   162,   164,   169,   176,   186,   188,
     190,   192,   194,   196,   198,   200,   202,   204,   206,   208,
     210,   212,   214,   216,   218,   220,   225,   227,   229,   231,
     233,   235,   237,   245,   254,   256,   261,   269,   271,   273,
     275,   277,   282,   284,   286,   288,   290,   292,   294,   296,
     298,   300,   302,   304,   306,   308,   310,   312,   314,   316,
     318,   320,   327,   335,   337,   345,   347,   349,   351,   353,
     355,   357,   359,   361,   363,   365,   367,   369,   371,   373,
     375
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
  "\"end of file\"", "error", "\"invalid token\"", "MAKE", "LIST",
  "NUMBERS", "STRINGS", "FLOATS", "FROM", "USER", "FIXED", "OF", "A", "AN",
  "SORT", "ASC", "DESC", "BY", "REMOVE", "DUPLICATES", "UNIQUE", "FILTER",
  "KEEP", "ONLY", "WHERE", "EVEN", "ODD", "POSITIVE", "NEGATIVE",
  "GREATER", "LESS", "THAN", "EQUAL", "TO", "SUM", "AVERAGE", "MAX", "MIN",
  "COUNT", "SIZE", "REVERSE", "SHUFFLE", "CLEAR", "ADD", "APPEND",
  "INSERT", "POP", "DELETE_CMD", "FIND", "CONTAINS", "INDEX_OF", "AT",
  "REPLACE", "WITH", "SLICE", "FROM_IDX", "COPY", "MERGE", "INTO", "FILL",
  "REPEAT", "TIMES", "END_KW", "FRONT_KW", "PRINT", "SHOW", "DISPLAY",
  "AND", "THEN", "THE", "IN", "ITEMS", "NUMBER_KW", "NUMBER", "FLOAT_LIT",
  "STRING_LIT", "$accept", "program", "command_list", "command",
  "make_cmd", "num_seq", "sort_cmd", "dedup_cmd", "filter_cmd", "stat_cmd",
  "manip_cmd", "print_cmd", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-69)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -69,     3,    -1,   -69,    18,   121,    12,    55,   112,    -7,
     -69,   -69,   -69,   -69,   -16,   -69,   -69,   -69,   -69,   -68,
     -59,    -3,    66,   -43,   -13,    -2,     1,     6,    34,     4,
      50,    82,   117,   -19,    63,   -10,    54,   109,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   171,   -69,   -69,   155,
     -69,   -69,   -69,   -69,   -69,   131,   133,   139,   -69,   158,
     -69,   -69,   149,   160,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   159,   161,   162,   142,   -69,   -69,   124,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   143,   145,
     126,   167,   -69,   148,   150,    89,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   109,   -69,   -69,   194,   196,
     197,   198,   135,   119,   -69,   -69,   136,   137,    94,   -69,
     -69,   138,   140,   123,   125,   127,   141,   -69,   144,   146,
     173,   147,   208,   151,   -69,   -69,   -69,   -69,   -69,   206,
     207,   209,   -69,   -69,   152,   211,   214,   215,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   153,   -69,   -69,   168,   -69,   -69,   -69,
     -69,   218,   220,   221,   -69,   163,   -69,   -69,   -69,   170,
     -69
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     2,     1,     0,    31,     0,     0,     0,     0,
      56,    57,    58,    59,    60,    61,    72,    73,    74,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,    97,     0,     0,     4,     8,
       9,    10,    11,    12,    13,    14,     0,    32,    33,     0,
      36,    38,    41,    44,    46,     0,     0,     0,    37,     0,
      45,    47,     0,     0,    40,    43,    68,    69,    70,    71,
      75,    76,    77,    78,     0,    82,     0,    88,    89,     0,
      91,    92,    62,    63,    64,    65,    66,    67,     0,     0,
       0,     0,    27,     0,     0,     0,   108,   110,   104,   105,
     106,   107,   103,   102,   109,     0,     5,     6,    22,    24,
      23,     0,     0,     0,    34,    35,     0,     0,     0,    39,
      42,     0,     0,     0,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,    98,    99,   100,   101,     7,     0,
       0,     0,    15,    29,    25,     0,     0,     0,    48,    50,
      52,    53,    49,    51,    79,    80,    85,    86,    83,    84,
      81,    93,    94,     0,    54,    28,     0,    16,    20,    18,
      30,     0,     0,     0,    55,     0,    17,    21,    19,     0,
      26
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -69,   -69,   -69,   -36,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    38,    39,   144,    40,    41,    42,    43,
      44,    45
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     106,   107,     4,     3,    95,    70,    71,    72,    79,    66,
      67,    68,    69,     5,    73,    74,    75,     6,    64,    65,
       7,     8,    46,     9,    98,    99,   100,   101,   102,   103,
      80,    50,    81,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    96,    29,    92,    30,    31,     4,    32,    90,
      82,   104,    83,    33,    34,    35,    36,    37,     5,   138,
      76,    84,     6,    85,    86,     7,     8,    91,     9,    87,
      51,    52,    53,    54,    55,    56,    93,    57,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    88,    29,    89,
      30,    31,     4,    32,   134,   135,   136,   137,    33,    34,
      35,    94,   105,     5,   145,   146,   147,     6,    77,    78,
       7,     8,    58,     9,    97,    59,    47,    48,    49,    60,
      61,    62,    63,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,   116,    29,   117,    30,    31,   150,    32,   151,
     114,   115,   118,    33,    34,    35,   108,   109,   110,   111,
     121,   112,   113,   119,   120,   154,   155,   156,   157,   158,
     159,   122,   123,   126,   124,   125,   128,   127,   129,   130,
     131,   132,   139,   133,   140,   141,   163,   142,   143,   148,
     149,   152,   165,   153,   160,   167,   168,   161,   169,   171,
     164,   162,   172,   173,   166,   170,   174,   176,   175,   177,
     178,   180,     0,     0,     0,     0,   179
};

static const yytype_int8 yycheck[] =
{
      36,    37,     3,     0,    23,    73,    74,    75,    51,    25,
      26,    27,    28,    14,    73,    74,    75,    18,    25,    26,
      21,    22,     4,    24,    34,    35,    36,    37,    38,    39,
      73,    19,    75,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    71,    54,     4,    56,    57,     3,    59,    55,
      73,    71,    75,    64,    65,    66,    67,    68,    14,   105,
      73,    73,    18,    75,    73,    21,    22,    73,    24,    73,
      25,    26,    27,    28,    29,    30,     4,    32,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    73,    54,    75,
      56,    57,     3,    59,    25,    26,    27,    28,    64,    65,
      66,     4,    68,    14,     5,     6,     7,    18,    62,    63,
      21,    22,    20,    24,    71,    23,    15,    16,    17,    27,
      28,    29,    30,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    31,    54,    31,    56,    57,    73,    59,    75,
      15,    16,    33,    64,    65,    66,     5,     6,     7,     8,
      31,    10,    11,    25,    26,    62,    63,    62,    63,    62,
      63,    31,    33,    51,    33,    33,    53,    73,    53,    73,
      33,    53,     8,    53,     8,     8,    33,     9,    73,    73,
      73,    73,     4,    73,    73,     9,     9,    73,     9,     8,
      73,    75,     8,     8,    73,    73,    73,     9,    60,     9,
       9,    61,    -1,    -1,    -1,    -1,    73
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    77,    78,     0,     3,    14,    18,    21,    22,    24,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    54,
      56,    57,    59,    64,    65,    66,    67,    68,    79,    80,
      82,    83,    84,    85,    86,    87,     4,    15,    16,    17,
      19,    25,    26,    27,    28,    29,    30,    32,    20,    23,
      27,    28,    29,    30,    25,    26,    25,    26,    27,    28,
      73,    74,    75,    73,    74,    75,    73,    62,    63,    51,
      73,    75,    73,    75,    73,    75,    73,    73,    73,    75,
      55,    73,     4,     4,     4,    23,    71,    71,    34,    35,
      36,    37,    38,    39,    71,    68,    79,    79,     5,     6,
       7,     8,    10,    11,    15,    16,    31,    31,    33,    25,
      26,    31,    31,    33,    33,    33,    51,    73,    53,    53,
      73,    33,    53,    53,    25,    26,    27,    28,    79,     8,
       8,     8,     9,    73,    81,     5,     6,     7,    73,    73,
      73,    75,    73,    73,    62,    63,    62,    63,    62,    63,
      73,    73,    75,    33,    73,     4,    73,     9,     9,     9,
      73,     8,     8,     8,    73,    60,     9,     9,     9,    73,
      61
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    76,    77,    78,    78,    78,    78,    78,    79,    79,
      79,    79,    79,    79,    79,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    81,
      81,    82,    82,    82,    82,    82,    83,    83,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     3,     3,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     5,     6,     5,     6,
       5,     6,     3,     3,     3,     4,     7,     2,     4,     1,
       2,     1,     2,     2,     3,     3,     2,     2,     2,     3,
       2,     2,     3,     2,     2,     2,     2,     2,     4,     4,
       4,     4,     4,     4,     4,     5,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     1,     1,     2,     2,     2,     2,     4,
       4,     4,     2,     4,     4,     4,     4,     1,     2,     2,
       3,     2,     2,     4,     4,     1,     1,     1,     3,     3,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2
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
  case 15: /* make_cmd: MAKE LIST FROM USER  */
#line 72 "parser.y"
    {
        list_created=1; list_type=0;
        fprintf(out,"vector<int> arr;\n");
        fprintf(out,"{ int n,x; cin>>n; for(int i=0;i<n;i++){cin>>x;arr.push_back(x);} }\n");
    }
#line 1313 "parser.tab.c"
    break;

  case 16: /* make_cmd: MAKE LIST NUMBERS FROM USER  */
#line 78 "parser.y"
    {
        list_created=1; list_type=0;
        fprintf(out,"vector<int> arr;\n");
        fprintf(out,"{ int n,x; cin>>n; for(int i=0;i<n;i++){cin>>x;arr.push_back(x);} }\n");
    }
#line 1323 "parser.tab.c"
    break;

  case 17: /* make_cmd: MAKE LIST OF NUMBERS FROM USER  */
#line 84 "parser.y"
    {
        list_created=1; list_type=0;
        fprintf(out,"vector<int> arr;\n");
        fprintf(out,"{ int n,x; cin>>n; for(int i=0;i<n;i++){cin>>x;arr.push_back(x);} }\n");
    }
#line 1333 "parser.tab.c"
    break;

  case 18: /* make_cmd: MAKE LIST FLOATS FROM USER  */
#line 90 "parser.y"
    {
        list_created=1; list_type=1;
        fprintf(out,"vector<double> arr;\n");
        fprintf(out,"{ int n; double x; cin>>n; for(int i=0;i<n;i++){cin>>x;arr.push_back(x);} }\n");
    }
#line 1343 "parser.tab.c"
    break;

  case 19: /* make_cmd: MAKE LIST OF FLOATS FROM USER  */
#line 96 "parser.y"
    {
        list_created=1; list_type=1;
        fprintf(out,"vector<double> arr;\n");
        fprintf(out,"{ int n; double x; cin>>n; for(int i=0;i<n;i++){cin>>x;arr.push_back(x);} }\n");
    }
#line 1353 "parser.tab.c"
    break;

  case 20: /* make_cmd: MAKE LIST STRINGS FROM USER  */
#line 102 "parser.y"
    {
        list_created=1; list_type=2;
        fprintf(out,"vector<string> arr;\n");
        fprintf(out,"{ int n; string x; cin>>n; for(int i=0;i<n;i++){cin>>x;arr.push_back(x);} }\n");
    }
#line 1363 "parser.tab.c"
    break;

  case 21: /* make_cmd: MAKE LIST OF STRINGS FROM USER  */
#line 108 "parser.y"
    {
        list_created=1; list_type=2;
        fprintf(out,"vector<string> arr;\n");
        fprintf(out,"{ int n; string x; cin>>n; for(int i=0;i<n;i++){cin>>x;arr.push_back(x);} }\n");
    }
#line 1373 "parser.tab.c"
    break;

  case 22: /* make_cmd: MAKE LIST NUMBERS  */
#line 114 "parser.y"
    {
        list_created=1; list_type=0;
        fprintf(out,"vector<int> arr = {5,3,2,5,1,4,2,8,6,7,3,9,1};\n");
    }
#line 1382 "parser.tab.c"
    break;

  case 23: /* make_cmd: MAKE LIST FLOATS  */
#line 119 "parser.y"
    {
        list_created=1; list_type=1;
        fprintf(out,"vector<double> arr = {3.14,1.41,2.71,0.57,1.73,2.23,1.61};\n");
    }
#line 1391 "parser.tab.c"
    break;

  case 24: /* make_cmd: MAKE LIST STRINGS  */
#line 124 "parser.y"
    {
        list_created=1; list_type=2;
        fprintf(out,"vector<string> arr = {\"banana\",\"apple\",\"cherry\",\"apple\",\"date\",\"elderberry\",\"fig\"};\n");
    }
#line 1400 "parser.tab.c"
    break;

  case 25: /* make_cmd: MAKE LIST FIXED num_seq  */
#line 129 "parser.y"
    {
        list_created=1; list_type=0;
        fprintf(out,"};\n");
    }
#line 1409 "parser.tab.c"
    break;

  case 26: /* make_cmd: FILL LIST WITH NUMBER REPEAT NUMBER TIMES  */
#line 134 "parser.y"
    {
        list_created=1; list_type=0;
        fprintf(out,"vector<int> arr(%d, %d);\n", (yyvsp[-1].num), (yyvsp[-3].num));
    }
#line 1418 "parser.tab.c"
    break;

  case 27: /* make_cmd: COPY LIST  */
#line 139 "parser.y"
    {
        NEED_LIST fprintf(out,"vector<%s> arr2 = arr;\n", ctype());
    }
#line 1426 "parser.tab.c"
    break;

  case 28: /* make_cmd: MERGE LIST WITH LIST  */
#line 143 "parser.y"
    {
        NEED_LIST fprintf(out,"arr.insert(arr.end(), arr2.begin(), arr2.end());\n");
    }
#line 1434 "parser.tab.c"
    break;

  case 29: /* num_seq: NUMBER  */
#line 150 "parser.y"
    { fprintf(out,"vector<int> arr = {%d", (yyvsp[0].num)); }
#line 1440 "parser.tab.c"
    break;

  case 30: /* num_seq: num_seq NUMBER  */
#line 152 "parser.y"
    { fprintf(out,",%d", (yyvsp[0].num)); }
#line 1446 "parser.tab.c"
    break;

  case 31: /* sort_cmd: SORT  */
#line 157 "parser.y"
    { NEED_LIST fprintf(out,"sort(arr.begin(),arr.end());\n"); }
#line 1452 "parser.tab.c"
    break;

  case 32: /* sort_cmd: SORT ASC  */
#line 159 "parser.y"
    { NEED_LIST fprintf(out,"sort(arr.begin(),arr.end());\n"); }
#line 1458 "parser.tab.c"
    break;

  case 33: /* sort_cmd: SORT DESC  */
#line 161 "parser.y"
    { NEED_LIST fprintf(out,"sort(arr.rbegin(),arr.rend());\n"); }
#line 1464 "parser.tab.c"
    break;

  case 34: /* sort_cmd: SORT BY ASC  */
#line 163 "parser.y"
    { NEED_LIST fprintf(out,"sort(arr.begin(),arr.end());\n"); }
#line 1470 "parser.tab.c"
    break;

  case 35: /* sort_cmd: SORT BY DESC  */
#line 165 "parser.y"
    { NEED_LIST fprintf(out,"sort(arr.rbegin(),arr.rend());\n"); }
#line 1476 "parser.tab.c"
    break;

  case 36: /* dedup_cmd: REMOVE DUPLICATES  */
#line 170 "parser.y"
    {
        NEED_LIST {
            fprintf(out,"sort(arr.begin(),arr.end());\n");
            fprintf(out,"arr.erase(unique(arr.begin(),arr.end()),arr.end());\n");
        }
    }
#line 1487 "parser.tab.c"
    break;

  case 37: /* dedup_cmd: KEEP UNIQUE  */
#line 177 "parser.y"
    {
        NEED_LIST {
            fprintf(out,"sort(arr.begin(),arr.end());\n");
            fprintf(out,"arr.erase(unique(arr.begin(),arr.end()),arr.end());\n");
        }
    }
#line 1498 "parser.tab.c"
    break;

  case 38: /* filter_cmd: FILTER EVEN  */
#line 187 "parser.y"
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](int x){return x%%2!=0;}),arr.end());\n"); }
#line 1504 "parser.tab.c"
    break;

  case 39: /* filter_cmd: KEEP ONLY EVEN  */
#line 189 "parser.y"
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](int x){return x%%2!=0;}),arr.end());\n"); }
#line 1510 "parser.tab.c"
    break;

  case 40: /* filter_cmd: WHERE EVEN  */
#line 191 "parser.y"
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](int x){return x%%2!=0;}),arr.end());\n"); }
#line 1516 "parser.tab.c"
    break;

  case 41: /* filter_cmd: FILTER ODD  */
#line 193 "parser.y"
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](int x){return x%%2==0;}),arr.end());\n"); }
#line 1522 "parser.tab.c"
    break;

  case 42: /* filter_cmd: KEEP ONLY ODD  */
#line 195 "parser.y"
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](int x){return x%%2==0;}),arr.end());\n"); }
#line 1528 "parser.tab.c"
    break;

  case 43: /* filter_cmd: WHERE ODD  */
#line 197 "parser.y"
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](int x){return x%%2==0;}),arr.end());\n"); }
#line 1534 "parser.tab.c"
    break;

  case 44: /* filter_cmd: FILTER POSITIVE  */
#line 199 "parser.y"
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](%s x){return x<=0;}),arr.end());\n",ctype()); }
#line 1540 "parser.tab.c"
    break;

  case 45: /* filter_cmd: KEEP POSITIVE  */
#line 201 "parser.y"
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](%s x){return x<=0;}),arr.end());\n",ctype()); }
#line 1546 "parser.tab.c"
    break;

  case 46: /* filter_cmd: FILTER NEGATIVE  */
#line 203 "parser.y"
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](%s x){return x>=0;}),arr.end());\n",ctype()); }
#line 1552 "parser.tab.c"
    break;

  case 47: /* filter_cmd: KEEP NEGATIVE  */
#line 205 "parser.y"
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](%s x){return x>=0;}),arr.end());\n",ctype()); }
#line 1558 "parser.tab.c"
    break;

  case 48: /* filter_cmd: FILTER GREATER THAN NUMBER  */
#line 207 "parser.y"
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](int x){return x<=%d;}),arr.end());\n",(yyvsp[0].num)); }
#line 1564 "parser.tab.c"
    break;

  case 49: /* filter_cmd: KEEP GREATER THAN NUMBER  */
#line 209 "parser.y"
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](int x){return x<=%d;}),arr.end());\n",(yyvsp[0].num)); }
#line 1570 "parser.tab.c"
    break;

  case 50: /* filter_cmd: FILTER LESS THAN NUMBER  */
#line 211 "parser.y"
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](int x){return x>=%d;}),arr.end());\n",(yyvsp[0].num)); }
#line 1576 "parser.tab.c"
    break;

  case 51: /* filter_cmd: KEEP LESS THAN NUMBER  */
#line 213 "parser.y"
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](int x){return x>=%d;}),arr.end());\n",(yyvsp[0].num)); }
#line 1582 "parser.tab.c"
    break;

  case 52: /* filter_cmd: FILTER EQUAL TO NUMBER  */
#line 215 "parser.y"
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](int x){return x!=%d;}),arr.end());\n",(yyvsp[0].num)); }
#line 1588 "parser.tab.c"
    break;

  case 53: /* filter_cmd: FILTER EQUAL TO STRING_LIT  */
#line 217 "parser.y"
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](string x){return x!=\"%s\";}),arr.end());\n",(yyvsp[0].str)); free((yyvsp[0].str)); }
#line 1594 "parser.tab.c"
    break;

  case 54: /* filter_cmd: SLICE NUMBER TO NUMBER  */
#line 219 "parser.y"
    { NEED_LIST fprintf(out,"{ vector<%s> _sl(arr.begin()+%d,arr.begin()+%d); arr=_sl; }\n",ctype(),(yyvsp[-2].num),(yyvsp[0].num)); }
#line 1600 "parser.tab.c"
    break;

  case 55: /* filter_cmd: SLICE FROM_IDX NUMBER TO NUMBER  */
#line 221 "parser.y"
    { NEED_LIST fprintf(out,"{ vector<%s> _sl(arr.begin()+%d,arr.begin()+%d); arr=_sl; }\n",ctype(),(yyvsp[-2].num),(yyvsp[0].num)); }
#line 1606 "parser.tab.c"
    break;

  case 56: /* stat_cmd: SUM  */
#line 226 "parser.y"
    { NEED_LIST fprintf(out,"{ %s _s=0; for(auto& v:arr)_s+=v; cout<<\"Sum: \"<<_s<<\"\\n\"; }\n",ctype()); }
#line 1612 "parser.tab.c"
    break;

  case 57: /* stat_cmd: AVERAGE  */
#line 228 "parser.y"
    { NEED_LIST fprintf(out,"{ double _a=0; for(auto& v:arr)_a+=v; _a/=arr.size(); cout<<\"Average: \"<<_a<<\"\\n\"; }\n"); }
#line 1618 "parser.tab.c"
    break;

  case 58: /* stat_cmd: MAX  */
#line 230 "parser.y"
    { NEED_LIST fprintf(out,"cout<<\"Max: \"<<*max_element(arr.begin(),arr.end())<<\"\\n\";\n"); }
#line 1624 "parser.tab.c"
    break;

  case 59: /* stat_cmd: MIN  */
#line 232 "parser.y"
    { NEED_LIST fprintf(out,"cout<<\"Min: \"<<*min_element(arr.begin(),arr.end())<<\"\\n\";\n"); }
#line 1630 "parser.tab.c"
    break;

  case 60: /* stat_cmd: COUNT  */
#line 234 "parser.y"
    { NEED_LIST fprintf(out,"cout<<\"Count: \"<<arr.size()<<\"\\n\";\n"); }
#line 1636 "parser.tab.c"
    break;

  case 61: /* stat_cmd: SIZE  */
#line 236 "parser.y"
    { NEED_LIST fprintf(out,"cout<<\"Size: \"<<arr.size()<<\"\\n\";\n"); }
#line 1642 "parser.tab.c"
    break;

  case 62: /* stat_cmd: FIND NUMBER  */
#line 238 "parser.y"
    {
        NEED_LIST {
            fprintf(out,"{ auto _it=find(arr.begin(),arr.end(),%d);\n",(yyvsp[0].num));
            fprintf(out,"  if(_it!=arr.end()) cout<<\"Found %d at index \"<<distance(arr.begin(),_it)<<\"\\n\";\n",(yyvsp[0].num));
            fprintf(out,"  else cout<<\"%d not found\\n\"; }\n",(yyvsp[0].num));
        }
    }
#line 1654 "parser.tab.c"
    break;

  case 63: /* stat_cmd: FIND STRING_LIT  */
#line 246 "parser.y"
    {
        NEED_LIST {
            fprintf(out,"{ auto _it=find(arr.begin(),arr.end(),string(\"%s\"));\n",(yyvsp[0].str));
            fprintf(out,"  if(_it!=arr.end()) cout<<\"Found '%s' at index \"<<distance(arr.begin(),_it)<<\"\\n\";\n",(yyvsp[0].str));
            fprintf(out,"  else cout<<\"'%s' not found\\n\"; }\n",(yyvsp[0].str));
        }
        free((yyvsp[0].str));
    }
#line 1667 "parser.tab.c"
    break;

  case 64: /* stat_cmd: CONTAINS NUMBER  */
#line 255 "parser.y"
    { NEED_LIST fprintf(out,"cout<<(find(arr.begin(),arr.end(),%d)!=arr.end()?\"Yes, contains %d\":\"No, does not contain %d\")<<\"\\n\";\n",(yyvsp[0].num),(yyvsp[0].num),(yyvsp[0].num)); }
#line 1673 "parser.tab.c"
    break;

  case 65: /* stat_cmd: CONTAINS STRING_LIT  */
#line 257 "parser.y"
    {
        NEED_LIST fprintf(out,"cout<<(find(arr.begin(),arr.end(),string(\"%s\"))!=arr.end()?\"Yes, contains '%s'\":\"No, does not contain '%s'\")<<\"\\n\";\n",(yyvsp[0].str),(yyvsp[0].str),(yyvsp[0].str));
        free((yyvsp[0].str));
    }
#line 1682 "parser.tab.c"
    break;

  case 66: /* stat_cmd: INDEX_OF NUMBER  */
#line 262 "parser.y"
    {
        NEED_LIST {
            fprintf(out,"{ auto _it=find(arr.begin(),arr.end(),%d);\n",(yyvsp[0].num));
            fprintf(out,"  if(_it!=arr.end()) cout<<\"Index of %d: \"<<distance(arr.begin(),_it)<<\"\\n\";\n",(yyvsp[0].num));
            fprintf(out,"  else cout<<\"%d not in list\\n\"; }\n",(yyvsp[0].num));
        }
    }
#line 1694 "parser.tab.c"
    break;

  case 67: /* stat_cmd: AT NUMBER  */
#line 270 "parser.y"
    { NEED_LIST fprintf(out,"cout<<\"Element at %d: \"<<arr[%d]<<\"\\n\";\n",(yyvsp[0].num),(yyvsp[0].num)); }
#line 1700 "parser.tab.c"
    break;

  case 68: /* stat_cmd: COUNT EVEN  */
#line 272 "parser.y"
    { NEED_LIST fprintf(out,"{ int _c=count_if(arr.begin(),arr.end(),[](int x){return x%%2==0;}); cout<<\"Even count: \"<<_c<<\"\\n\"; }\n"); }
#line 1706 "parser.tab.c"
    break;

  case 69: /* stat_cmd: COUNT ODD  */
#line 274 "parser.y"
    { NEED_LIST fprintf(out,"{ int _c=count_if(arr.begin(),arr.end(),[](int x){return x%%2!=0;}); cout<<\"Odd count: \"<<_c<<\"\\n\"; }\n"); }
#line 1712 "parser.tab.c"
    break;

  case 70: /* stat_cmd: COUNT POSITIVE  */
#line 276 "parser.y"
    { NEED_LIST fprintf(out,"{ int _c=count_if(arr.begin(),arr.end(),[](%s x){return x>0;}); cout<<\"Positive count: \"<<_c<<\"\\n\"; }\n",ctype()); }
#line 1718 "parser.tab.c"
    break;

  case 71: /* stat_cmd: COUNT NEGATIVE  */
#line 278 "parser.y"
    { NEED_LIST fprintf(out,"{ int _c=count_if(arr.begin(),arr.end(),[](%s x){return x<0;}); cout<<\"Negative count: \"<<_c<<\"\\n\"; }\n",ctype()); }
#line 1724 "parser.tab.c"
    break;

  case 72: /* manip_cmd: REVERSE  */
#line 283 "parser.y"
    { NEED_LIST fprintf(out,"reverse(arr.begin(),arr.end());\n"); }
#line 1730 "parser.tab.c"
    break;

  case 73: /* manip_cmd: SHUFFLE  */
#line 285 "parser.y"
    { NEED_LIST fprintf(out,"{ mt19937 _r(random_device{}()); shuffle(arr.begin(),arr.end(),_r); }\n"); }
#line 1736 "parser.tab.c"
    break;

  case 74: /* manip_cmd: CLEAR  */
#line 287 "parser.y"
    { NEED_LIST fprintf(out,"arr.clear();\n"); }
#line 1742 "parser.tab.c"
    break;

  case 75: /* manip_cmd: ADD NUMBER  */
#line 289 "parser.y"
    { NEED_LIST fprintf(out,"arr.push_back(%d);\n",(yyvsp[0].num)); }
#line 1748 "parser.tab.c"
    break;

  case 76: /* manip_cmd: ADD FLOAT_LIT  */
#line 291 "parser.y"
    { NEED_LIST fprintf(out,"arr.push_back(%g);\n",(yyvsp[0].fnum)); }
#line 1754 "parser.tab.c"
    break;

  case 77: /* manip_cmd: ADD STRING_LIT  */
#line 293 "parser.y"
    { NEED_LIST fprintf(out,"arr.push_back(\"%s\");\n",(yyvsp[0].str)); free((yyvsp[0].str)); }
#line 1760 "parser.tab.c"
    break;

  case 78: /* manip_cmd: APPEND NUMBER  */
#line 295 "parser.y"
    { NEED_LIST fprintf(out,"arr.push_back(%d);\n",(yyvsp[0].num)); }
#line 1766 "parser.tab.c"
    break;

  case 79: /* manip_cmd: APPEND NUMBER TO END_KW  */
#line 297 "parser.y"
    { NEED_LIST fprintf(out,"arr.push_back(%d);\n",(yyvsp[-2].num)); }
#line 1772 "parser.tab.c"
    break;

  case 80: /* manip_cmd: APPEND NUMBER TO FRONT_KW  */
#line 299 "parser.y"
    { NEED_LIST fprintf(out,"arr.insert(arr.begin(),%d);\n",(yyvsp[-2].num)); }
#line 1778 "parser.tab.c"
    break;

  case 81: /* manip_cmd: INSERT NUMBER AT NUMBER  */
#line 301 "parser.y"
    { NEED_LIST fprintf(out,"arr.insert(arr.begin()+%d,%d);\n",(yyvsp[0].num),(yyvsp[-2].num)); }
#line 1784 "parser.tab.c"
    break;

  case 82: /* manip_cmd: APPEND STRING_LIT  */
#line 303 "parser.y"
    { NEED_LIST fprintf(out,"arr.push_back(\"%s\");\n",(yyvsp[0].str)); free((yyvsp[0].str)); }
#line 1790 "parser.tab.c"
    break;

  case 83: /* manip_cmd: APPEND STRING_LIT TO END_KW  */
#line 305 "parser.y"
    { NEED_LIST fprintf(out,"arr.push_back(\"%s\");\n",(yyvsp[-2].str)); free((yyvsp[-2].str)); }
#line 1796 "parser.tab.c"
    break;

  case 84: /* manip_cmd: APPEND STRING_LIT TO FRONT_KW  */
#line 307 "parser.y"
    { NEED_LIST fprintf(out,"arr.insert(arr.begin(),\"%s\");\n",(yyvsp[-2].str)); free((yyvsp[-2].str)); }
#line 1802 "parser.tab.c"
    break;

  case 85: /* manip_cmd: APPEND FLOAT_LIT TO END_KW  */
#line 309 "parser.y"
    { NEED_LIST fprintf(out,"arr.push_back(%g);\n",(yyvsp[-2].fnum)); }
#line 1808 "parser.tab.c"
    break;

  case 86: /* manip_cmd: APPEND FLOAT_LIT TO FRONT_KW  */
#line 311 "parser.y"
    { NEED_LIST fprintf(out,"arr.insert(arr.begin(),%g);\n",(yyvsp[-2].fnum)); }
#line 1814 "parser.tab.c"
    break;

  case 87: /* manip_cmd: POP  */
#line 313 "parser.y"
    { NEED_LIST fprintf(out,"if(!arr.empty()) arr.pop_back();\n"); }
#line 1820 "parser.tab.c"
    break;

  case 88: /* manip_cmd: POP END_KW  */
#line 315 "parser.y"
    { NEED_LIST fprintf(out,"if(!arr.empty()) arr.pop_back();\n"); }
#line 1826 "parser.tab.c"
    break;

  case 89: /* manip_cmd: POP FRONT_KW  */
#line 317 "parser.y"
    { NEED_LIST fprintf(out,"if(!arr.empty()) arr.erase(arr.begin());\n"); }
#line 1832 "parser.tab.c"
    break;

  case 90: /* manip_cmd: DELETE_CMD AT NUMBER  */
#line 319 "parser.y"
    { NEED_LIST fprintf(out,"if(%d<(int)arr.size()) arr.erase(arr.begin()+%d);\n",(yyvsp[0].num),(yyvsp[0].num)); }
#line 1838 "parser.tab.c"
    break;

  case 91: /* manip_cmd: DELETE_CMD NUMBER  */
#line 321 "parser.y"
    {
        NEED_LIST {
            fprintf(out,"{ auto _it=find(arr.begin(),arr.end(),%d);\n",(yyvsp[0].num));
            fprintf(out,"  if(_it!=arr.end()) arr.erase(_it); }\n");
        }
    }
#line 1849 "parser.tab.c"
    break;

  case 92: /* manip_cmd: DELETE_CMD STRING_LIT  */
#line 328 "parser.y"
    {
        NEED_LIST {
            fprintf(out,"{ auto _it=find(arr.begin(),arr.end(),string(\"%s\"));\n",(yyvsp[0].str));
            fprintf(out,"  if(_it!=arr.end()) arr.erase(_it); }\n");
        }
        free((yyvsp[0].str));
    }
#line 1861 "parser.tab.c"
    break;

  case 93: /* manip_cmd: REPLACE NUMBER WITH NUMBER  */
#line 336 "parser.y"
    { NEED_LIST fprintf(out,"replace(arr.begin(),arr.end(),%d,%d);\n",(yyvsp[-2].num),(yyvsp[0].num)); }
#line 1867 "parser.tab.c"
    break;

  case 94: /* manip_cmd: REPLACE STRING_LIT WITH STRING_LIT  */
#line 338 "parser.y"
    {
        NEED_LIST fprintf(out,"replace(arr.begin(),arr.end(),string(\"%s\"),string(\"%s\"));\n",(yyvsp[-2].str),(yyvsp[0].str));
        free((yyvsp[-2].str)); free((yyvsp[0].str));
    }
#line 1876 "parser.tab.c"
    break;

  case 95: /* print_cmd: PRINT  */
#line 346 "parser.y"
    { NEED_LIST fprintf(out,"for(auto& x:arr) cout<<x<<\" \"; cout<<\"\\n\";\n"); }
#line 1882 "parser.tab.c"
    break;

  case 96: /* print_cmd: SHOW  */
#line 348 "parser.y"
    { NEED_LIST fprintf(out,"for(auto& x:arr) cout<<x<<\" \"; cout<<\"\\n\";\n"); }
#line 1888 "parser.tab.c"
    break;

  case 97: /* print_cmd: DISPLAY  */
#line 350 "parser.y"
    { NEED_LIST fprintf(out,"for(auto& x:arr) cout<<x<<\" \"; cout<<\"\\n\";\n"); }
#line 1894 "parser.tab.c"
    break;

  case 98: /* print_cmd: PRINT ONLY EVEN  */
#line 352 "parser.y"
    { NEED_LIST fprintf(out,"for(int x:arr) if(x%%2==0) cout<<x<<\" \"; cout<<\"\\n\";\n"); }
#line 1900 "parser.tab.c"
    break;

  case 99: /* print_cmd: PRINT ONLY ODD  */
#line 354 "parser.y"
    { NEED_LIST fprintf(out,"for(int x:arr) if(x%%2!=0) cout<<x<<\" \"; cout<<\"\\n\";\n"); }
#line 1906 "parser.tab.c"
    break;

  case 100: /* print_cmd: PRINT ONLY POSITIVE  */
#line 356 "parser.y"
    { NEED_LIST fprintf(out,"for(auto& x:arr) if(x>0) cout<<x<<\" \"; cout<<\"\\n\";\n"); }
#line 1912 "parser.tab.c"
    break;

  case 101: /* print_cmd: PRINT ONLY NEGATIVE  */
#line 358 "parser.y"
    { NEED_LIST fprintf(out,"for(auto& x:arr) if(x<0) cout<<x<<\" \"; cout<<\"\\n\";\n"); }
#line 1918 "parser.tab.c"
    break;

  case 102: /* print_cmd: DISPLAY SIZE  */
#line 360 "parser.y"
    { NEED_LIST fprintf(out,"cout<<\"Size: \"<<arr.size()<<\"\\n\";\n"); }
#line 1924 "parser.tab.c"
    break;

  case 103: /* print_cmd: DISPLAY COUNT  */
#line 362 "parser.y"
    { NEED_LIST fprintf(out,"cout<<\"Count: \"<<arr.size()<<\"\\n\";\n"); }
#line 1930 "parser.tab.c"
    break;

  case 104: /* print_cmd: DISPLAY SUM  */
#line 364 "parser.y"
    { NEED_LIST fprintf(out,"{ %s _s=0; for(auto& v:arr)_s+=v; cout<<\"Sum: \"<<_s<<\"\\n\"; }\n",ctype()); }
#line 1936 "parser.tab.c"
    break;

  case 105: /* print_cmd: DISPLAY AVERAGE  */
#line 366 "parser.y"
    { NEED_LIST fprintf(out,"{ double _a=0; for(auto& v:arr)_a+=v; _a/=arr.size(); cout<<\"Average: \"<<_a<<\"\\n\"; }\n"); }
#line 1942 "parser.tab.c"
    break;

  case 106: /* print_cmd: DISPLAY MAX  */
#line 368 "parser.y"
    { NEED_LIST fprintf(out,"cout<<\"Max: \"<<*max_element(arr.begin(),arr.end())<<\"\\n\";\n"); }
#line 1948 "parser.tab.c"
    break;

  case 107: /* print_cmd: DISPLAY MIN  */
#line 370 "parser.y"
    { NEED_LIST fprintf(out,"cout<<\"Min: \"<<*min_element(arr.begin(),arr.end())<<\"\\n\";\n"); }
#line 1954 "parser.tab.c"
    break;

  case 108: /* print_cmd: PRINT ITEMS  */
#line 372 "parser.y"
    { NEED_LIST fprintf(out,"for(int i=0;i<(int)arr.size();i++) cout<<i<<\": \"<<arr[i]<<\"\\n\";\n"); }
#line 1960 "parser.tab.c"
    break;

  case 109: /* print_cmd: DISPLAY ITEMS  */
#line 374 "parser.y"
    { NEED_LIST fprintf(out,"for(int i=0;i<(int)arr.size();i++) cout<<i<<\": \"<<arr[i]<<\"\\n\";\n"); }
#line 1966 "parser.tab.c"
    break;

  case 110: /* print_cmd: SHOW ITEMS  */
#line 376 "parser.y"
    { NEED_LIST fprintf(out,"for(int i=0;i<(int)arr.size();i++) cout<<i<<\": \"<<arr[i]<<\"\\n\";\n"); }
#line 1972 "parser.tab.c"
    break;


#line 1976 "parser.tab.c"

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

#line 379 "parser.y"


void yyerror(const char *s) {
    fprintf(stderr, "Parse Error: %s\n", s);
}

int main() {
    out = fopen("output.cpp","w");
    if (!out) { perror("Cannot open output.cpp"); return 1; }
    fprintf(out,"#include <iostream>\n#include <vector>\n#include <algorithm>\n#include <string>\n#include <random>\nusing namespace std;\nint main(){\n");
    yyparse();
    fprintf(out,"\nreturn 0;\n}\n");
    fclose(out);
    printf("output.cpp generated successfully!\n");
    return 0;
}

/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "./compiler.y"

    #include "compiler_common.h"
    #include "compiler_util.h"
    #include "main.h"

    int yydebug = 1;


#line 79 "./build/y.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_BUILD_Y_TAB_H_INCLUDED
# define YY_YY_BUILD_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    COUT = 258,
    INT = 259,
    FLOAT = 260,
    STRING = 261,
    BOOL = 262,
    TRUE = 263,
    FALSE = 264,
    SHR = 265,
    SHL = 266,
    BAN = 267,
    BOR = 268,
    BNT = 269,
    BXO = 270,
    ADD = 271,
    SUB = 272,
    MUL = 273,
    DIV = 274,
    REM = 275,
    NOT = 276,
    GTR = 277,
    LES = 278,
    GEQ = 279,
    LEQ = 280,
    EQL = 281,
    NEQ = 282,
    LAN = 283,
    LOR = 284,
    VAL_ASSIGN = 285,
    ADD_ASSIGN = 286,
    SUB_ASSIGN = 287,
    MUL_ASSIGN = 288,
    DIV_ASSIGN = 289,
    REM_ASSIGN = 290,
    BAN_ASSIGN = 291,
    BOR_ASSIGN = 292,
    BXO_ASSIGN = 293,
    SHR_ASSIGN = 294,
    SHL_ASSIGN = 295,
    INC_ASSIGN = 296,
    DEC_ASSIGN = 297,
    IF = 298,
    ELSE = 299,
    FOR = 300,
    WHILE = 301,
    RETURN = 302,
    BREAK = 303,
    CONTINUE = 304,
    ENDL = 305,
    VARIABLE_T = 306,
    INT_LIT = 307,
    FLOAT_LIT = 308,
    STR_LIT = 309,
    IDENT = 310,
    BOOL_LIT = 311
  };
#endif
/* Tokens.  */
#define COUT 258
#define INT 259
#define FLOAT 260
#define STRING 261
#define BOOL 262
#define TRUE 263
#define FALSE 264
#define SHR 265
#define SHL 266
#define BAN 267
#define BOR 268
#define BNT 269
#define BXO 270
#define ADD 271
#define SUB 272
#define MUL 273
#define DIV 274
#define REM 275
#define NOT 276
#define GTR 277
#define LES 278
#define GEQ 279
#define LEQ 280
#define EQL 281
#define NEQ 282
#define LAN 283
#define LOR 284
#define VAL_ASSIGN 285
#define ADD_ASSIGN 286
#define SUB_ASSIGN 287
#define MUL_ASSIGN 288
#define DIV_ASSIGN 289
#define REM_ASSIGN 290
#define BAN_ASSIGN 291
#define BOR_ASSIGN 292
#define BXO_ASSIGN 293
#define SHR_ASSIGN 294
#define SHL_ASSIGN 295
#define INC_ASSIGN 296
#define DEC_ASSIGN 297
#define IF 298
#define ELSE 299
#define FOR 300
#define WHILE 301
#define RETURN 302
#define BREAK 303
#define CONTINUE 304
#define ENDL 305
#define VARIABLE_T 306
#define INT_LIT 307
#define FLOAT_LIT 308
#define STR_LIT 309
#define IDENT 310
#define BOOL_LIT 311

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "./compiler.y"

    Type var_type;

    bool b_var;
    int i_var;
    float f_var;
    char *s_var;

    // Object object_val;

#line 254 "./build/y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BUILD_Y_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYLAST   158

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  154

#define YYUNDEFTOK  2
#define YYMAXUTOK   311


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    73,     2,     2,     2,    72,     2,     2,
      58,    59,    70,    68,    60,    69,     2,    71,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    57,
      66,    65,    67,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    62,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,     2,    64,     2,     2,     2,     2,
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
      55,    56
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    51,    51,    51,    55,    56,    60,    61,    66,    72,
      65,    79,    80,    81,    85,    90,    97,   101,   108,   115,
     116,   120,   121,   122,   123,   124,   125,   126,   130,   131,
     132,   136,   146,   147,   148,   149,   150,   151,   155,   159,
     160,   165,   167,   172,   172,   177,   183,   187,   195,   200,
     201,   202,   206,   215,   216,   220,   223,   224,   228,   233,
     241,   245,   253,   257,   265,   269,   277,   281,   285,   293,
     297,   298,   302,   303,   304,   305,   306,   307,   311,   312,
     316,   317,   318,   322,   323,   324,   329,   330,   331,   332,
     336,   337,   341,   342,   343,   344,   348,   352,   356,   360,
     364,   369,   374
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "COUT", "INT", "FLOAT", "STRING", "BOOL",
  "TRUE", "FALSE", "SHR", "SHL", "BAN", "BOR", "BNT", "BXO", "ADD", "SUB",
  "MUL", "DIV", "REM", "NOT", "GTR", "LES", "GEQ", "LEQ", "EQL", "NEQ",
  "LAN", "LOR", "VAL_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN",
  "DIV_ASSIGN", "REM_ASSIGN", "BAN_ASSIGN", "BOR_ASSIGN", "BXO_ASSIGN",
  "SHR_ASSIGN", "SHL_ASSIGN", "INC_ASSIGN", "DEC_ASSIGN", "IF", "ELSE",
  "FOR", "WHILE", "RETURN", "BREAK", "CONTINUE", "ENDL", "VARIABLE_T",
  "INT_LIT", "FLOAT_LIT", "STR_LIT", "IDENT", "BOOL_LIT", "';'", "'('",
  "')'", "','", "'['", "']'", "'{'", "'}'", "'='", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'!'", "$accept", "Program", "$@1",
  "GlobalStatementList", "GlobalStatement", "FunctionDeclStmt", "$@2",
  "$@3", "ParameterList", "Parameter", "FuncBlock", "RETURNExpr",
  "StatementList", "Statement", "SimpleStmt", "AssignmentStmt",
  "assign_op", "ExpressionStmt", "IncDecStmt", "DeclarationStmt", "Block",
  "$@4", "CoutStmt", "PrintableList", "Printable", "IFStmt", "Condition",
  "FORStmt", "ForClause", "InitStmt", "PostStmt", "Expression",
  "LogicalORExpr", "LogicalANDExpr", "ComparisonExpr", "AdditionExpr",
  "MultiplicationExpr", "UnaryExpr", "cmp_op", "add_op", "mul_op",
  "unary_op", "Type", "PrimaryExpr", "Operand", "ConversionExpr",
  "Literal", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,    59,    40,    41,
      44,    91,    93,   123,   125,    61,    60,    62,    43,    45,
      42,    47,    37,    33
};
# endif

#define YYPACT_NINF (-79)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-53)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -79,    40,   -24,   -79,    10,   -79,   -24,   -79,   -79,   -79,
     -79,    12,    20,    13,   -40,   -79,    14,   -79,    20,    11,
      16,   -79,   -79,     9,   -79,    65,   -79,   -79,   -79,   -79,
     -79,   -79,    85,    85,   -79,    26,   -79,   -79,   -79,    29,
     -79,    85,   -79,   -79,   -79,   -79,   -38,     9,    41,   -79,
     -79,   -79,    42,    43,    44,    45,    46,    15,   -79,    75,
      77,    17,   -39,   -34,    85,    48,   -79,   -79,   -79,   -79,
      85,    49,   -79,   -79,    49,    49,    50,   -10,    51,    52,
      54,     9,    85,   -79,    57,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
      85,    85,    85,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,    85,    85,    85,   -79,   -79,   -79,    85,   -79,    85,
      97,   -79,   -79,    71,   -79,   -79,    85,    85,   -79,   -79,
      53,   -79,    55,   -79,   -79,   -79,   -39,   -79,   -79,   -79,
      61,    85,   -35,    64,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,    85,   -79,   -79
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,     0,     7,     3,     5,     6,     8,
       4,     0,    13,     0,     0,    11,    14,     9,     0,     0,
       0,    12,    15,     0,    10,     0,    86,    87,    88,    89,
      99,   100,     0,     0,   102,     0,    97,    98,   101,    93,
      27,     0,    43,    83,    84,    85,     0,    20,     0,    28,
      29,    30,     0,     0,     0,     0,     0,    38,    58,    60,
      62,    64,    67,    69,     0,     0,    71,    90,    91,    92,
       0,     0,    52,    56,     0,     0,     0,    38,    42,     0,
       0,     0,     0,    17,     0,    19,    22,    21,    23,    24,
      25,    26,    33,    34,    35,    36,    37,    39,    40,    32,
       0,     0,     0,    77,    75,    72,    73,    74,    76,    78,
      79,     0,     0,     0,    80,    81,    82,     0,    70,     0,
      45,    46,    48,    49,    53,    54,     0,     0,    94,    95,
       0,    18,     0,    31,    59,    61,    63,    66,    65,    68,
       0,     0,     0,     0,    41,    44,    16,    96,    47,    50,
      51,     0,    57,    55
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -79,   -79,   -79,   -79,   103,   -79,   -79,   -79,   -79,   104,
     -79,   -79,   -36,   -79,   -33,   -79,   -79,   -79,   -79,   -79,
     -68,   -79,   -79,   -79,   -18,   -17,   -29,   -79,   -79,   -79,
     -79,   -31,   -79,    23,    24,    18,   -78,   -59,   -79,    66,
     -79,   -79,   -79,   -79,   -79,   -79,   -79
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,    11,    20,    14,    15,
      24,    84,    46,    47,    48,    49,   100,    50,    51,    52,
      53,    81,    54,   120,   121,    55,    71,    56,    75,    76,
     153,    57,    58,    59,    60,    61,    62,    63,   111,   112,
     117,    64,    65,    66,    67,    68,    69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      73,    72,    77,   123,    74,   118,   124,   125,    32,    82,
      80,    85,    25,    26,    27,    28,    29,    30,    31,    17,
      18,    92,    93,    94,    95,    96,    83,     4,    42,   109,
     110,    97,    98,     5,   137,   138,   114,   115,   116,   122,
       3,   103,   104,   105,   106,   130,    92,    93,    94,    95,
      96,   131,    32,   -52,    33,    99,    97,    98,   139,    34,
      35,    36,    37,    38,    39,     9,    40,    41,    16,   133,
      12,    13,    42,    22,   149,    19,    70,    43,    44,    23,
      99,    78,    45,   107,   108,   109,   110,    79,   140,    26,
      27,    28,    29,    30,    31,    72,   144,   143,    86,    87,
      88,    89,    90,    91,   101,   102,   119,   126,   141,    10,
     122,   128,    42,   129,   132,   142,   127,   145,   152,   146,
     147,   151,    21,   148,   134,   150,   135,     0,   113,   136,
       0,     0,     0,     0,     0,    34,     0,    36,    37,    38,
      39,     0,     0,    41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    43,    44,     0,     0,     0,    45
};

static const yytype_int16 yycheck[] =
{
      33,    32,    33,    71,    33,    64,    74,    75,    43,    47,
      41,    47,     3,     4,     5,     6,     7,     8,     9,    59,
      60,    31,    32,    33,    34,    35,    64,    51,    63,    68,
      69,    41,    42,    57,   112,   113,    70,    71,    72,    70,
       0,    24,    25,    26,    27,    81,    31,    32,    33,    34,
      35,    82,    43,    63,    45,    65,    41,    42,   117,    50,
      51,    52,    53,    54,    55,    55,    57,    58,    55,   100,
      58,    51,    63,    62,   142,    61,    11,    68,    69,    63,
      65,    55,    73,    66,    67,    68,    69,    58,   119,     4,
       5,     6,     7,     8,     9,   126,   127,   126,    57,    57,
      57,    57,    57,    57,    29,    28,    58,    57,    11,     6,
     141,    59,    63,    59,    57,    44,    65,    64,   151,    64,
      59,    57,    18,   141,   101,   142,   102,    -1,    62,   111,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
      55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    -1,    -1,    -1,    73
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    75,    76,     0,    51,    57,    77,    78,    79,    55,
      78,    80,    58,    51,    82,    83,    55,    59,    60,    61,
      81,    83,    62,    63,    84,     3,     4,     5,     6,     7,
       8,     9,    43,    45,    50,    51,    52,    53,    54,    55,
      57,    58,    63,    68,    69,    73,    86,    87,    88,    89,
      91,    92,    93,    94,    96,    99,   101,   105,   106,   107,
     108,   109,   110,   111,   115,   116,   117,   118,   119,   120,
      11,   100,   105,    88,   100,   102,   103,   105,    55,    58,
     105,    95,    47,    64,    85,    86,    57,    57,    57,    57,
      57,    57,    31,    32,    33,    34,    35,    41,    42,    65,
      90,    29,    28,    24,    25,    26,    27,    66,    67,    68,
      69,   112,   113,   113,    70,    71,    72,   114,   111,    58,
      97,    98,   105,    94,    94,    94,    57,    65,    59,    59,
      86,   105,    57,   105,   107,   108,   109,   110,   110,   111,
     105,    11,    44,   100,   105,    64,    64,    59,    98,    94,
      99,    57,    88,   104
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    74,    76,    75,    77,    77,    78,    78,    80,    81,
      79,    82,    82,    82,    83,    83,    84,    84,    85,    86,
      86,    87,    87,    87,    87,    87,    87,    87,    88,    88,
      88,    89,    90,    90,    90,    90,    90,    90,    91,    92,
      92,    93,    93,    95,    94,    96,    97,    97,    98,    99,
      99,    99,   100,   101,   101,   102,   103,   104,   105,   106,
     106,   107,   107,   108,   108,   109,   109,   109,   110,   110,
     111,   111,   112,   112,   112,   112,   112,   112,   113,   113,
     114,   114,   114,   115,   115,   115,   116,   116,   116,   116,
     117,   117,   118,   118,   118,   118,   119,   120,   120,   120,
     120,   120,   120
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     1,     0,     0,
       8,     1,     3,     0,     2,     4,     5,     3,     2,     2,
       1,     2,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     4,     2,     0,     4,     3,     1,     3,     1,     3,
       5,     5,     1,     3,     3,     5,     1,     1,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     4,     1,     1,     1,
       1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 51 "./compiler.y"
      { pushScope();}
#line 1560 "./build/y.tab.c"
    break;

  case 3:
#line 51 "./compiler.y"
                                          { dumpScope(); }
#line 1566 "./build/y.tab.c"
    break;

  case 8:
#line 66 "./compiler.y"
        {
            printf("func: %s\n", (yyvsp[0].s_var));
            initJNISignature();
            createSymbol((yyvsp[-1].var_type), (yyvsp[0].s_var), VAR_FLAG_DEFAULT, true, false);
            pushScope();
        }
#line 1577 "./build/y.tab.c"
    break;

  case 9:
#line 72 "./compiler.y"
        {
            buildJNISignature(0, false); // end of parameter list
        }
#line 1585 "./build/y.tab.c"
    break;

  case 14:
#line 86 "./compiler.y"
    { 
        createSymbol((yyvsp[-1].var_type), (yyvsp[0].s_var), VAR_FLAG_DEFAULT, false, true);
        buildJNISignature((yyvsp[-1].var_type), false);
    }
#line 1594 "./build/y.tab.c"
    break;

  case 15:
#line 91 "./compiler.y"
    { 
        createSymbol((yyvsp[-3].var_type), (yyvsp[-2].s_var), VAR_FLAG_DEFAULT, false, true);
        buildJNISignature((yyvsp[-3].var_type), true); 
    }
#line 1603 "./build/y.tab.c"
    break;

  case 16:
#line 98 "./compiler.y"
    {
        dumpScope();
    }
#line 1611 "./build/y.tab.c"
    break;

  case 17:
#line 102 "./compiler.y"
    {
        dumpScope();
    }
#line 1619 "./build/y.tab.c"
    break;

  case 18:
#line 109 "./compiler.y"
    {
        printf("RETURN\n");
    }
#line 1627 "./build/y.tab.c"
    break;

  case 31:
#line 137 "./compiler.y"
    {
        if(strcmp((yyvsp[-2].s_var), (yyvsp[0].s_var)) != 0){
            printf("error:%d: invalid operation: %s (mismatched types %s and %s)\n", yylineno, (yyvsp[-1].s_var), (yyvsp[-2].s_var), (yyvsp[0].s_var));
        }
        printf("%s\n", (yyvsp[-1].s_var));
    }
#line 1638 "./build/y.tab.c"
    break;

  case 32:
#line 146 "./compiler.y"
          {(yyval.s_var) = "ASSIGN";}
#line 1644 "./build/y.tab.c"
    break;

  case 33:
#line 147 "./compiler.y"
                 {(yyval.s_var) = "ADD";}
#line 1650 "./build/y.tab.c"
    break;

  case 34:
#line 148 "./compiler.y"
                 {(yyval.s_var) = "SUB";}
#line 1656 "./build/y.tab.c"
    break;

  case 35:
#line 149 "./compiler.y"
                 {(yyval.s_var) = "MUL";}
#line 1662 "./build/y.tab.c"
    break;

  case 36:
#line 150 "./compiler.y"
                 {(yyval.s_var) = "DIV";}
#line 1668 "./build/y.tab.c"
    break;

  case 37:
#line 151 "./compiler.y"
                 {(yyval.s_var) = "REM";}
#line 1674 "./build/y.tab.c"
    break;

  case 39:
#line 159 "./compiler.y"
                               {printf("INC_ASSIGN\n");}
#line 1680 "./build/y.tab.c"
    break;

  case 40:
#line 160 "./compiler.y"
                               {printf("DEC_ASSIGN\n");}
#line 1686 "./build/y.tab.c"
    break;

  case 41:
#line 166 "./compiler.y"
        {createSymbol((yyvsp[-3].var_type), (yyvsp[-2].s_var), VAR_FLAG_DEFAULT, false, true);}
#line 1692 "./build/y.tab.c"
    break;

  case 42:
#line 168 "./compiler.y"
        {createSymbol((yyvsp[-1].var_type), (yyvsp[0].s_var), VAR_FLAG_DEFAULT, false, true);}
#line 1698 "./build/y.tab.c"
    break;

  case 43:
#line 172 "./compiler.y"
          {pushScope();}
#line 1704 "./build/y.tab.c"
    break;

  case 44:
#line 172 "./compiler.y"
                                             {dumpScope();}
#line 1710 "./build/y.tab.c"
    break;

  case 45:
#line 178 "./compiler.y"
    { printf("cout %s\n", (yyvsp[0].s_var));}
#line 1716 "./build/y.tab.c"
    break;

  case 46:
#line 184 "./compiler.y"
    {
        (yyval.s_var) = (yyvsp[0].s_var);
    }
#line 1724 "./build/y.tab.c"
    break;

  case 47:
#line 188 "./compiler.y"
    {
        (yyval.s_var) = catDoller((yyvsp[-2].s_var), (yyvsp[0].s_var));
    }
#line 1732 "./build/y.tab.c"
    break;

  case 52:
#line 207 "./compiler.y"
    {
        if(strcmp((yyvsp[0].s_var), "bool") != 0){
            printf("error:%d: non-bool (type %s) used as for condition\n", yylineno + 1, (yyvsp[0].s_var));
        }
    }
#line 1742 "./build/y.tab.c"
    break;

  case 58:
#line 228 "./compiler.y"
                    {(yyval.s_var) = (yyvsp[0].s_var);}
#line 1748 "./build/y.tab.c"
    break;

  case 59:
#line 234 "./compiler.y"
    {
        if((strcmp((yyvsp[-2].s_var), "int32") == 0)||(strcmp((yyvsp[0].s_var), "int32") == 0)){
            printf("error:%d: invalid operation: (operator LOR not defined on int32)\n", yylineno);
        }
        (yyval.s_var) = "bool";
    printf("LOR\n");
    }
#line 1760 "./build/y.tab.c"
    break;

  case 60:
#line 241 "./compiler.y"
                     {(yyval.s_var) = (yyvsp[0].s_var);}
#line 1766 "./build/y.tab.c"
    break;

  case 61:
#line 246 "./compiler.y"
    {
        if((strcmp((yyvsp[-2].s_var), "int32") == 0)||(strcmp((yyvsp[0].s_var), "int32") == 0)){
            printf("error:%d: invalid operation: (operator LAND not defined on int32)\n", yylineno);
        }
        (yyval.s_var) = "bool"; 
        printf("LAND\n");
    }
#line 1778 "./build/y.tab.c"
    break;

  case 62:
#line 253 "./compiler.y"
                     {(yyval.s_var) = (yyvsp[0].s_var);}
#line 1784 "./build/y.tab.c"
    break;

  case 63:
#line 258 "./compiler.y"
    {
        if(strcmp((yyvsp[-2].s_var), (yyvsp[0].s_var)) != 0){
            printf("error:%d: invalid operation: %s (mismatched types %s and %s)\n", yylineno, (yyvsp[-1].s_var), (yyvsp[-2].s_var), (yyvsp[0].s_var));
        }
        (yyval.s_var) = "bool";
        printf("%s\n", (yyvsp[-1].s_var));
    }
#line 1796 "./build/y.tab.c"
    break;

  case 64:
#line 265 "./compiler.y"
                   {(yyval.s_var) = (yyvsp[0].s_var);}
#line 1802 "./build/y.tab.c"
    break;

  case 65:
#line 270 "./compiler.y"
    {
        if(strcmp((yyvsp[-2].s_var), (yyvsp[0].s_var)) != 0){
            printf("error:%d: invalid operation: %s (mismatched types %s and %s)\n", yylineno, (yyvsp[-1].s_var), (yyvsp[-2].s_var), (yyvsp[0].s_var));
        }
        (yyval.s_var) = (yyvsp[-2].s_var);
        printf("%s\n", (yyvsp[-1].s_var));
    }
#line 1814 "./build/y.tab.c"
    break;

  case 66:
#line 278 "./compiler.y"
    {(yyval.s_var) = (yyvsp[-2].s_var);
    printf("%s\n", (yyvsp[-1].s_var));
    }
#line 1822 "./build/y.tab.c"
    break;

  case 67:
#line 281 "./compiler.y"
                         {(yyval.s_var) = (yyvsp[0].s_var);}
#line 1828 "./build/y.tab.c"
    break;

  case 68:
#line 286 "./compiler.y"
    {
        if((strcmp((yyvsp[-1].s_var), "REM") == 0)&&(strcmp((yyvsp[0].s_var), "float32") == 0)){
            printf("error:%d: invalid operation: (operator REM not defined on float32)\n", yylineno);
        }
        (yyval.s_var) = (yyvsp[-2].s_var);
        printf("%s\n", (yyvsp[-1].s_var));
    }
#line 1840 "./build/y.tab.c"
    break;

  case 69:
#line 293 "./compiler.y"
                {(yyval.s_var) = (yyvsp[0].s_var);}
#line 1846 "./build/y.tab.c"
    break;

  case 70:
#line 297 "./compiler.y"
                         { (yyval.s_var) = (yyvsp[0].s_var); printf("%s\n", (yyvsp[-1].s_var));}
#line 1852 "./build/y.tab.c"
    break;

  case 71:
#line 298 "./compiler.y"
                  { (yyval.s_var) = (yyvsp[0].s_var); }
#line 1858 "./build/y.tab.c"
    break;

  case 72:
#line 302 "./compiler.y"
          { (yyval.s_var) = "EQL"; }
#line 1864 "./build/y.tab.c"
    break;

  case 73:
#line 303 "./compiler.y"
          { (yyval.s_var) = "NEQ"; }
#line 1870 "./build/y.tab.c"
    break;

  case 74:
#line 304 "./compiler.y"
          { (yyval.s_var) = "LES"; }
#line 1876 "./build/y.tab.c"
    break;

  case 75:
#line 305 "./compiler.y"
          { (yyval.s_var) = "LEQ"; }
#line 1882 "./build/y.tab.c"
    break;

  case 76:
#line 306 "./compiler.y"
          { (yyval.s_var) = "GTR"; }
#line 1888 "./build/y.tab.c"
    break;

  case 77:
#line 307 "./compiler.y"
          { (yyval.s_var) = "GEQ"; }
#line 1894 "./build/y.tab.c"
    break;

  case 78:
#line 311 "./compiler.y"
          { (yyval.s_var) = "ADD"; }
#line 1900 "./build/y.tab.c"
    break;

  case 79:
#line 312 "./compiler.y"
          { (yyval.s_var) = "SUB"; }
#line 1906 "./build/y.tab.c"
    break;

  case 80:
#line 316 "./compiler.y"
          { (yyval.s_var) = "MUL"; }
#line 1912 "./build/y.tab.c"
    break;

  case 81:
#line 317 "./compiler.y"
          { (yyval.s_var) = "QUO"; }
#line 1918 "./build/y.tab.c"
    break;

  case 82:
#line 318 "./compiler.y"
          { (yyval.s_var) = "REM"; }
#line 1924 "./build/y.tab.c"
    break;

  case 83:
#line 322 "./compiler.y"
          { (yyval.s_var) = "POS"; }
#line 1930 "./build/y.tab.c"
    break;

  case 84:
#line 323 "./compiler.y"
          { (yyval.s_var) = "NEG"; }
#line 1936 "./build/y.tab.c"
    break;

  case 85:
#line 324 "./compiler.y"
          { (yyval.s_var) = "NOT"; }
#line 1942 "./build/y.tab.c"
    break;

  case 86:
#line 329 "./compiler.y"
                        { (yyval.s_var) = "int"; }
#line 1948 "./build/y.tab.c"
    break;

  case 87:
#line 330 "./compiler.y"
                        { (yyval.s_var) = "float"; }
#line 1954 "./build/y.tab.c"
    break;

  case 88:
#line 331 "./compiler.y"
                        { (yyval.s_var) = "string"; }
#line 1960 "./build/y.tab.c"
    break;

  case 89:
#line 332 "./compiler.y"
                        { (yyval.s_var) = "bool"; }
#line 1966 "./build/y.tab.c"
    break;

  case 90:
#line 336 "./compiler.y"
              { (yyval.s_var) = (yyvsp[0].s_var); }
#line 1972 "./build/y.tab.c"
    break;

  case 92:
#line 341 "./compiler.y"
              { (yyval.s_var) = (yyvsp[0].s_var); }
#line 1978 "./build/y.tab.c"
    break;

  case 93:
#line 342 "./compiler.y"
            { (yyval.s_var) = findSymbol((yyvsp[0].s_var)); }
#line 1984 "./build/y.tab.c"
    break;

  case 94:
#line 343 "./compiler.y"
                    { findSymbol((yyvsp[-2].s_var));}
#line 1990 "./build/y.tab.c"
    break;

  case 95:
#line 344 "./compiler.y"
                         { (yyval.s_var) = (yyvsp[-1].s_var); }
#line 1996 "./build/y.tab.c"
    break;

  case 96:
#line 348 "./compiler.y"
                              {printf("%c2%c\n", (yyvsp[-1].s_var)[0], (yyvsp[-3].s_var)[0]);}
#line 2002 "./build/y.tab.c"
    break;

  case 97:
#line 353 "./compiler.y"
        {(yyval.s_var) = "int"; 
        printf("INT_LIT %d\n", (yyvsp[0].i_var)); 
        }
#line 2010 "./build/y.tab.c"
    break;

  case 98:
#line 357 "./compiler.y"
        {(yyval.s_var) = "float"; 
        printf("FLOAT_LIT %f\n", (yyvsp[0].f_var)); 
        }
#line 2018 "./build/y.tab.c"
    break;

  case 99:
#line 361 "./compiler.y"
        {(yyval.s_var) = "bool"; 
        printf("BOOL_LIT TRUE\n");
        }
#line 2026 "./build/y.tab.c"
    break;

  case 100:
#line 365 "./compiler.y"
        {   
            (yyval.s_var) = "bool"; 
            printf("BOOL_LIT FALSE\n");
        }
#line 2035 "./build/y.tab.c"
    break;

  case 101:
#line 370 "./compiler.y"
        {
            (yyval.s_var) = "string"; 
            printf("STR_LIT \"%s\"\n", (yyvsp[0].s_var));
        }
#line 2044 "./build/y.tab.c"
    break;

  case 102:
#line 375 "./compiler.y"
        {   
            (yyval.s_var) = "string";
            printf("IDENT (name=endl, address=-1)\n");
        }
#line 2053 "./build/y.tab.c"
    break;


#line 2057 "./build/y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 381 "./compiler.y"


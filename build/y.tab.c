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
#define YYLAST   181

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  162

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
       2,     2,     2,    73,    74,     2,     2,    72,     2,     2,
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
       0,    51,    51,    51,    55,    56,    60,    61,    66,    71,
      65,    78,    79,    80,    84,    89,    96,   103,   104,   108,
     109,   113,   114,   115,   116,   117,   118,   119,   123,   124,
     125,   129,   139,   140,   141,   142,   143,   144,   148,   152,
     153,   158,   160,   165,   165,   170,   175,   179,   184,   188,
     192,   197,   198,   199,   203,   212,   213,   217,   220,   221,
     225,   229,   230,   234,   242,   246,   254,   258,   266,   270,
     278,   282,   286,   294,   298,   299,   303,   304,   305,   306,
     307,   308,   312,   313,   317,   318,   319,   323,   324,   325,
     330,   331,   332,   333,   337,   338,   342,   343,   344,   345,
     346,   350,   354,   358,   362,   366,   370
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
  "'-'", "'*'", "'/'", "'%'", "'!'", "'\"'", "$accept", "Program", "$@1",
  "GlobalStatementList", "GlobalStatement", "FunctionDeclStmt", "$@2",
  "$@3", "ParameterList", "Parameter", "FuncBlock", "RETURNExpr",
  "StatementList", "Statement", "SimpleStmt", "AssignmentStmt",
  "assign_op", "ExpressionStmt", "IncDecStmt", "DeclarationStmt", "Block",
  "$@4", "CoutStmt", "PrintableList", "Printable", "IFStmt", "Condition",
  "FORStmt", "ForClause", "InitStmt", "PostStmt", "Expression", "FuncPara",
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
      42,    47,    37,    33,    34
};
# endif

#define YYPACT_NINF (-68)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-55)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -68,    11,   -14,   -68,   -19,   -68,   -14,   -68,   -68,   -68,
     -68,   -18,    -1,     1,   -11,   -68,    -8,   -68,    -1,    -5,
      -4,   -68,   -68,     9,   -68,    58,   -68,   -68,   -68,   -68,
     -68,   -68,   103,   103,    15,   -68,   -68,    23,   -68,   103,
     -68,   -68,   -68,   -68,    30,    38,     9,    29,   -68,   -68,
     -68,    31,    34,    35,    36,    48,   100,   -68,    77,    85,
     112,   -45,   -50,   103,    57,   -68,   -68,   -68,   -68,    21,
      53,   -68,   -68,    53,    53,    60,     0,    55,    95,    59,
       9,    47,   103,    65,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   103,
     103,   103,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     103,   103,   103,   -68,   -68,   -68,   103,   -68,   103,   -68,
     -68,    -2,   -68,   -68,    79,   -68,   -68,   103,   103,   -68,
      64,    67,   -68,    63,   -68,   -68,    66,   -68,   -68,   -68,
     -45,   -68,   -68,   -68,    69,    21,   -68,   -24,    72,   -68,
     103,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   103,   -68,
     -68,   -68
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,     0,     7,     3,     5,     6,     8,
       4,     0,    13,     0,     0,    11,    14,     9,     0,     0,
       0,    12,    15,     0,    10,     0,    90,    91,    92,    93,
     104,   105,     0,     0,     0,   102,   103,    97,    27,     0,
      43,    87,    88,    89,     0,    18,    20,     0,    28,    29,
      30,     0,     0,     0,     0,     0,    38,    60,    64,    66,
      68,    71,    73,     0,     0,    75,    94,    95,    96,     0,
       0,    54,    58,     0,     0,     0,    38,    42,     0,     0,
       0,     0,     0,     0,    19,    22,    21,    23,    24,    25,
      26,    33,    34,    35,    36,    37,    39,    40,    32,     0,
       0,     0,    81,    79,    76,    77,    78,    80,    82,    83,
       0,     0,     0,    84,    85,    86,     0,    74,     0,    49,
      48,     0,    46,    50,    51,    55,    56,     0,     0,    98,
      62,     0,   100,     0,   106,    17,     0,    31,    63,    65,
      67,    70,    69,    72,     0,     0,    45,     0,     0,    41,
       0,    99,    44,    16,   101,    47,    52,    53,     0,    61,
      59,    57
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -68,   -68,   -68,   -68,   134,   -68,   -68,   -68,   -68,   125,
     -68,   -68,   -36,   -68,   -33,   -68,   -68,   -68,   -68,   -68,
     -67,   -68,   -68,   -68,     4,    -3,   -29,   -68,   -68,   -68,
     -68,   -31,     2,   -68,    45,    50,    49,   -66,   -58,   -68,
      96,   -68,   -68,   -68,   -68,   -68,   -68,   -68
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,    11,    20,    14,    15,
      24,    83,    45,    46,    47,    48,    99,    49,    50,    51,
      52,    80,    53,   121,   122,    54,    70,    55,    74,    75,
     161,    56,   131,    57,    58,    59,    60,    61,    62,   110,
     111,   116,    63,    64,    65,    66,    67,    68
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      72,    71,    76,   124,    73,   117,   125,   126,    79,   145,
      84,     3,    25,    26,    27,    28,    29,    30,    31,    32,
     113,   114,   115,   108,   109,    26,    27,    28,    29,    30,
      31,    91,    92,    93,    94,    95,     9,     4,   123,    40,
      12,    96,    97,     5,   133,   141,   142,   130,    17,    18,
      13,   135,    32,    19,    33,   146,    16,    22,   143,    23,
      34,    35,    36,   -54,    37,    98,    38,    39,   137,    69,
      77,   119,    40,    35,    36,   120,    37,    41,    42,    39,
     156,    78,    43,    44,    81,    82,    85,   144,    86,    41,
      42,    87,    88,    89,    43,    44,    71,   149,   148,    26,
      27,    28,    29,    30,    31,    90,   100,    26,    27,    28,
      29,    30,    31,   101,   123,   118,    40,   127,   132,   130,
     128,   134,   136,   147,   150,   160,   151,   152,   154,   158,
     153,    91,    92,    93,    94,    95,   102,   103,   104,   105,
      10,    96,    97,    21,   157,   138,     0,    35,    36,   155,
      37,   139,   159,    39,   129,    35,    36,   112,    37,   140,
       0,    39,     0,    41,    42,    98,     0,     0,    43,    44,
       0,    41,    42,     0,     0,     0,    43,    44,   106,   107,
     108,   109
};

static const yytype_int16 yycheck[] =
{
      33,    32,    33,    70,    33,    63,    73,    74,    39,    11,
      46,     0,     3,     4,     5,     6,     7,     8,     9,    43,
      70,    71,    72,    68,    69,     4,     5,     6,     7,     8,
       9,    31,    32,    33,    34,    35,    55,    51,    69,    63,
      58,    41,    42,    57,    80,   111,   112,    78,    59,    60,
      51,    82,    43,    61,    45,    57,    55,    62,   116,    63,
      51,    52,    53,    63,    55,    65,    57,    58,    99,    11,
      55,    50,    63,    52,    53,    54,    55,    68,    69,    58,
     147,    58,    73,    74,    54,    47,    57,   118,    57,    68,
      69,    57,    57,    57,    73,    74,   127,   128,   127,     4,
       5,     6,     7,     8,     9,    57,    29,     4,     5,     6,
       7,     8,     9,    28,   145,    58,    63,    57,    59,   150,
      65,    74,    57,    44,    60,   158,    59,    64,    59,    57,
      64,    31,    32,    33,    34,    35,    24,    25,    26,    27,
       6,    41,    42,    18,   147,   100,    -1,    52,    53,   145,
      55,   101,   150,    58,    59,    52,    53,    61,    55,   110,
      -1,    58,    -1,    68,    69,    65,    -1,    -1,    73,    74,
      -1,    68,    69,    -1,    -1,    -1,    73,    74,    66,    67,
      68,    69
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    76,    77,     0,    51,    57,    78,    79,    80,    55,
      79,    81,    58,    51,    83,    84,    55,    59,    60,    61,
      82,    84,    62,    63,    85,     3,     4,     5,     6,     7,
       8,     9,    43,    45,    51,    52,    53,    55,    57,    58,
      63,    68,    69,    73,    74,    87,    88,    89,    90,    92,
      93,    94,    95,    97,   100,   102,   106,   108,   109,   110,
     111,   112,   113,   117,   118,   119,   120,   121,   122,    11,
     101,   106,    89,   101,   103,   104,   106,    55,    58,   106,
      96,    54,    47,    86,    87,    57,    57,    57,    57,    57,
      57,    31,    32,    33,    34,    35,    41,    42,    65,    91,
      29,    28,    24,    25,    26,    27,    66,    67,    68,    69,
     114,   115,   115,    70,    71,    72,   116,   113,    58,    50,
      54,    98,    99,   106,    95,    95,    95,    57,    65,    59,
     106,   107,    59,    87,    74,   106,    57,   106,   109,   110,
     111,   112,   112,   113,   106,    11,    57,    44,   101,   106,
      60,    59,    64,    64,    59,    99,    95,   100,    57,   107,
      89,   105
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    75,    77,    76,    78,    78,    79,    79,    81,    82,
      80,    83,    83,    83,    84,    84,    85,    86,    86,    87,
      87,    88,    88,    88,    88,    88,    88,    88,    89,    89,
      89,    90,    91,    91,    91,    91,    91,    91,    92,    93,
      93,    94,    94,    96,    95,    97,    98,    98,    99,    99,
      99,   100,   100,   100,   101,   102,   102,   103,   104,   105,
     106,   107,   107,   108,   108,   109,   109,   110,   110,   111,
     111,   111,   112,   112,   113,   113,   114,   114,   114,   114,
     114,   114,   115,   115,   116,   116,   116,   117,   117,   117,
     118,   118,   118,   118,   119,   119,   120,   120,   120,   120,
     120,   121,   122,   122,   122,   122,   122
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     1,     0,     0,
       8,     1,     3,     0,     2,     4,     5,     2,     0,     2,
       1,     2,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     4,     2,     0,     4,     4,     1,     3,     1,     1,
       1,     3,     5,     5,     1,     3,     3,     5,     1,     1,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     4,     1,     1,     1,     1,     3
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
#line 1569 "./build/y.tab.c"
    break;

  case 3:
#line 51 "./compiler.y"
                                          { dumpScope(); }
#line 1575 "./build/y.tab.c"
    break;

  case 8:
#line 66 "./compiler.y"
        {
            printf("func: %s", (yyvsp[0].s_var));
            createSymbol((yyvsp[-1].var_type), (yyvsp[0].s_var), VAR_FLAG_DEFAULT, true, false);
            pushScope();
        }
#line 1585 "./build/y.tab.c"
    break;

  case 9:
#line 71 "./compiler.y"
        {
            buildJNISignature(0, false); // end of parameter list
        }
#line 1593 "./build/y.tab.c"
    break;

  case 14:
#line 85 "./compiler.y"
    { 
        createSymbol((yyvsp[-1].var_type), (yyvsp[0].s_var), VAR_FLAG_DEFAULT, false, true);
        buildJNISignature((yyvsp[-1].var_type), false);
    }
#line 1602 "./build/y.tab.c"
    break;

  case 15:
#line 90 "./compiler.y"
    { 
        createSymbol((yyvsp[-3].var_type), (yyvsp[-2].s_var), VAR_FLAG_DEFAULT, false, true);
        buildJNISignature((yyvsp[-3].var_type), true); 
    }
#line 1611 "./build/y.tab.c"
    break;

  case 16:
#line 97 "./compiler.y"
    {
        dumpScope();
    }
#line 1619 "./build/y.tab.c"
    break;

  case 31:
#line 130 "./compiler.y"
    {
        if(strcmp((yyvsp[-2].s_var), (yyvsp[0].s_var)) != 0){
            printf("error:%d: invalid operation: %s (mismatched types %s and %s)\n", yylineno, (yyvsp[-1].s_var), (yyvsp[-2].s_var), (yyvsp[0].s_var));
        }
        printf("%s\n", (yyvsp[-1].s_var));
    }
#line 1630 "./build/y.tab.c"
    break;

  case 32:
#line 139 "./compiler.y"
          {(yyval.s_var) = "ASSIGN";}
#line 1636 "./build/y.tab.c"
    break;

  case 33:
#line 140 "./compiler.y"
                 {(yyval.s_var) = "ADD";}
#line 1642 "./build/y.tab.c"
    break;

  case 34:
#line 141 "./compiler.y"
                 {(yyval.s_var) = "SUB";}
#line 1648 "./build/y.tab.c"
    break;

  case 35:
#line 142 "./compiler.y"
                 {(yyval.s_var) = "MUL";}
#line 1654 "./build/y.tab.c"
    break;

  case 36:
#line 143 "./compiler.y"
                 {(yyval.s_var) = "DIV";}
#line 1660 "./build/y.tab.c"
    break;

  case 37:
#line 144 "./compiler.y"
                 {(yyval.s_var) = "REM";}
#line 1666 "./build/y.tab.c"
    break;

  case 39:
#line 152 "./compiler.y"
                               {printf("INC_ASSIGN\n");}
#line 1672 "./build/y.tab.c"
    break;

  case 40:
#line 153 "./compiler.y"
                               {printf("DEC_ASSIGN\n");}
#line 1678 "./build/y.tab.c"
    break;

  case 41:
#line 159 "./compiler.y"
        {insert_symbol(false, false, (yyvsp[-2].s_var), (yyvsp[-3].s_var), "-");}
#line 1684 "./build/y.tab.c"
    break;

  case 42:
#line 161 "./compiler.y"
        {insert_symbol(false, false, (yyvsp[0].s_var), (yyvsp[-1].s_var), "-");}
#line 1690 "./build/y.tab.c"
    break;

  case 43:
#line 165 "./compiler.y"
          {pushScope();}
#line 1696 "./build/y.tab.c"
    break;

  case 44:
#line 165 "./compiler.y"
                                             {dumpScope();}
#line 1702 "./build/y.tab.c"
    break;

  case 45:
#line 170 "./compiler.y"
                                     {printf("cout\n");}
#line 1708 "./build/y.tab.c"
    break;

  case 46:
#line 176 "./compiler.y"
    {
        printf("string")
    }
#line 1716 "./build/y.tab.c"
    break;

  case 48:
#line 185 "./compiler.y"
    {
        printf("STR_LIT \"%s\"\n", (yyvsp[0].s_var));
    }
#line 1724 "./build/y.tab.c"
    break;

  case 49:
#line 189 "./compiler.y"
    {
        printf("IDENT (name=endl, address=-1)");
    }
#line 1732 "./build/y.tab.c"
    break;

  case 54:
#line 204 "./compiler.y"
    {
        if(strcmp((yyvsp[0].s_var), "bool") != 0){
            printf("error:%d: non-bool (type %s) used as for condition\n", yylineno + 1, (yyvsp[0].s_var));
        }
    }
#line 1742 "./build/y.tab.c"
    break;

  case 60:
#line 225 "./compiler.y"
                    {(yyval.s_var) = (yyvsp[0].s_var);}
#line 1748 "./build/y.tab.c"
    break;

  case 63:
#line 235 "./compiler.y"
    {
        if((strcmp((yyvsp[-2].s_var), "int32") == 0)||(strcmp((yyvsp[0].s_var), "int32") == 0)){
            printf("error:%d: invalid operation: (operator LOR not defined on int32)\n", yylineno);
        }
        (yyval.s_var) = "bool";
    printf("LOR\n");
    }
#line 1760 "./build/y.tab.c"
    break;

  case 64:
#line 242 "./compiler.y"
                     {(yyval.s_var) = (yyvsp[0].s_var);}
#line 1766 "./build/y.tab.c"
    break;

  case 65:
#line 247 "./compiler.y"
    {
        if((strcmp((yyvsp[-2].s_var), "int32") == 0)||(strcmp((yyvsp[0].s_var), "int32") == 0)){
            printf("error:%d: invalid operation: (operator LAND not defined on int32)\n", yylineno);
        }
        (yyval.s_var) = "bool"; 
        printf("LAND\n");
    }
#line 1778 "./build/y.tab.c"
    break;

  case 66:
#line 254 "./compiler.y"
                     {(yyval.s_var) = (yyvsp[0].s_var);}
#line 1784 "./build/y.tab.c"
    break;

  case 67:
#line 259 "./compiler.y"
    {
        if(strcmp((yyvsp[-2].s_var), (yyvsp[0].s_var)) != 0){
            printf("error:%d: invalid operation: %s (mismatched types %s and %s)\n", yylineno, (yyvsp[-1].s_var), (yyvsp[-2].s_var), (yyvsp[0].s_var));
        }
        (yyval.s_var) = "bool";
        printf("%s\n", (yyvsp[-1].s_var));
    }
#line 1796 "./build/y.tab.c"
    break;

  case 68:
#line 266 "./compiler.y"
                   {(yyval.s_var) = (yyvsp[0].s_var);}
#line 1802 "./build/y.tab.c"
    break;

  case 69:
#line 271 "./compiler.y"
    {
        if(strcmp((yyvsp[-2].s_var), (yyvsp[0].s_var)) != 0){
            printf("error:%d: invalid operation: %s (mismatched types %s and %s)\n", yylineno, (yyvsp[-1].s_var), (yyvsp[-2].s_var), (yyvsp[0].s_var));
        }
        (yyval.s_var) = (yyvsp[-2].s_var);
        printf("%s\n", (yyvsp[-1].s_var));
    }
#line 1814 "./build/y.tab.c"
    break;

  case 70:
#line 279 "./compiler.y"
    {(yyval.s_var) = (yyvsp[-2].s_var);
    printf("%s\n", (yyvsp[-1].s_var));
    }
#line 1822 "./build/y.tab.c"
    break;

  case 71:
#line 282 "./compiler.y"
                         {(yyval.s_var) = (yyvsp[0].s_var);}
#line 1828 "./build/y.tab.c"
    break;

  case 72:
#line 287 "./compiler.y"
    {
        if((strcmp((yyvsp[-1].s_var), "REM") == 0)&&(strcmp((yyvsp[0].s_var), "float32") == 0)){
            printf("error:%d: invalid operation: (operator REM not defined on float32)\n", yylineno);
        }
        (yyval.s_var) = (yyvsp[-2].s_var);
        printf("%s\n", (yyvsp[-1].s_var));
    }
#line 1840 "./build/y.tab.c"
    break;

  case 73:
#line 294 "./compiler.y"
                {(yyval.s_var) = (yyvsp[0].s_var);}
#line 1846 "./build/y.tab.c"
    break;

  case 74:
#line 298 "./compiler.y"
                         { (yyval.s_var) = (yyvsp[0].s_var); printf("%s\n", (yyvsp[-1].s_var));}
#line 1852 "./build/y.tab.c"
    break;

  case 75:
#line 299 "./compiler.y"
                  { (yyval.s_var) = (yyvsp[0].s_var); }
#line 1858 "./build/y.tab.c"
    break;

  case 76:
#line 303 "./compiler.y"
          { (yyval.s_var) = "EQL"; }
#line 1864 "./build/y.tab.c"
    break;

  case 77:
#line 304 "./compiler.y"
          { (yyval.s_var) = "NEQ"; }
#line 1870 "./build/y.tab.c"
    break;

  case 78:
#line 305 "./compiler.y"
          { (yyval.s_var) = "LES"; }
#line 1876 "./build/y.tab.c"
    break;

  case 79:
#line 306 "./compiler.y"
          { (yyval.s_var) = "LEQ"; }
#line 1882 "./build/y.tab.c"
    break;

  case 80:
#line 307 "./compiler.y"
          { (yyval.s_var) = "GTR"; }
#line 1888 "./build/y.tab.c"
    break;

  case 81:
#line 308 "./compiler.y"
          { (yyval.s_var) = "GEQ"; }
#line 1894 "./build/y.tab.c"
    break;

  case 82:
#line 312 "./compiler.y"
          { (yyval.s_var) = "ADD"; }
#line 1900 "./build/y.tab.c"
    break;

  case 83:
#line 313 "./compiler.y"
          { (yyval.s_var) = "SUB"; }
#line 1906 "./build/y.tab.c"
    break;

  case 84:
#line 317 "./compiler.y"
          { (yyval.s_var) = "MUL"; }
#line 1912 "./build/y.tab.c"
    break;

  case 85:
#line 318 "./compiler.y"
          { (yyval.s_var) = "QUO"; }
#line 1918 "./build/y.tab.c"
    break;

  case 86:
#line 319 "./compiler.y"
          { (yyval.s_var) = "REM"; }
#line 1924 "./build/y.tab.c"
    break;

  case 87:
#line 323 "./compiler.y"
          { (yyval.s_var) = "POS"; }
#line 1930 "./build/y.tab.c"
    break;

  case 88:
#line 324 "./compiler.y"
          { (yyval.s_var) = "NEG"; }
#line 1936 "./build/y.tab.c"
    break;

  case 89:
#line 325 "./compiler.y"
          { (yyval.s_var) = "NOT"; }
#line 1942 "./build/y.tab.c"
    break;

  case 90:
#line 330 "./compiler.y"
                        { (yyval.s_var) = "int32"; }
#line 1948 "./build/y.tab.c"
    break;

  case 91:
#line 331 "./compiler.y"
                        { (yyval.s_var) = "float32"; }
#line 1954 "./build/y.tab.c"
    break;

  case 92:
#line 332 "./compiler.y"
                        { (yyval.s_var) = "string"; }
#line 1960 "./build/y.tab.c"
    break;

  case 93:
#line 333 "./compiler.y"
                        { (yyval.s_var) = "bool"; }
#line 1966 "./build/y.tab.c"
    break;

  case 94:
#line 337 "./compiler.y"
              { (yyval.s_var) = (yyvsp[0].s_var); }
#line 1972 "./build/y.tab.c"
    break;

  case 96:
#line 342 "./compiler.y"
              { (yyval.s_var) = (yyvsp[0].s_var); }
#line 1978 "./build/y.tab.c"
    break;

  case 97:
#line 343 "./compiler.y"
            { (yyval.s_var) = findSymbol((yyvsp[0].s_var), false); }
#line 1984 "./build/y.tab.c"
    break;

  case 98:
#line 344 "./compiler.y"
                    { findSymbol((yyvsp[-2].s_var), true);}
#line 1990 "./build/y.tab.c"
    break;

  case 99:
#line 345 "./compiler.y"
                             { findSymbol((yyvsp[-3].s_var), true);}
#line 1996 "./build/y.tab.c"
    break;

  case 100:
#line 346 "./compiler.y"
                         { (yyval.s_var) = (yyvsp[-1].s_var); }
#line 2002 "./build/y.tab.c"
    break;

  case 101:
#line 350 "./compiler.y"
                              {printf("%c2%c\n", (yyvsp[-1].s_var)[0], (yyvsp[-3].s_var)[0]);}
#line 2008 "./build/y.tab.c"
    break;

  case 102:
#line 355 "./compiler.y"
        {(yyval.s_var) = "int32"; 
        printf("INT_LIT %d\n", (yyvsp[0].i_var)); 
        }
#line 2016 "./build/y.tab.c"
    break;

  case 103:
#line 359 "./compiler.y"
        {(yyval.s_var) = "float32"; 
        printf("FLOAT_LIT %f\n", (yyvsp[0].f_var)); 
        }
#line 2024 "./build/y.tab.c"
    break;

  case 104:
#line 363 "./compiler.y"
        {(yyval.s_var) = "bool"; 
        printf("TRUE 1\n");
        }
#line 2032 "./build/y.tab.c"
    break;

  case 105:
#line 367 "./compiler.y"
        {(yyval.s_var) = "bool"; 
        printf("FALSE 0\n");
        }
#line 2040 "./build/y.tab.c"
    break;

  case 106:
#line 371 "./compiler.y"
        {(yyval.s_var) = "string"; 
        printf("STR_LIT %s\n", (yyvsp[-1].s_var)); 
        }
#line 2048 "./build/y.tab.c"
    break;


#line 2052 "./build/y.tab.c"

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
#line 376 "./compiler.y"

/* C code section */

/*     : Expression ADD Expression { $$.type = add($<object_val>1, $<object_val>3); }
    | Expression SUB Expression { $$.type = sub($<object_val>1, $<object_val>3); }
    | Expression MUL Expression { $$.type = mul($<object_val>1, $<object_val>3); }
    | Expression DIV Expression { $$.type = div($<object_val>1, $<object_val>3); }
    | Expression REM Expression { $$.type = rem($<object_val>1, $<object_val>3); }
    | Expression BAN Expression { $$.type = band($<object_val>1, $<object_val>3); }
    | Expression BOR Expression { $$.type = bor($<object_val>1, $<object_val>3); }
    | Expression BXO Expression { $$.type = bxor($<object_val>1, $<object_val>3); }
    | Expression SHR Expression { $$.type = shr($<object_val>1, $<object_val>3); }
    | Expression SHL Expression { $$.type = shl($<object_val>1, $<object_val>3); }
    | Expression ADD_ASSIGN Expression { $$.type = add_assign($<object_val>1, $<object_val>3); }
    | Expression SUB_ASSIGN Expression { $$.type = sub_assign($<object_val>1, $<object_val>3); }
    | Expression MUL_ASSIGN Expression { $$.type = mul_assign($<object_val>1, $<object_val>3); }
    | Expression DIV_ASSIGN Expression { $$.type = div_assign($<object_val>1, $<object_val>3); }
    | Expression REM_ASSIGN Expression { $$.type = rem_assign($<object_val>1, $<object_val>3); }
    | Expression BAN_ASSIGN Expression { $$.type = band_assign($<object_val>1, $<object_val>3); }
    | Expression BOR_ASSIGN Expression { $$.type = bor_assign($<object_val>1, $<object_val>3); }
    | Expression BXO_ASSIGN Expression { $$.type = bxor_assign($<object_val>1, $<object_val>3); }
    | Expression SHR_ASSIGN Expression { $$.type = shr_assign($<object_val>1, $<object_val>3); }
    | Expression SHL_ASSIGN Expression { $$.type = shl_assign($<object_val>1, $<object_val>3); }
    | Expression INC_ASSIGN Expression { $$.type = inc_assign($<object_val>1, $<object_val>3); }
    | Expression DEC_ASSIGN Expression { $$.type = dec_assign($<object_val>1, $<object_val>3); }
    | Expression GTR Expression { $$.type = gtr($<object_val>1, $<object_val>3); }
    | Expression LES Expression { $$.type = les($<object_val>1, $<object_val>3); }
    | Expression GEQ Expression { $$.type = geq($<object_val>1, $<object_val>3); }
    | Expression LEQ Expression { $$.type = leq($<object_val>1, $<object_val>3); }
    | Expression EQL Expression { $$.type = eql($<object_val>1, $<object_val>3); }
    | Expression NEQ Expression { $$.type = neq($<object_val>1, $<object_val>3); }
    | Expression LAN Expression { $$.type = land($<object_val>1, $<object_val>3); }
    | Expression LOR Expression { $$.type = lor($<object_val>1, $<object_val>3); }
    | Expression NOT Expression { $$.type = not($<object_val>1, $<object_val>3); }
    | '(' Expression ')' { $$.type = $<object_val>2; } */

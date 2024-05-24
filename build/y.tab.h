/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

#line 180 "./build/y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BUILD_Y_TAB_H_INCLUDED  */

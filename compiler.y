/* Definition section */
%{
    #include "compiler_common.h"
    #include "compiler_util.h"
    #include "main.h"

    int yydebug = 1;

%}

/* Variable or self-defined structure */
%union {
    Type var_type;

    bool b_var;
    int i_var;
    float f_var;
    char *s_var;

    // Object object_val;
}

/* Token without return */
%token COUT INT FLOAT STRING BOOL TRUE FALSE
%token SHR SHL BAN BOR BNT BXO ADD SUB MUL DIV REM NOT GTR LES GEQ LEQ EQL NEQ LAN LOR
%token VAL_ASSIGN ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN REM_ASSIGN BAN_ASSIGN BOR_ASSIGN BXO_ASSIGN SHR_ASSIGN SHL_ASSIGN INC_ASSIGN DEC_ASSIGN
%token IF ELSE FOR WHILE RETURN BREAK CONTINUE ENDL

/* Token with return, which need to sepcify type */
%token <var_type> VARIABLE_T
%token <i_var> INT_LIT
%token <f_var> FLOAT_LIT
%token <s_var> STR_LIT IDENT 
%token <b_var> BOOL_LIT

/* Nonterminal with return, which need to sepcify type */
%type <s_var> Type Literal cmp_op add_op mul_op unary_op assign_op 
%type <s_var> Expression LogicalORExpr LogicalANDExpr ComparisonExpr AdditionExpr MultiplicationExpr UnaryExpr PrimaryExpr Operand PrintableList

%left ADD SUB
%left MUL DIV REM

/* Yacc will start at this nonterminal */
%start Program

%%
/* Grammar section */


Program
    : { pushScope();} GlobalStatementList { dumpScope(); }
;

GlobalStatementList 
    : GlobalStatementList GlobalStatement
    | GlobalStatement
;

GlobalStatement
    : FunctionDeclStmt
    | ';'       
;

FunctionDeclStmt
    : VARIABLE_T IDENT 
        {
            printf("func: %s\n", $<s_var>2);
            initJNISignature();
            createSymbol($<var_type>1, $<s_var>2, VAR_FLAG_DEFAULT, true, false);
            pushScope();
        } '(' ParameterList ')'
        {
            buildJNISignature(0, false); // end of parameter list
        } FuncBlock 
;


ParameterList 
    : Parameter
    | ParameterList ',' Parameter
    |
;

Parameter
    : VARIABLE_T IDENT 
    { 
        createSymbol($<var_type>1, $<s_var>2, VAR_FLAG_DEFAULT, false, true);
        buildJNISignature($<var_type>1, false);
    }
    | VARIABLE_T IDENT '[' ']' 
    { 
        createSymbol($<var_type>1, $<s_var>2, VAR_FLAG_DEFAULT, false, true);
        buildJNISignature($<var_type>1, true); 
    }

FuncBlock
    : '{' StatementList RETURNExpr ';' '}' 
    {
        dumpScope();
    }
    | '{' StatementList '}' 
    {
        dumpScope();
    }
;

RETURNExpr
    : RETURN Expression
    {
        printf("RETURN\n");
    }
;

StatementList
    : Statement StatementList 
    | Statement 
;

Statement
    : DeclarationStmt ';'
    | SimpleStmt ';'
    | Block ';'
    | CoutStmt ';'
    | IFStmt ';'
    | FORStmt ';'
    | ';'
;

SimpleStmt
    : AssignmentStmt
    | ExpressionStmt
    | IncDecStmt
;

AssignmentStmt
    : Expression assign_op Expression 
    {
        if(strcmp($<s_var>1, $<s_var>3) != 0){
            printf("error:%d: invalid operation: %s (mismatched types %s and %s)\n", yylineno, $<s_var>2, $<s_var>1, $<s_var>3);
        }
        printf("%s\n", $<s_var>2);
    }
;

assign_op
    : '=' {$$ = "ASSIGN";}
    | ADD_ASSIGN {$$ = "ADD";}
    | SUB_ASSIGN {$$ = "SUB";}
    | MUL_ASSIGN {$$ = "MUL";}
    | DIV_ASSIGN {$$ = "DIV";}
    | REM_ASSIGN {$$ = "REM";}
;

ExpressionStmt
    : Expression
;

IncDecStmt
    : Expression INC_ASSIGN    {printf("INC_ASSIGN\n");}
    | Expression DEC_ASSIGN    {printf("DEC_ASSIGN\n");}
;


DeclarationStmt
    : VARIABLE_T IDENT '=' Expression
        {createSymbol($<var_type>1, $<s_var>2, VAR_FLAG_DEFAULT, false, true);}
    | VARIABLE_T IDENT
        {createSymbol($<var_type>1, $<s_var>2, VAR_FLAG_DEFAULT, false, true);}
;

Block  
    : '{' {pushScope();} StatementList '}'   {dumpScope();}
;

/*cin cout*/
CoutStmt
	: COUT SHL PrintableList 
    { printf("cout %s\n", $<s_var>3);}
;

//可印出的列表
PrintableList
    : Printable 
    {
        $$ = $<s_var>1;
    }
    | PrintableList SHL Printable
    {
        $$ = catDoller($<s_var>1, $<s_var>3);
    }
;

//可印出的token
Printable
	: Expression
;


IFStmt
    : IF Condition Block
    | IF Condition Block ELSE Block
    | IF Condition Block ELSE IFStmt
;

Condition
    : Expression 
    {
        if(strcmp($<s_var>1, "bool") != 0){
            printf("error:%d: non-bool (type %s) used as for condition\n", yylineno + 1, $<s_var>1);
        }
    }
;

FORStmt
    : FOR Condition Block
    | FOR ForClause Block
;

ForClause
    : InitStmt ';' Condition ';' PostStmt
;

InitStmt : SimpleStmt
PostStmt : SimpleStmt


Expression
    : LogicalORExpr {$$ = $1;}
;


LogicalORExpr
    : LogicalANDExpr LOR LogicalANDExpr
    {
        if((strcmp($<s_var>1, "int32") == 0)||(strcmp($<s_var>3, "int32") == 0)){
            printf("error:%d: invalid operation: (operator LOR not defined on int32)\n", yylineno);
        }
        $$ = "bool";
    printf("LOR\n");
    }
    | LogicalANDExpr {$$ = $1;}
;

LogicalANDExpr
    : ComparisonExpr LAN ComparisonExpr
    {
        if((strcmp($<s_var>1, "int32") == 0)||(strcmp($<s_var>3, "int32") == 0)){
            printf("error:%d: invalid operation: (operator LAND not defined on int32)\n", yylineno);
        }
        $$ = "bool"; 
        printf("LAND\n");
    }
    | ComparisonExpr {$$ = $1;}
;

ComparisonExpr
    : AdditionExpr cmp_op AdditionExpr
    {
        if(strcmp($<s_var>1, $<s_var>3) != 0){
            printf("error:%d: invalid operation: %s (mismatched types %s and %s)\n", yylineno, $<s_var>2, $<s_var>1, $<s_var>3);
        }
        $$ = "bool";
        printf("%s\n", $<s_var>2);
    }
    | AdditionExpr {$$ = $1;}
;

AdditionExpr
    : MultiplicationExpr add_op MultiplicationExpr
    {
        if(strcmp($<s_var>1, $<s_var>3) != 0){
            printf("error:%d: invalid operation: %s (mismatched types %s and %s)\n", yylineno, $<s_var>2, $<s_var>1, $<s_var>3);
        }
        $$ = $1;
        printf("%s\n", $<s_var>2);
    }
    | AdditionExpr add_op MultiplicationExpr
    {$$ = $1;
    printf("%s\n", $<s_var>2);
    }
    | MultiplicationExpr {$$ = $1;}
;

MultiplicationExpr
    : UnaryExpr mul_op UnaryExpr
    {
        if((strcmp($<s_var>2, "REM") == 0)&&(strcmp($<s_var>3, "float32") == 0)){
            printf("error:%d: invalid operation: (operator REM not defined on float32)\n", yylineno);
        }
        $$ = $1;
        printf("%s\n", $<s_var>2);
    }
    | UnaryExpr {$$ = $1;}
;

UnaryExpr
    : unary_op UnaryExpr { $$ = $2; printf("%s\n", $<s_var>1);}
    | PrimaryExpr { $$ = $1; }
;

cmp_op 
    : EQL { $$ = "EQL"; }
    | NEQ { $$ = "NEQ"; }
    | '<' { $$ = "LES"; }
    | LEQ { $$ = "LEQ"; }
    | '>' { $$ = "GTR"; }
    | GEQ { $$ = "GEQ"; }
;

add_op 
    : '+' { $$ = "ADD"; }
    | '-' { $$ = "SUB"; }
;

mul_op 
    : '*' { $$ = "MUL"; }
    | '/' { $$ = "QUO"; }
    | '%' { $$ = "REM"; }
;

unary_op 
    : '+' { $$ = "POS"; }
    | '-' { $$ = "NEG"; }
    | '!' { $$ = "NOT"; }
;


Type
	: INT		{ $$ = "int"; }
	| FLOAT		{ $$ = "float"; }
	| STRING	{ $$ = "string"; }
	| BOOL		{ $$ = "bool"; }
;

PrimaryExpr 
    : Operand { $$ = $1; }
    | ConversionExpr
;

Operand 
    : Literal { $$ = $1; }
    | IDENT { $$ = findSymbol($<s_var>1); } 
    | IDENT '(' ')' { findSymbol($<s_var>1);} 
    | '(' Expression ')' { $$ = $2; }
;

ConversionExpr 
    : Type '(' Expression ')' {printf("%c2%c\n", $<s_var>3[0], $<s_var>1[0]);}
;

Literal
    : INT_LIT
        {$$ = "int"; 
        printf("INT_LIT %d\n", $<i_var>1); 
        }
    | FLOAT_LIT
        {$$ = "float"; 
        printf("FLOAT_LIT %f\n", $<f_var>1); 
        }
    | TRUE 
        {$$ = "bool"; 
        printf("BOOL_LIT TRUE\n");
        }
    | FALSE 
        {   
            $$ = "bool"; 
            printf("BOOL_LIT FALSE\n");
        }
    | STR_LIT 
        {
            $$ = "string"; 
            printf("STR_LIT \"%s\"\n", $<s_var>1);
        }
    | ENDL 
        {   
            $$ = "string";
            printf("IDENT (name=endl, address=-1)\n");
        }
;

%%

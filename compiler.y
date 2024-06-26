/* Definition section */
%{
    #include "compiler_common.h"
    #include "compiler_util.h"
    #include "main.h"

    int yydebug = 1;
    int array_element_count = 0;
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
%type <s_var> Literal cmp_op add_op mul_op unary_op assign_op bit_op bit_op2
%type <s_var> Expression LogicalORExpr LogicalANDExpr ComparisonExpr AdditionExpr MultiplicationExpr UnaryExpr BitOperationExpr PrimaryExpr Operand Variable PrintableList ConversionExpr Declarator DeclaratorList DeclarationStmt

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
            createSymbol($<var_type>1, $<s_var>2, VAR_FLAG_DEFAULT, true, false, false);
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
        createSymbol($<var_type>1, $<s_var>2, VAR_FLAG_DEFAULT, false, true, false);
        buildJNISignature($<var_type>1, false);
    }
    | VARIABLE_T IDENT '[' ']' 
    { 
        createSymbol($<var_type>1, $<s_var>2, VAR_FLAG_DEFAULT, false, true, true);
        buildJNISignature($<var_type>1, true); 
    }

FuncBlock
    : '{' StatementList '}' 
    {
        dumpScope();
    }




StatementList
    : Statement StatementList
    | Statement
;

Statement
    : Block
    | CoutStmt ';'
    | SimpleStmt ';'
    | IFStmt
    | FORStmt
    | WHILEstmt
    | BREAKStmt ';'
    | CONTINUEStmt ';'
    | RETURNStmt ';'
;

SimpleStmt
    : AssignmentStmt
    | ExpressionStmt
    | IncDecStmt
    | DeclarationStmt
    |
;

AssignmentStmt
    : Expression assign_op Expression 
    {
        // if(strcmp($<s_var>1, $<s_var>3) != 0 ) {
        //     printf("error:%d: invalid operation: %s (mismatched types %s and %s)\n", yylineno, $<s_var>2, $<s_var>1, $<s_var>3);
        // } OK: int a = (float)(5.5)
        printf("%s\n", $<s_var>2);
    }
;


assign_op
    : VAL_ASSIGN {$$ = "EQL_ASSIGN";}
    | ADD_ASSIGN {$$ = "ADD_ASSIGN";}
    | SUB_ASSIGN {$$ = "SUB_ASSIGN";}
    | MUL_ASSIGN {$$ = "MUL_ASSIGN";}
    | DIV_ASSIGN {$$ = "DIV_ASSIGN";}
    | REM_ASSIGN {$$ = "REM_ASSIGN";}
    | SHR_ASSIGN {$$ = "SHR_ASSIGN";}
    | SHL_ASSIGN {$$ = "SHL_ASSIGN";}
    | BAN_ASSIGN {$$ = "BAN_ASSIGN";}
    | BOR_ASSIGN {$$ = "BOR_ASSIGN";}
    | BXO_ASSIGN {$$ = "BXO_ASSIGN";}
;

ExpressionStmt
    : Expression
;

IncDecStmt
    : Expression INC_ASSIGN    {printf("INC_ASSIGN\n");}
    | Expression DEC_ASSIGN    {printf("DEC_ASSIGN\n");}
;


DeclarationStmt
    : VARIABLE_T { setVarType($<var_type>1); } DeclaratorList
;

DeclaratorList
	: Declarator
	| DeclaratorList ',' Declarator 
;

Declarator
    : IDENT 
    {
        createSymbol(0, $<s_var>1, VAR_FLAG_DEFAULT, false, false, false);
    }
	| IDENT VAL_ASSIGN Expression 
    {
        if(getVarType() == AUTO_TYPE){
            setVarType(getVarTypeByStr($<s_var>3));
        }
        createSymbol(0, $<s_var>1, VAR_FLAG_DEFAULT, false, false,false);
    }
	| IDENT '[' Expression ']' 
    {
		createSymbol(0, $<s_var>1, VAR_FLAG_DEFAULT, false, false, true);
	}
	| IDENT '[' Expression ']' '[' Expression ']' 
    {
		// printf("create array: %d\n", 0); 
		createSymbol(0, $<s_var>1, VAR_FLAG_DEFAULT, false, false, true);
	}
	| IDENT '[' Expression ']' VAL_ASSIGN { array_element_count = 0; } '{' ElementList '}' 
    {
		printf("create array: %d\n", array_element_count);
		createSymbol(0, $<s_var>1, VAR_FLAG_DEFAULT, false, false, true);
	}
;

ElementList
    : Element
    | ElementList ',' Element
    |
;

Element
    : Expression 
    {
        array_element_count += 1;
    }
;

Block  
    : '{' { pushScope(); } StatementList '}' { dumpScope(); }
; 


CoutStmt
	: COUT SHL PrintableList 
    { 
        printf("cout %s\n", $<s_var>3);
    }
;

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

Printable
	: Expression
;


IFStmt
	: IF '(' Expression ')' { printf("IF\n"); } Statement
	| IFStmt ELSE { printf("ELSE\n"); } Statement
;

WHILEstmt
    : WHILE { printf("WHILE\n"); } '(' Condition ')' Statement
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
    : FOR { printf("FOR\n"); } '(' { pushScope(); } ForClause ')' FuncBlock
    
;

ForClause
    : InitStmt ';' Condition ';' PostStmt
    | DeclarationStmt ':' Expression 
    {
        updateSymbolType(NULL, getVarTypeByStr($<s_var>3));
    }
    
;

InitStmt : SimpleStmt
PostStmt : SimpleStmt

BREAKStmt
    : BREAK
    {
        printf("BREAK\n");
    }
;   

RETURNStmt
    : RETURN Expression
    {
        printf("RETURN\n");
    }
    | RETURN
    {
        printf("RETURN\n");
    }
;

CONTINUEStmt
    : CONTINUE
    {
        printf("CONTINUE\n");
    }
;


Expression
    : LogicalORExpr {$$ = $1;}
;


LogicalORExpr
    : LogicalORExpr LOR LogicalANDExpr
    {
        if((strcmp($<s_var>1, "int32") == 0)||(strcmp($<s_var>3, "int32") == 0)){
            printf("error:%d: invalid operation: (operator LOR not defined on int32)\n", yylineno);
        }
        $$ = "bool";
        printf("LOR\n");
    }
    | LogicalANDExpr LOR LogicalANDExpr
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
    : LogicalANDExpr LAN ComparisonExpr
    {
        if((strcmp($<s_var>1, "int32") == 0)||(strcmp($<s_var>3, "int32") == 0)){
            printf("error:%d: invalid operation: (operator LAND not defined on int32)\n", yylineno);
        }
        $$ = "bool"; 
        printf("LAN\n");
    }
    | ComparisonExpr LAN ComparisonExpr
    {
        if((strcmp($<s_var>1, "int32") == 0)||(strcmp($<s_var>3, "int32") == 0)){
            printf("error:%d: invalid operation: (operator LAND not defined on int32)\n", yylineno);
        }
        $$ = "bool"; 
        printf("LAN\n");
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
        // if(strcmp($<s_var>1, $<s_var>3) != 0){
        //     printf("error:%d: invalid operation: %s (mismatched types %s and %s)\n", yylineno, $<s_var>2, $<s_var>1, $<s_var>3);
        // } TODO: auto cast
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
    : MultiplicationExpr mul_op BitOperationExpr
    {
        $$ = $1;
        printf("%s\n", $<s_var>2);
    }
    | BitOperationExpr mul_op BitOperationExpr
    {
        if((strcmp($<s_var>2, "REM") == 0)&&(strcmp($<s_var>3, "float32") == 0)){
            printf("error:%d: invalid operation: (operator REM not defined on float32)\n", yylineno);
        }
        $$ = $1;
        printf("%s\n", $<s_var>2);
    }
    | BitOperationExpr {$$ = $1;}
;

BitOperationExpr
    : BitOperationExpr bit_op2 BitOperationExpr { {
         if(strcmp($<s_var>1, $<s_var>3) != 0){
            printf("error:%d: invalid operation: %s (mismatched types %s and %s)\n", yylineno, $<s_var>2, $<s_var>1, $<s_var>3);
        }
        $$ = $1;
        printf("%s\n", $<s_var>2);
        }
    }
    | bit_op UnaryExpr { $$ = $<s_var>2; printf("%s\n", $<s_var>1);}
    | UnaryExpr {$$ = $<s_var>1;}
;



UnaryExpr
    : unary_op UnaryExpr { $$ = $2; printf("%s\n", $<s_var>1);}
    | PrimaryExpr { $$ = $1; }
;


cmp_op 
    : EQL { $$ = "EQL"; }
    | NEQ { $$ = "NEQ"; }
    | LES { $$ = "LES"; }
    | LEQ { $$ = "LEQ"; }
    | GTR { $$ = "GTR"; }
    | GEQ { $$ = "GEQ"; }
;

add_op 
    : ADD { $$ = "ADD"; }
    | SUB { $$ = "SUB"; }
;

mul_op 
    : MUL { $$ = "MUL"; }
    | DIV { $$ = "DIV"; }
    | REM { $$ = "REM"; }
;

unary_op 
    : ADD { $$ = "POS"; }
    | SUB { $$ = "NEG"; }
    | NOT { $$ = "NOT"; }
;

bit_op2
    : BAN { $$ = "BAN"; }
    | BOR { $$ = "BOR"; }
    /* | SHL { $$ = "SHL"; } */
    | SHR { $$ = "SHR"; }
    | BXO { $$ = "BXO"; }
;

bit_op
    : BNT { $$ = "BNT"; }
;

PrimaryExpr 
    : Operand { $$ = $<s_var>1; }
    | ConversionExpr { $$ = $<s_var>1; }
;

Operand 
    : Literal { $$ = $<s_var>1; }
    | Variable { $$ = $<s_var>1; }
    | '(' Expression ')' { $$ = $<s_var>2; }
;

Variable
    : IDENT { $$ = getSymbolType($<s_var>1, false);} 
    | IDENT '(' ElementList ')' { $$ = getSymbolType($<s_var>1, true);} 
    | IDENT '[' Expression ']' { $$ = getSymbolType($<s_var>1, false); }
    | IDENT '[' Expression ']' '[' Expression ']' { $$ = getSymbolType($<s_var>1, false); }
;

ConversionExpr 
    : '(' VARIABLE_T ')' Operand 
    { 
        printf("Cast to %s\n", typeToString($<var_type>2)); 
        $$ = typeToString($<var_type>2);
    }
;

Literal
    : INT_LIT
        {
            $$ = "int"; 
            printf("INT_LIT %d\n", $<i_var>1); 
        }
    | FLOAT_LIT
        {
            $$ = "float"; 
            printf("FLOAT_LIT %f\n", $<f_var>1); 
        }
    | BOOL_LIT 
        {
            $$ = "bool"; 
            printf("BOOL_LIT %s\n", $<b_var>1 ? "TRUE" : "FALSE"); 
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

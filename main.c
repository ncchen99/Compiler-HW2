#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stack.h"

#define debug printf("%s:%d: ############### debug\n", __FILE__, __LINE__)

#define toupper(_char) (_char - (char)32)

const char* SymbolTypeName[] = {
    [UNDEFINED_TYPE] = "undefined",
    [VOID_TYPE] = "void",
    [INT_TYPE] = "int",
    [FLOAT_TYPE] = "float",
    [BOOL_TYPE] = "bool",
    [STR_TYPE] = "string",
    [FUNCTION_TYPE] = "function",
};

char* yyInputFileName;
bool compileError;

int indent = 0;
int scopeLevel = -1;
int funcLineNo = 0;
int variableAddress = -1;
int tableIndex = -1;

Stack s;

char* funcSig;
Type funcReturnType;
Type variableTypeRecord;
Type variableType;

Table tables[100];

char* catDoller(const char* s1, const char* s2) {
    char* temp = (char*)malloc(strlen(s1) + strlen(s2) + 2);
    strcpy(temp, s1);
    strcat(temp, " ");
    strcat(temp, s2);
    return temp;
}

void pushScope() {
    // Create a new symbol table and initialize it
    scopeLevel++;
    struct table* curTable = &tables[++tableIndex];
    curTable->scope = scopeLevel;
    curTable->size = 0;
    push(&s, tableIndex);
    printf("> Create symbol table (scope level %d)\n", scopeLevel);
}

void dumpScope() {
    // Print the symbol table
    struct table* curTable = &tables[pop(&s)];
    printf("\n> Dump symbol table (scope level: %d)\n", curTable->scope);
    printf("%-10s%-20s%-10s%-10s%-10s%-10s\n",
           "Index", "Name", "Type", "Addr", "Lineno", "Func_sig");
    for (int i = 0; i < curTable->size; i++) {
        struct symbol* curSymbol = &curTable->symbols[i];
        printf("%-10d%-20s%-10s%-10d%-10d%-10s\n",
               curSymbol->index, curSymbol->name, curSymbol->type, curSymbol->addr, curSymbol->lineno, curSymbol->func_sig);
    }
    scopeLevel--;
}

void initJNISignature() {
    funcSig = (char*)malloc(100);
    funcSig[0] = '(';
    funcSig[1] = '\0';
}

void buildJNISignature(Type type, bool isArr) {
    // Build JNI signature
    if (isArr) {
        strcat(funcSig, "[");
    }
    switch (type) {
        case INT_TYPE:
            strcat(funcSig, "I");
            break;
        case FLOAT_TYPE:
            strcat(funcSig, "F");
            break;
        case BOOL_TYPE:
            strcat(funcSig, "Z");
            break;
        case STR_TYPE:
            strcat(funcSig, "Ljava/lang/String;");
            break;
        default:
            strcat(funcSig, ")");
            buildJNISignature(funcReturnType, false);
            break;
    }
}

Symbol* createSymbol(Type type, char* name, int flag, bool is_function, bool is_param) {
    // Create a new symbol
    struct table* curTable = &tables[peek(&s)];
    struct symbol* newSymbol = &curTable->symbols[curTable->size];
    newSymbol->name = strdup(name);
    if (is_function) {
        newSymbol->type = strdup("function");
        funcReturnType = type;
        newSymbol->func_sig = funcSig;
    } else {
        newSymbol->type = strdup(SymbolTypeName[type]);
        newSymbol->func_sig = "-";
    }
    newSymbol->addr = variableAddress++;
    newSymbol->lineno = yylineno;
    newSymbol->index = curTable->size;
    curTable->size++;

    printf("> Insert `%s` (addr: %d) to scope level %d\n", name, newSymbol->addr, scopeLevel);
    return newSymbol;
}

void debugPrintInst(char instc, Symbol* a, Symbol* b, Symbol* out) {
}

bool expression(char op, Symbol* dest, Symbol* val, Symbol* out) {
    return false;
}

bool expBinary(char op, Symbol* a, Symbol* b, Symbol* out) {
    return false;
}

bool expBoolean(char op, Symbol* a, Symbol* b, Symbol* out) {
    return false;
}

bool expAssign(char op, Symbol* dest, Symbol* val, Symbol* out) {
    return false;
}

bool valueAssign(Symbol* dest, Symbol* val, Symbol* out) {
    return false;
}

bool notBinaryExpression(Symbol* dest, Symbol* out) {
    return false;
}

bool negExpression(Symbol* dest, Symbol* out) {
    return false;
}
bool notExpression(Symbol* dest, Symbol* out) {
    return false;
}

bool incAssign(Symbol* a, Symbol* out) {
    return false;
}

bool decAssign(Symbol* a, Symbol* out) {
    return false;
}

bool cast(Type type, Symbol* dest, Symbol* out) {
    return false;
}

Symbol* findSymbol(char* name) {
    Symbol* variable = NULL;
    for (int i = tableIndex; i >= 0; i--) {
        struct table* curTable = &tables[i];
        for (int j = 0; j < curTable->size; j++) {
            struct symbol* curSymbol = &curTable->symbols[j];
            if (strcmp(curSymbol->name, name) == 0) {
                variable = curSymbol;
                if (curSymbol->type == "function") {
                    printf("call: %s%s\n", curSymbol->name, curSymbol->func_sig);
                } else {
                    printf("IDENT (name=%s, address=%d)\n", curSymbol->name, curSymbol->addr);
                }
                break;
            }
        }
        if (variable != NULL)
            break;
    }
    return variable;
}

void pushFunInParm(Symbol* variable) {
}

int main(int argc, char* argv[]) {
    initStack(&s);
    if (argc == 2) {
        yyin = fopen(yyInputFileName = argv[1], "r");
    } else {
        yyin = stdin;
    }
    if (!yyin) {
        printf("file `%s` doesn't exists or cannot be opened\n", yyInputFileName);
        exit(1);
    }

    // Start parsing
    yyparse();
    printf("Total lines: %d\n", yylineno);
    fclose(yyin);

    yylex_destroy();
    return 0;
}
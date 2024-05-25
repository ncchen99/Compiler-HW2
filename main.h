#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

#include "compiler_common.h"

extern FILE* yyin;
extern bool compileError;

int yyparse();
int yylex();
int yylex_destroy();

#define VAR_FLAG_DEFAULT 0
#define VAR_FLAG_ARRAY 0b00000001
#define VAR_FLAG_POINTER 0b00000010

char* catDoller(const char* s1, const char* s2);

void pushScope();
void dumpScope();

Symbol* createSymbol(Type type, char* name, int flag, bool is_function, bool is_param, bool is_array);
char* findSymbol(char* name);

bool expression(char op, Symbol* a, Symbol* b, Symbol* out);
bool expBinary(char op, Symbol* a, Symbol* b, Symbol* out);
bool expBoolean(char op, Symbol* a, Symbol* b, Symbol* out);
bool expAssign(char op, Symbol* dest, Symbol* val, Symbol* out);
bool valueAssign(Symbol* dest, Symbol* val, Symbol* out);
bool notBinaryExpression(Symbol* dest, Symbol* out);
bool notExpression(Symbol* dest, Symbol* out);
bool negExpression(Symbol* dest, Symbol* out);
bool incAssign(Symbol* a, Symbol* out);
bool decAssign(Symbol* a, Symbol* out);
bool cast(Type type, Symbol* dest, Symbol* out);

void initJNISignature();
void buildJNISignature(Type type, bool isArr);
void setVarType(Type type);
char* typeToString(Type type);

// void stdoutPrint();

// void insert_symbol(bool is_function, bool is_param, char* name, char* type, char* func_sig);
// char* lookup_symbol(char* name, bool is_function);
// void dump_symbol();
// void build_func_para(char* para);

#endif
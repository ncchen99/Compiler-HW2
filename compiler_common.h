#ifndef COMPILER_COMMON_H
#define COMPILER_COMMON_H

#include <stdbool.h>
#include <stdint.h>

typedef enum _type {
    UNDEFINED_TYPE,
    AUTO_TYPE,
    VOID_TYPE,
    CHAR_TYPE,
    INT_TYPE,
    LONG_TYPE,
    FLOAT_TYPE,
    DOUBLE_TYPE,
    BOOL_TYPE,
    STR_TYPE,
    FUNCTION_TYPE,
} Type;

// typedef struct _symbolData {
//     char* name;
//     int32_t index;
//     int64_t addr;
//     int32_t lineno;
//     char* func_sig;
//     uint8_t func_var;
// } SymbolData;

// typedef struct _object {
//     ObjectType type;
//     uint64_t value;
//     SymbolData* symbol;
// } Object;

//////////////// Symbol Table ////////////////
typedef struct symbol {
    char* name;
    char* type;
    char* func_sig;
    int addr;
    int lineno;
    int index;
} Symbol;

typedef struct table {
    struct symbol symbols[101];
    int scope;
    int size;
} Table;

extern int yylineno;
extern int funcLineNo;

#endif /* COMPILER_COMMON_H */
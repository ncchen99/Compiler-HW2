CFLAGS := -Wall -O0 -ggdb
YFLAG := -d -v
STACK_SRC := ./stack.c
MAIN_SRC := ./main.c
LEX_SRC := ./compiler.l
YAC_SRC := ./compiler.y
COMMON := ./compiler_common.h
BUILD := ./build
BUILD_OUT := out
COMPILER := compiler
EXEC := Main
INPUT_CPP := test.cpp

COMPILER_OUT := ${BUILD}/${BUILD_OUT}/${COMPILER}
LEX_OUT := ${BUILD}/lex.yy.c
YAC_OUT := ${BUILD}/y.tab.c
MAIN_OUT := ${BUILD}/main.o
JAVA_ASM_OUT := ${BUILD}/Main.j
STACK_OUT := ${BUILD}/stack.o

all: build run

build: ${COMPILER}

create_build_folder:
	mkdir -p ${BUILD}
	mkdir -p ${BUILD}/${BUILD_OUT}

${LEX_OUT}: ${LEX_SRC}
	$(info ---------- Compile Lex ----------)
	lex -o ${LEX_OUT} ${LEX_SRC}

${YAC_OUT}: ${YAC_SRC}
	$(info ---------- Compile Yacc ----------)
	yacc ${YFLAG} -o ${YAC_OUT} ${YAC_SRC}

${STACK_OUT}: ${STACK_SRC}
	$(info ---------- Compile ${STACK_SRC} ----------)
	gcc -g -c ${STACK_SRC} -o ${STACK_OUT}

${MAIN_OUT}: ${MAIN_SRC}
	$(info ---------- Compile ${MAIN_SRC} ----------)
	gcc -g -c ${MAIN_SRC} -o ${MAIN_OUT}

${COMPILER}: create_build_folder ${LEX_OUT} ${YAC_OUT} ${STACK_OUT} ${MAIN_OUT}
	$(info ---------- Create compiler ----------)
	gcc ${CFLAGS} -o ${COMPILER_OUT} -iquote ./ -iquote ../ ${LEX_OUT} ${YAC_OUT} ${STACK_OUT} ${MAIN_OUT}

run:
	@./${COMPILER_OUT}

judge:
	@/mnt/c/Users/ncc/Desktop/2024-Spring-NCKU-CompilerHW2/judge.sh

clean:
	rm -rf ${BUILD}

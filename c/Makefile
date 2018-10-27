SHELL=/bin/bash

########## DIRECTORIES ##########

SRCDIR=./src

BUILDDIR=./build

DISTDIR=./dist

TARGET_BIN=${DISTDIR}/main_calculator_cpp_wrapper

########## COMPILER AND LINKER ############

CC=/usr/bin/gcc

CFLAGS=-ggdb -Wall -Wextra -I../cpp/src/ -I../cpp/src/wrapper -L../cpp/dist/

LDFLAGS=-lCalculator

########## RULES ##########

all: make_dirs ${TARGET_BIN}

make_dirs:
	@echo "Make directories..."
	@mkdir -p ${BUILDDIR}
	@mkdir -p ${DISTDIR}
	@echo "Done"

clean: 
	@echo "Cleaning..."
	@rm -rf ${BUILDDIR}
	@rm -rf ${DISTDIR}
	@echo "Done"

${BUILDDIR}/main_calculator_cpp_wrapper.o: ${SRCDIR}/main_calculator_cpp_wrapper.c
	@echo -e "\n>\t"$@
	${CC} ${CFLAGS} -c ${SRCDIR}/main_calculator_cpp_wrapper.c -o ${BUILDDIR}/main_calculator_cpp_wrapper.o

${TARGET_BIN}: ${BUILDDIR}/main_calculator_cpp_wrapper.o
	@echo -e "\n>\t"$@
	${CC} ${CFLAGS} ${BUILDDIR}/main_calculator_cpp_wrapper.o -o ${TARGET_BIN} ${LDFLAGS}

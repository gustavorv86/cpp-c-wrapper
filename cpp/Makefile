SHELL=/bin/bash

########## DIRECTORIES ##########

SRCDIR=./src

BUILDDIR=./build

DISTDIR=./dist

TARGET_LIB=${DISTDIR}/libCalculator.so

TARGET_LIB_WRAPPER=${DISTDIR}/libCalculatorWrapper.so

TARGET_BIN=${DISTDIR}/mainCalculator

########## COMPILER AND LINKER ############

CXX=/usr/bin/g++

CXXFLAGS=-std=c++11 -ggdb -Wall -Wextra -I${SRCDIR} -I${SRCDIR}/wrapper

LDFLAGS=-lCalculator

########## RULES ##########

all: make_dirs ${TARGET_LIB} ${TARGET_BIN}

lib: make_dirs ${TARGET_LIB}

make_dirs:
	@echo "Make directories..."
	@mkdir -p ${BUILDDIR}
	@mkdir -p ${DISTDIR}
	@echo "Done..."

clean: 
	@echo "Cleaning..."
	@rm -rf ${BUILDDIR}
	@rm -rf ${DISTDIR}
	@echo "Done..."

${BUILDDIR}/Calculator.o: ${SRCDIR}/Calculator.h ${SRCDIR}/Calculator.cpp
	@echo -e "\n>\t"$@
	${CXX} ${CXXFLAGS} -fPIC -c ${SRCDIR}/Calculator.cpp -o ${BUILDDIR}/Calculator.o

${BUILDDIR}/CalculatorWrapper.o: ${SRCDIR}/wrapper/CalculatorWrapper.cpp
	@echo -e "\n>\t"$@
	${CXX} ${CXXFLAGS} -fPIC -c ${SRCDIR}/wrapper/CalculatorWrapper.cpp -o ${BUILDDIR}/CalculatorWrapper.o

${BUILDDIR}/main.o: ${SRCDIR}/main.cpp
	@echo -e "\n>\t"$@
	${CXX} ${CXXFLAGS} -c ${SRCDIR}/main.cpp -o ${BUILDDIR}/main.o

${TARGET_LIB}: ${BUILDDIR}/Calculator.o ${BUILDDIR}/CalculatorWrapper.o
	@echo -e "\n>\t"$@
	${CXX} -shared ${BUILDDIR}/Calculator.o ${BUILDDIR}/CalculatorWrapper.o -o ${TARGET_LIB}

${TARGET_BIN}: ${TARGET_LIB} ${BUILDDIR}/main.o
	@echo -e "\n>\t"$@
	${CXX} ${CXXFLAGS} -L${DISTDIR} ${BUILDDIR}/main.o -o ${TARGET_BIN} ${LDFLAGS}

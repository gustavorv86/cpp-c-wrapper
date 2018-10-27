#!/bin/bash

LIB_CALCULATOR=`readlink -f -- .`/cpp/dist

if [[ ! ${LD_LIBRARY_PATH} ]]; then
	export LD_LIBRARY_PATH=${LIB_CALCULATOR}
elif [[ ! `echo ${LD_LIBRARY_PATH} | grep ${LIB_CALCULATOR}` ]]; then
	export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:${LIB_CALCULATOR}
fi


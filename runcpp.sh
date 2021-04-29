#!/bin/bash

file="$1"
filename="${file%.*}"
shift 1

clang++ -Wall -std=c++20 -o ${filename} ${file} $@ && ./${filename}
rm -rf ${filename} *.o
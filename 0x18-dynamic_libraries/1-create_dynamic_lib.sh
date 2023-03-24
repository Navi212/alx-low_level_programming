#!/bin/bash
cc -fpic -c *.c
gcc -shared -o liball.so ./*.c

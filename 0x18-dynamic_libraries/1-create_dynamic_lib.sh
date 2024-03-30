#!/bin/bash
gcc -c -FPIC *.c
gcc *.o -shared -o liball.so

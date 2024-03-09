#!/bin/bash
# Compile all .c files to .o files
gcc -c *.c
# Archive all .o files into liball.a
ar -rcs liball.a *.o

#!/bin/bash
for cfile in *.c;
do gcc -c "$cfile" -o "${cfile%.c}.o"; done
ar rc liball.a *.o
ranlib liball.a

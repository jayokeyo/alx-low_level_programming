#!/bin/bash
gcc -c *.c main.c -o *.o | ar rc liball.a *.o | ranlib liball.a

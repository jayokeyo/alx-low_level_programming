#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c main.c -o *.o | ar rc liball.a *.o

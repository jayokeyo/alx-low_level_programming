#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic *.c main.c | ar rc liball.a *.o | ranlib liball.a

#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar liball.a *.c
ranlib liball.a

#!/bin/bash

gcc -Wall -Werror -pedantic -Wextra -c *.c

gcc -shared -o liball.so *.o

rm -f *.o

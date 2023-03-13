#!/bin/bash
gcc -c *.c
ar -rc liball.a *.o
ranlibb liball.a

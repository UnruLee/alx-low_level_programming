#ifndef FUNCTION_POINTERS_N
#define FUNCTION_POINTERS_N

#include <stdlib.h>
#include <stdio.h>

typedef __SIZE_TYPE__ size_t;
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif

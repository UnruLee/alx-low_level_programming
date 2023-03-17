#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - Entry point
 * @b: variable character
 *
 * Desccription: function that allocates memory using malloc
 *
 * Return: Always 0
 */

void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
		exit(98);
	return (t);
}

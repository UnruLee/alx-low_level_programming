#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - entry point
 * @nmeb: is a variable character
 * @size: is a variable character
 *
 * Description:  a function that allocates memory for an array, using malloc.
 *
 * Return: 0 (success)
 */

void *_calloc(unsigned int nmeb, unsigned int size)
{
	unsigned int i;
	char *p = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (p);
}
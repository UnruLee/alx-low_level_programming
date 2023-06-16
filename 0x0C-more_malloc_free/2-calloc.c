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
	int i = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	while ( i < (nmemb * size))
	{
		p[i] = 0;
		i++;
	}

	return (p);
}

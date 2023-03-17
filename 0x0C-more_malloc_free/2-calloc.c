#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Entry point
 * @nmemb: variable character
 * @size: variable character
 *
 * Description: function that allocates memory for an array
 *
 * Return: returns a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size * nmemb; i++)
		arr[i] = 0;

	return (arr);
}

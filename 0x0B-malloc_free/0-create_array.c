#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - Entry point
 * @size: size of type
 * @c: character variable
 *
 * Description: function that creates an array of char,
 * and initializes it with a specific char
 *
 * Return: Always 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr  = malloc(sizeof(char) * size);

	if (arr == 0)
		return (0);

	for (i = 0; i < size; i++)
		*(arr + i) = c;

	*(arr + i) = '\0';

	return (arr);
}

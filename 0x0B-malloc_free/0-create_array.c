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

	if (size == 0)
		return (NULL);

	char *s = (char *)malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}

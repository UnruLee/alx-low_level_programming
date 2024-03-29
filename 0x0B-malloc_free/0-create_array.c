#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Entry point
 * @size: is a variable character
 * @c: is a variable character
 *
 * Description: creates an array of chars, initializes it with a specific char
 *
 * Return: 0 (success)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = (char *) malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	if (size != 0)
	{
		for (i = 0; i < size; i++)
			*(s + i) = c;

		return (s);
	}
	else
		return (NULL);
}

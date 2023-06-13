#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 * @str: is a variable character
 *
 * Description:  returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 *
 * Return: 0 (success)
 */

char *_strdup(char *str)
{
	int x, y;
	char *s;

	if (str == NULL)
		return (NULL);

	x = 0;
	while (*(str + x))
		x++;

	s = malloc(sizeof(char) * x + 1);

	if (s == 0)
		return (0);

	for (y = 0; y <= 1; y++)
		*(s + y) = *(str + y);

	return (s);
}

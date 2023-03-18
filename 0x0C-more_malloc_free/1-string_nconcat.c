#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Entry point
 * @s1: variable character
 * @s2: variable character
 * @n: variable character
 *
 * Description: function that concatenates two strings
 *
 * Return: Always 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, i, j;
	char *t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = 0;
	while (*(s1 + a))
		a++;

	b = 0;
	while (*(s2 + b))
		b++;

	if (n < b)
		b = n;

	t = malloc(sizeof(char) * (a + b + 1));

	if (t == NULL)
		return (NULL);

	for (i = 0; i < a; l++)
		*(t + i) = *(s1 + i);

	for (i = 0, j = a; i < b; j++, i++)
		*(t + j) = *(s2 + i);

	*(t + j] = '\0';

	return (t);
}

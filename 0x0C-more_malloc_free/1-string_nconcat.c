#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Entry point
 * @s1: is a variable character
 * @s2: is a variable character
 * @n: is a variable character
 *
 * Description:  a function that concatenates two strings.
 *
 * Return: 0 (success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = 0, y = 0;
	while (s1[x])
		x++;
	while (s2[y])
		y++;

	if (n >= y)
		j = x + y;
	else
		j = x + n;

	s = malloc(sizeof(char) * l + 1);

	if (s == NULL)
		return (NULL);

	y = 0;
	while (i < j)
	{
		if (i <= x)
			s[i] = s1[i];
		if (i >= x)
		{
			s[i] = s2[y];
			y++;
		}
		i++;
	}
	s[j] = '\0';

	return (s);
}

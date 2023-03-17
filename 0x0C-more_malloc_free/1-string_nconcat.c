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
	unsigned int j, k, l;
	char *t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = 0;
	while (s1[j] != '\0')
	{
		i++;
		;
	}

	k = 0;
	while (s2[k] != '\0')
	{
		k++;
		;
	}

	if (k <= n)
		n = k;

	t = malloc(sizeof(char) * (j + n + 1));

	if (t == NULL)
		return (NULL);

	for (l = 0; s1[l] != '\0'; l++)
		t[l] = s1[l];

	for (l = 0; l < n; l++)
		t[l + i] = s2[l];

	t[l + j] = '\0';

	return (t);
}

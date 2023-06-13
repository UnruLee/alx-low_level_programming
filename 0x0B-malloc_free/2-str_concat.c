#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Entry point
 * @s1: is a variable character
 * @s2: is a variable character
 *
 * Description: function that concatenates two strings.
 *
 * Return: 0 (success)
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *s = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	s = (char *)malloc(sizeof(char) * (i + j));

	if (s == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
		s[k] = s1[k];

	for (k = 0; s2[k] != '\0'; k++)
		s[k + i] = s2[k];

	return (s);
}

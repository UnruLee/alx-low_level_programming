#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - Entry point
 * @s1: variable character
 * @s2: variable character
 *
 * Description: concatenates two string
 *
 * Return: Always 0
 */

char *str_concat(char *s1, char *s2)
{
	int str1, str2, temp, i;
	char *t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str1 = 0;
	while (*(s1 + str1) != '\0')
		str1++;

	str2 = 0;
	while (*(s2 + str2) != '\0')
		str2++;

	temp = str1 + str2;

	t = malloc((sizeof(char) * temp) + 1);

	if (t == NULL)
		return (NULL);

	for (i = 0; i < str1; i++)
		t[i] = s1[i];
	for (i = 0; i < str2; i++)
		t[i + str1] = s2[i];

	return (t);
}

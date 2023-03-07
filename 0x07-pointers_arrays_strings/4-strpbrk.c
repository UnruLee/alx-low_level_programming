#include "main.h"

/**
 * *_strpbrk - Entry point
 * @s: variable character
 * @accept: variable character
 *
 * Description: function that searches a string for any of a set of bytes
 *
 * Return: Always 0;
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; accept[j]; j++)
			if (accept[j] == s[i])
				return (s + i);
	}

	return (0);
}

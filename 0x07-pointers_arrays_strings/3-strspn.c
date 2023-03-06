#include "main.h"

/**
 * _strspn - Entry point
 * @s: variable character
 * @accept: variable character
 *
 * Description: function that gets the length of a prefix substring
 *
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (count != i)
			break;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
	}

	return (count);
}

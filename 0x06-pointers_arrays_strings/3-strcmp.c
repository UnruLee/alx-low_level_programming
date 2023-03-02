#include "main.h"

/**
 * _strcmp - Entry point
 * @s1: variable string character
 * @s2: variable string character
 *
 * Description: function that compares two strings
 *
 * Return: Always 0;
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;

	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			result = s1[i] - s2[i];
			i++;
		}
		else
		{
			result = s1[i] - s2[i];
			breal;
		}
	}

	return (result);
}

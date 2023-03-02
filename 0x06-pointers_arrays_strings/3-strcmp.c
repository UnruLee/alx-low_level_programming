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
	int i, result;

	for (i = 0; s1[i] == '\0' && s2[i] == '\0'; i++)
	{
		if (s1[i] < s2[i])
			value = s1[i] - s2[i];
		else if (s1[i] > s2[i])
			value =  s2[i] - s1[i];
		else
			value = 0;

		return (value);
	}
}

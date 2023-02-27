#include "main.h"

/**
 * rev_string - Entry point
 * @s: variable character
 *
 * Description: function that reverses a string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	char temp;

	while (s[i] != '\0')
		i++;

	i--;

	j = 0;
	while (j <= i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
		i--;
	}
}

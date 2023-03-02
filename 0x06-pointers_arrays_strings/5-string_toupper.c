#include "main.h"

/**
 * *string_toupper - Entry Point
 * @s - fill in variable
 *
 * Description: function that changes all string letters to uppercase
 *
 * Return: Always 0
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}

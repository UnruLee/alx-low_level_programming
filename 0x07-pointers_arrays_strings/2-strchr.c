#include "main.h"

/**
 * *_strchr - Entry point
 * @s: : vaariable character
 * @c: variable character
 *
 * Description: function that locates a character in a string
 *
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + 1);
	}

	if (s[i] == c)
		return (s + 1);
	else
		return ('\0');
}

#include "main.h"

/**
 *  _strlen_recursion - entry point
 *  @s: function paramater
 *
 *  Description: a function that returns the length of a string.
 *
 *  Return: Always 0
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}

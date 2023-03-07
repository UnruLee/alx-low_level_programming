#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: variable character
 *
 * Description: function that prints a string, folloed by a new line
 *
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (s == '\0')
		return (s);

	return ('\n');
}

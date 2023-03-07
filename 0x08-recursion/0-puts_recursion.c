#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: variable character
 *
 * Description: function that prints a string, followed a new line
 *
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s++);
	_puts_recursion(s);

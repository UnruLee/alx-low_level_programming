#include "main.h"

/**
 * print_rev - Entry point
 * @s: variable character
 *
 * Description: function that prints a string in reverse
 *
 * Return: Always 0;
 */

void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;

	for (n -= 1; n >= 0; n--)
		_putchar(s[n]);

	_putchar('\n');
}

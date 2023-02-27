#include "main.h"

/**
 * puts_half - Entry point
 * @str: variable character
 *
 * Description: function that prints half of a string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	int j;

	while (str[len] != '\0')
		len++;

	j = len / 2;
	while (j <= len)
	{
		_putchar(str[j]);
		j++;
	}

	_putchar('\n');
}

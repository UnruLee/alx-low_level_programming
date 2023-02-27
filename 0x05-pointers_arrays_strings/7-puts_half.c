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
	int len;
	int j;
	int max;

	len = 0;
	while (str[len] != '\0')
		len++;

	max = len;
	j = max / 2;
	while (j <= max)
	{
		_putchar(str[j]);
		j++;
	}

	_putchar('\n');
}

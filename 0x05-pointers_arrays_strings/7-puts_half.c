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

	len--;

	if (len % 2 == 0)
		j = (len + 1) / 2;
	else if (len % 2 != 0)
		j = len / 2;

	j += 1;
	while (j <= len)
	{
		_putchar(str[j]);
		j++;
	}

	_putchar('\n');
}

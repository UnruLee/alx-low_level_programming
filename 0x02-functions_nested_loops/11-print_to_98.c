#include "main.h"

/**
 * print_to_98 - Entry point
 * @n: n is an ascii character variable
 *
 * Description: print all natural numbers from n to 98
 *
 * Return: 0 (success)
 */

void int print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			_putchar(n + '0');
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			_putchar(n + '0');
			n--;
		}
	}
	_putchar("98\n");
}

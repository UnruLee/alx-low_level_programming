#include "main.h"

/**
 * print_sign - Entry point
 * @n: n is an ascii character
 *
 * Description: prints the sign of a number
 *
 * Return: 0 (success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-1');
		return ('-');
	}
}

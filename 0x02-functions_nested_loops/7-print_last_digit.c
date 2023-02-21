#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: n is a a variable for int
 *
 * Description: print last digit
 *
 * Return: 0 (success)
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n >= 0)
		_putchar(last_digit + '0');

	return (last_digit);
}

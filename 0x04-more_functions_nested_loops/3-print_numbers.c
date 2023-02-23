#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description: prints the numbers 0-9 followed by a new line
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		_putchar(n);
		n++;
	}
	_putchar("\n");
}

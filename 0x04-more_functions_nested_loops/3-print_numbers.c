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
	int n;

	for (n = '0'; n < '10'; n++)
	{
		_putchar(n);
	}
	_putchar("\n");
}

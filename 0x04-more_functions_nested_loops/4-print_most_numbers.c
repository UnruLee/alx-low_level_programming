#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Description: print numbers 0 to 9 except 2 and 4
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '10'; n++)
	{
		if (n != '2' && n != '4')
			_putchar(n);
	}
	_putchar('\n');
}

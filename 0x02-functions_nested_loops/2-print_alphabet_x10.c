#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: prints 10 times  alphabet in lower
 *
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
	int times = 0;
	char lower;

	while (times < 10)
	{
		lower = 'a';

		while (lower <= 'z')
		{
			_putchar(lower);
			lower++;
		}

		_putchar('\n');
		times++;
	}

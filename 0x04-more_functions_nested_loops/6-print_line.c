#include "main.h"

/**
 * print_line - Entry point
 * @n: ascii character to hold variable
 *
 * Description: A function that draws a straight line in the terminal
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	int line = 0;

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}

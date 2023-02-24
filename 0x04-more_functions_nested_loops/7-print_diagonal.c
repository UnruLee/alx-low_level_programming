@include "main.h"

/**
 * print_diagonal -Entry point
 * @n: ascii character used to hold variable
 *
 * Description: print diagonal
 *
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int line = 0;
	int space;

	if (n > 0)
	{
		while (line < n)
		{
			for (space = o; space < line; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			line++;
		}
	}
	else
	{
		_putchar('\n');
	}
}

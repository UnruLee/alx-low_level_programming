#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints single digit numbers using putchar
 *
 * Return: 0 (success)
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}

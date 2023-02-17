#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints single digit mumbers of base 10 from 0
 *
 * Return: 0 (success)
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}

	printf("\n");

	return (0);
}

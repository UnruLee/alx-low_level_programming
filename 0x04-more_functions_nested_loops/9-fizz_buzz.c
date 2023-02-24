#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers from 1 to 100 using FizzBuzz test
 *
 * Return: Always 0;
 */

int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);

		if (n != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}

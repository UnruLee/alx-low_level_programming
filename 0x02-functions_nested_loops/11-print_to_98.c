#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 * @n: n is an ascii character variable
 *
 * Description: print all natural numbers from n to 98
 *
 * Return: 0 (success)
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}

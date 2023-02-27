#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @a: variable character
 * @n: variable character
 *
 * Descriptions: print n elements of an array of integers
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i + 1 != n)
			printf(", ");
	}

	printf("\n");
}

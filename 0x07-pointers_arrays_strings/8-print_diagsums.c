#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: variable character
 * @size: variable character
 *
 * Description: function that prints the sum of two diagonals of a
 * square matrix of integers
 *
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int i;
	int first;
	int second;

	first = second = 0;

	for (i = 0; i < size; i++)
		first += a[(size * i) + i];

	for (i = 0; i < size; i++)
		second += a[(i * size) + size - (i + 1)];

	printf("%d, %d\n", first, second);
}

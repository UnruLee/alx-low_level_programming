#include "main.h"

/**
 * swap_int - Entry point
 * @a: variable character
 * @b: variable character
 *
 * Description: function that swaps the value of two integers
 *
 * Return: Always 0;
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

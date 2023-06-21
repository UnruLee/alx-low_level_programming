#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - Entry point
 * @array: is a variable character
 * @size: is a variable character
 * @cmp: is a variable character
 *
 * Description: a function that searches for an integer.
 *
 * Return: 0 (success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int w;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (w = 0; w < size; w++)
	{
		if (cmp(array[w]))
			return (w);
	}
	return (-1);
}

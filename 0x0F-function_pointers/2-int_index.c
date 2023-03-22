#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - Entry point
 * @array: variable for array
 * @size: variable for size
 * @cmp: variable for cmp
 *
 * Description: function function that searches for an integer
 *
 * Return: Success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);
		if (res == 1)
			return (i);
	}
	return (-1);
}

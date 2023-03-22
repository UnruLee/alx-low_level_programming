#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - Entry point
 * @array: variable for array
 * @size: variable for size
 * @action: variable for action
 *
 * Description: function that executes a function given as a parameter
 * on each element of an array
 *
 * Return: Success
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL && size >= 1 && action == NULL)
		return;
	
	for (i = 0; i < size; i++)
		action(array[i]);
}

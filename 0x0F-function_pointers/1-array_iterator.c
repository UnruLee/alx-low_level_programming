#include "function_pointers.h"

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
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

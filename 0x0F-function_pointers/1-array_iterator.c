#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strncat - Entry point
 * @action: is a variable character
 * @size: is a variable character
 * @array: is a variable character
 *
 * Description: a function that executes a function given as a parameter on
 *each element of an array.
 *
 * Return: 0 (success)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Entry function
 * @min: variable character
 * @max: variable character
 *
 * Description: function that creates an array of integers
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr, num, i;

	if (min > max)
		return (NULL);

	num = (max - min) + 1;

	arr = malloc(sizeof(int) * num);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < num; i++, min++)
		arr[i] = min;

	return (arr);
}

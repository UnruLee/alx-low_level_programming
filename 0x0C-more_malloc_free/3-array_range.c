#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Entry point
 * @max: is a variable character
 * @min: is a variable character
 *
 * Description:  a function that creates an array of integers.
 *
 * Return: 0 (success)
 */

int *array-range(int min, int max)
{
	int *c, i = 0;

	if (min > max)
		return (NULL);

	c = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}

	return (a);
}

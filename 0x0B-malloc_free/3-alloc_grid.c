#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 * @width: is a variable character
 * @height: is a variable character
 *
 * Description: returns a pointer to a 2 dimensional array of integers.
 *
 * Return: 0 (success)
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int *grid = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int *)malloc(width * height * sizeof(int));

	for (i = 0; i < width * height; i++)
	{
	}

	return (grid);
}

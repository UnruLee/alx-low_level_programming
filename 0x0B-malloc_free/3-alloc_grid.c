#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - Entry point
 * @width: variable character for width
 * @height: variable character for height
 *
 * Description: function that returns a pointer to a 2 dimensional array
 * of integers
 *
 * Return: Always 0
 */

int **alloc_grid(int width, int height)
{
	int **i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	i = (int **) malloc(sizeof(int *) * height);

	if (i == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		i[j] = malloc(sizeof(int) * width);
		if (i[j] == NULL)
		{
			while (j >= 0)
			{
				free(i[j]);
				j--;
			}
			free(i);
			return (NULL);
		}
	}

	return (i);
}

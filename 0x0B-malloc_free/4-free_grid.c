#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Entry point
 * @grid: is a variable character
 * @height: is a variable character
 *
 * Description:  function that frees a 2 dimensional grid previously
 *
 * Return: 0 (success)
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

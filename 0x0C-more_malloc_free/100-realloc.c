#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Entry function
 * @old_size: variable character
 * @new_size: variable character
 * @ptr: variable character
 *
 * Description: function that reallocates memory block using malloc and free
 *
 * Return: 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr)
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);
	free(ptr);

	ptr = malloc(new_size);

	return (ptr);
}

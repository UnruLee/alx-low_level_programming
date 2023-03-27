#include "main.h"
#include <stdlib.h>

/**
 * _realloc - entry point
 * @ptr: pointer
 * @old_size: byte size to be allocated
 * @new_size: new size in bytes
 *
 * Description: reallocates memory block using malloc and free
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
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

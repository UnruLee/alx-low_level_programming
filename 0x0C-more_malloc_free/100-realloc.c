#include "mainn.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - entry point
 * @dest: destination
 * @src: source
 * @n: size of memory to copy
 *
 * Description: copies memory
 *
 * Return: Success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * _realloc - entry point
 * @ptr: pointer to modify
 * @old_size: current size of memory
 * @new_size: size memory will now have
 *
 * Description: reallocated a memory block using malloc and free
 *
 * Return: Pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *t;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		t = malloc(new_size);
		if (t == 0)
			return (0);
		free(ptr);
		return (t);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}

	t = malloc(new_size);
	if (t == 0)
		return (0);

	_memcpy(t, ptr, old_size);
	free(ptr);
	return (t);
}

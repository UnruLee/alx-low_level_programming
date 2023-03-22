#include "dog.h"
#include <stdio.h>

/**
 * free_dog - entry point
 * @d: variable
 *
 * Description: function that frees dog
 *
 * Return: Success
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

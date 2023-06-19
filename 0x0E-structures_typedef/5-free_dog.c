#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Entry point
 * @d: is a variable character
 *
 * Description: a function that prints a struct dog
 *
 * Return: 0 (success)
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

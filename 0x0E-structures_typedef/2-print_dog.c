#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Entry point
 * @d: is a variable character
 *
 * Description: a function that prints a struct dog
 *
 * Return: 0 (success)
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n Age: %f\nOwner: %s\n, d->name, d->age, d->owner);
}

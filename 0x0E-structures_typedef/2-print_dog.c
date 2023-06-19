#include "main.h"
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
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %s\n", d->age);
	if (d->owner == NULL)
		printf("Owner: %s\n", d->owner);
	}
}

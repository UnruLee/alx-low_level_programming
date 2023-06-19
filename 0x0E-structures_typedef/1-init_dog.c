#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Entry point
 * @d: is a variable character
 * @name: variable for name
 * @age: variable for age
 * @owner: variable for owner
 *
 * Description:  a function that initialize a variable of type struct dog
 *
 * Return: 0 (success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

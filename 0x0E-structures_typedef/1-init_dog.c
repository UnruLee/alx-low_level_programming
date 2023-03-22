#include "dog.h"
#include <stdio.h>

/**
 * init_dog - entry point
 * @d: variable
 * @name: variable for dog name
 * @age: variable for dog age
 * @owner: variable for dog owner
 *
 * Description: function that initializes a variable of type struct
 *
 * Return: Nil
 */

void init_dog(struct dog *d, char *name, float age, char owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

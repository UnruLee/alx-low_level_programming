#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 * @s: is a variable character
 *
 * Description: checkFun
 *
 * Return: 0 (success)
 */

char *_strdup(char *s)
{
	int k, j;
	char *t;

	if (s == NULL)
		return (NULL);

	k = 0;
	while (*(s + k) != '\0')
		k++;

	t = (char *)malloc(k * sizeof(char) + 1);

	if (t == NULL)
		return (NULL);

	for (j = 0; j < k; j++)
	{
		t[j] = s[j];
	}
	t[j] = '\0';

	return (t);
}

/**
 * new_dog - Entry point
 * @name: is a variable character
 * @age: is a variable character
 * @owner: is a variable character
 *
 * Description: a function that creates a new dog
 *
 * Return: 0 (success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *rux;
	char *rux_name, *rux_owner;

	rux = malloc(sizeof(dog_t));
	if (rux == NULL)
		return (NULL);

	rux_name = _strdup(name);
	if (rux_name == NULL)
	{
		free(rux);
		return (NULL);
	}

	rux_owner = _strdup(owner);
	if (rux_owner == NULL)
	{
		free(rux_name);
		free(rux);
		return (NULL);
	}
	rux->name = rux_name;
	rux->age = age;
	rux->owner = rux_owner;
	return (rux);
}

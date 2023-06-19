#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct variable for dog
 * @name: name of dog
 * @age: age of do
 * @owner: owner of dog
 *
 * Description: a struct type to describe dog elements
 */

typedef struct dog
{
	char *name;
	int age;
	char *owner;
} dog_t;

#endif

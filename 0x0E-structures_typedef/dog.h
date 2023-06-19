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
	float age;
	char *owner;
} dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

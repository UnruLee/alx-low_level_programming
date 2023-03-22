#ifndef DOG
#define DOG

/**
 * struct dog - entry point
 * @name: variable for dog name
 * @age: variable for dog age
 * @owner: variable for owner name
 *
 * Description: creates a new struct for dog
 *
 * Return: None
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

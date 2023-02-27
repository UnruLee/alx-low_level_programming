#include "main.h"

/**
 * *_strcpy - Entry point
 * @dest: variable character
 * @src: variable character
 *
 * Description: funcion that copy the string in a vriable to a buffer variable
 *
 * Return: void
 */

void *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

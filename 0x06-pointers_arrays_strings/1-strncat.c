#include "main.h"

/**
 * *_strncat - Entry point
 * @dest: variable character
 * @src: variable character
 * @n: number of string
 *
 * Description: function that concatenates two strings
 *
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		i++;
	;

	for (j = 0; j < n; j++, i++)
		dest[i] = src[j];

	return (dest);
}

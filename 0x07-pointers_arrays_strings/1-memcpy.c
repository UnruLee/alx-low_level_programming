#include "main.h"

/**
 * *_memcpy - Entry point
 * @dest: variable charaacter
 * @src: variable character
 * @n: variable character
 *
 * Description: function that copies memory area
 *
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

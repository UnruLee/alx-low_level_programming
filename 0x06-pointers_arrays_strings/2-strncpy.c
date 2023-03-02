#include "main.h"

/**
 * *_strncpy - Entry point
 * @dest: variable string character
 * @src: varible string character
 * @n: variable integer character
 *
 * Description: function that copies a string
 *
 * Return: ALways 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i != n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

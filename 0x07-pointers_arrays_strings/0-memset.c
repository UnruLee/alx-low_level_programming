#include "main.h"

/**
 * *_memset -Entry point
 * @s: variable character
 * @b: variable character
 * @n: variable character
 *
 * Description: function that fills memory with a constant byte
 *
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

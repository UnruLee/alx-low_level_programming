#include "main.h"

/**
 * _strlen - Entry point
 * @s: variable character
 *
 * Description: function that returns the lenght of strings
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

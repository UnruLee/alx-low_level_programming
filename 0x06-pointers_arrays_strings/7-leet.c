#include "main.h"

/**
 * *leet - Entry point
 * @s: variable character
 *
 * Description: function that encodes a string into 1337
 *
 * Return: Always 0
 */

char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
			s[i] = '4';
		else if (

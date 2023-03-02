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
	char value[] = "43071";
	char lowercase[] = "aeotl";
	char uppercase[] = "AEOTL";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; lowercase[j] != '\0'; j++)
		{
			if (s[i] == uppercase[j] || s[i] == lowercase[j])
			{
				s[i] = value[j];
				break;
			}
		}
	}

	return (s);
}

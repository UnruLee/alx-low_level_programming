#include "main.h"

/**
 * *_strstr - Entry point
 * @haystack: variable character
 * @needle: variable charaacter
 *
 * Description: function that locates a string
 *
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i, , , , , , , , , i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;

			if (needle[i + j] != '\0')
				return (haystack + i);
		}
	}

	return ('\0');
}


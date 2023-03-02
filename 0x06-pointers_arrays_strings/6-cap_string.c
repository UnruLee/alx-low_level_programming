#include "main.h"

/**
 * *cap_string - Entry point
 * @str: blank variable
 *
 * Description: function that capitalized all words of a string
 *
 * Return: Always 0
 */

char *cap_string(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		j = i - 1;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else if (str[j] >= 9 && str[j] <= 10)
				str[i] = str[i] - 32;
			else if (str[j] >= 32 && str[j] <= 34)
				str[i] = str[i] - 32;
			else if (str[j] >= 40 && str[j] <= 41)
				str[i] = str[i] - 32;
			else if (str[j] == 46)
				str[i] = str[i] - 32;
			else if (str[j] == 59)
				str[i] = str[i] - 32;
			else if (str[j] == 123 || str[j] == 125)
				str[i] = str[i] - 32;
		}
	}

	return (str);
}

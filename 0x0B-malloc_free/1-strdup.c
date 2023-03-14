#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - Entry point
 * @str: variable chaaracter
 *
 * Description: function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the given string as parameter
 *
 * Return: Always 0
 */

char *_strdup(char *str)
{
	int i, j;
	char *arr;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (*(str + i) != '\0')
		i++;

	arr = malloc((sizeof(char)* i) + 1);

	if (arr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		*(arr + j) = *(str + j);

	return (arr);
}

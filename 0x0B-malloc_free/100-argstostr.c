#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Entry point
 * @ac: is a variable character
 * @av: is a variable character
 *
 * Description:  function that concatenates all the arguments of your program.
 *
 * Return: 0 (success)
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int l, lt, i, j, k;

	if (ac == 0 || av == NULL)
		return (0);
	l = 0, k = 0;
	for (i = 0; i < ac; i++)
	{
		lt = 0;
		while (av[i][lt])
			lt++;
		l += lt + 1;
	}
	s = malloc((l + 1) * sizeof(char));

	if (s == 0)
		return (0);

	for (j = 0; j < ac; j++)
	{
		lt = 0;
		while (av[j][lt])
		{
			*(s + k) = av[j][lt];
			k++;
			lt++;
		}
		*(s + k) = '\n';
		k++;
	}
	*(s + k) = '\0';

	return (s);
}

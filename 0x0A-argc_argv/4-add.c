#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - entry point
 * @s: input to check for numberhood
 *
 * Description: checks to see if input is a number
 *
 * Return: 1 if it is a number, 0 if not
 */

int is_number(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description: prints the sum of positive numbers
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i, res, num;

	res = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			num = is_number(argv[i]);
			if (num == 1)
			{
				res += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		printf("%d\n", res);
	}
	return (0);
}

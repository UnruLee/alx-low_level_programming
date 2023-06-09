#include <stdio.h>
#include <stdlib.h>

/**
 * num_check - checks to see if input is a number
 * @s: input to check for numberhood
 * Return: 1 if it is a number, 0 if not
 */

int num_check(char *s)
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
 * @argc: a count of the arguments supplied to the program
 * @argv: an array of pointers to the strings supplied to the program
 *
 * Description: a program that adds positive numbers.
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, sum, num;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			num = num_check(argv[i]);
			if (num == 1)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}

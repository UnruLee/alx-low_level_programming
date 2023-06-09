#include <stdio.h>

/**
 * main - entry point
 * @argc: a count of the arguments supplied to the program
 * @argv: an array of pointers to the strings supplied to the program
 *
 * Description: a program that multiplies two numbers.
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}

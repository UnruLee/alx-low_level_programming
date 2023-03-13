#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of command line arguments
 * @argv: contains the program command line arguments
 *
 * Description: program that prints the number of arguments passed on to it
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;
		printf("%d\n", i - 1);
	}

	return (0);
}

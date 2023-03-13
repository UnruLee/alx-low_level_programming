#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of command line arguments
 * @argv: contains the program command line arguments
 *
 * Description: program that prints all arguments it receives
 *
 * Return: Always 0
 */

\int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while(i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	
	return (0);
}

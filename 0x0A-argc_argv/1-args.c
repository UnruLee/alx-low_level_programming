#include <stdio.h>

/**
 * main - entry point
 * @argc: a count of the arguments supplied to the program
 * @argv: an array of pointers to the strings supplied to the program
 *
 * Description: a program that prints the number of arguments passed into it.
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}

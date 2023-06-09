#include <stdio.h>

/**
 * main - entry point
 * @argc: a count of the argument supplied to the program
 * @argv: an array of pointers to the strings supplied in the program
 *
 * Description: a program that prints its name
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}

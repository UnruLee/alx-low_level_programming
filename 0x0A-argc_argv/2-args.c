#include <stdio.h>

/**
 * main - entry point
 * @argc: a count of the arguments supplied to the program
 * @argv: an array of pointers to the strings supplied to the program
 *
 * Description: a program that prints all arguments it receives.
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		print("%s\n", argv[i]);

	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 *
 * Description: program that prints the opcodes of its own main function
 *
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int i, bytes;
	char *mainaddr;

	if (argc != 2)
		printf("Error\n"), exit(1);

	bytes = atoi(argv[1]);

	if (bytes < 0)
		printf("Error\n"), exit(2);

	mainaddr = (char *)main;

	for (i = 0; i < bytes - 1; i++)
		printf("%02hhx ", mainaddr[i]);

	printf("%02hhx\n", mainaddr[i]);

	return (0);
}

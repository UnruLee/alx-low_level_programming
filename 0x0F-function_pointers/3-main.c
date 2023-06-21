#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argv: is a variable character
 * @argc: is a variable character
 *
 * Description: main function body
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int a, b, c;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	p = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = p(a, b);

	printf("%d\n", c);

	return (0);
}

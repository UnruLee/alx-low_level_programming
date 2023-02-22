#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the first fibonacci numbers, starting with 1 and 2
 *
 * Return: 0(success)
 */

int main(void)
{
	long int first = 1;
	long int second = 2;
	long int next;

	while (count <= 50)
	{
		next = first + second;
		printf("lu, ", next);

		first = second;
		second = next;

		count++;
	}

	next = first + second;
	printf("lu\n", next);

	return (0);
}

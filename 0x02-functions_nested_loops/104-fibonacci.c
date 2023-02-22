#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 98 fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 (success)
 */

int main(void)
{
	int count = 3;

	long int first = 1;
	long int second = 2;
	long int next = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);

	while (count <= 98)
	{
		if (count == 98)
		{
			printf("%ld \n", next);
		}
		else
		{
			printf("%ld, ", next);
		}

	first = second;
	second = next;

	next = first + second;
	count++;
	}

	return (0);
}

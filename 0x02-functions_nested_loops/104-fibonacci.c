#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the first 98 fibonacci numbers, starting with 1 and 2
 *
 * Return: 0(success)
 */

int main(void)
{
	long int first = 0;
	long int second = 1;
	long int next;
	int count;

	while (count < 97)
	{
		next = first + second;
		printf("%lu, ", next);
		first = second;
		second = next;
		count++;
	}
	next = first + second;
	printf("%lu\n", next);

	return (0);
}

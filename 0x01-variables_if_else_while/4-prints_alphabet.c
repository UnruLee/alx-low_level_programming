#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints lower alphabets except q and e
 *
 * Return: 0 (success)
 */

int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if (lower != 'q' && lower != 'e')
		{
			putchar(lower);
		}
		lower++;
	}

	putchar('\n');

	return (0);
}

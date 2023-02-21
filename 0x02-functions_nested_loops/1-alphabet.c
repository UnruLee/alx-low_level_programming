#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: prints the alphabet in lowercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	void print_alphabet(void)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}

		_putchar('\n');
	}
}

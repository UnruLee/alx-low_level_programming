#include "main.h"

/**
 * factorial - Entry point
 * @n: variable character
 *
 * Description: fucntion that prints factorial of a given number
 *
 * Return: Always 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}

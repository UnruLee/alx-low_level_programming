#include "main.h"

/**
 * prime_check - Entry point
 * @x: variable character
 * @y: variable character
 *
 * Description: checks for prime number
 *
 * Return: success (1)
 */

int prime_check(int x, int y)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);

	return (prime_check(a, b + 1));
}

/**
 * is_prime_number -Entry point
 * @n: variable character
 *
 * Description: function that returns 1 if the input integer is a prime number,
 * otherwise return 0
 *
 * Return: success (1)
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime_check(n, 2));
}

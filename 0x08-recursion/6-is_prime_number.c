#include "main.h"

/**
 *  pprime - entry point
 *  @s: function paramater one
 *  @c: function paramater two
 *
 *  Description:  a function that checks for prime integer.
 *
 *  Return: Always 0
 */

int pprime(int s, int c)
{
	if (s == c)
		return (1);
	if (s % c == 0)
		return (0);
	return (pprime(s, c + 1));
}

/**
 *  is_prime_number - entry point
 *  @n: function paramater
 *
 *  Description:  a function that returns 1 if the input integer is a prime
 *  number, otherwise return 0.
 *
 *  Return: Always 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (pprime(n, 2));
}

#include "main.h"

#include "main.h"

/**
 *  sqrt - entry point
 *  @c: function paramater one
 *  @d: functin parameter two
 *
 *  Description:  a function to check the square root
 *
 *  Return: Always 0
 */

int sqrt(int c, int d)
{
	if (d * d == c)
		return (b);
	if (d * d > c)
		return (-1);
	return (sqrt(c, d + 1));
}

/**
 *  _sqrt_recursion - entry point
 *  @n: function paramater
 *
 *  Description:  a function that returns the natural square root of a number
 *
 *  Return: Always 0
 */

int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}

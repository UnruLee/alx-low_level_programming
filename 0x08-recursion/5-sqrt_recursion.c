#include "main.c"

/**
 * square_root - Entry point
 * @a: varibale character
 * @b: variable character
 *
 * Return: square root value
 */

int suqare_root(int a, int b)
{
	if (b == a * a)
		return (b / a);
	else if (b < a * a)
		return (-1);

	return (square_root(a + 1, b));
}

/**
 * _sqrt_recursion - Entry point
 * @n: variable character
 *
 * Description: function that returns the natural square root of a number
 *
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	else if (n < 0)
		return (-1);

	return (square_root(1, n));
}

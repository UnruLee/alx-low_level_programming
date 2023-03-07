#include "main.h"

/**
 * _pow_recursion - Entry point
 * @x: variable character
 * @y: variable character
 *
 * Description: function that returns the value of x raised to y
 *
 * Return: Always 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
}

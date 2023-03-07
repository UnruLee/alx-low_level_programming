#include "main.h"

/**
 * _pow_recursion - Entry Point
 * @n: variable character
 *
 * Description: function that retursn the value of x raised to y
 *
 * Return:Always 0
 */

int _pow_recursion(int n)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else if (y == 0)
		return (1);
	else
		return (-1);
}

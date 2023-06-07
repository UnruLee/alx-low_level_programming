#include "main.h"

/**
 *  factorial - entry point
 *  @n: function paramater
 *
 *  Description:  a  function that returns the factorial of a given number.
 *
 *  Return: Always 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

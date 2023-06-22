#include "varaidic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Entry point
 * @n: is a variable character
 *
 * Description: a function that returns the sum of all its parameters.
 *
 * Return: 0 (success)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list params;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);

	va_start(params, n);

	for (i = 0; i < n; i++)
		sum += var_arg(params, int);

	va_end(params);
	return (sum);
}

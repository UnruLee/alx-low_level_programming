#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - entry point
 * @n: variable character
 *
 * Description: function that returns the sum of all its parameters
 *
 * Return: Success
 */

int sum_them_all(unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list params;

	if (n == 0)
		return (0);

	va_start(params, n);
	for (i = 0; i < n; i++)
		sum += va_arg(params, int);

	va_end(params);
	return (sum);
}

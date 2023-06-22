#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Entry point
 * @separator: is a variable character
 * @n: is a variable character
 *
 * Description: a function that prints numbers, followed by a new line.
 *
 * Return: 0 (success)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	if (separator == 0)
		separator = "";

	va_start(params, n);

	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(params, int), separator);

	printf("%d\n", va_arg(params, int));
	va_end(params);
}

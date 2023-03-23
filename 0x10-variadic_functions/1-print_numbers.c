#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - entry point
 * @separator: variable character
 * @n: variable character
 *
 * Description: function that prints numbers followed by a new line
 *
 * Return: Success
 */

void print_numbers(const char *separator, unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	if (separator == NULL)
		separator = "";

	va_start(num, n);
	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(num, int), separator);
	printf("%d\n", va_arg(num, int));

	va_end(num);
}

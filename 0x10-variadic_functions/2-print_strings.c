#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Entry point
 * @separator: is a variable character
 * @n: is a variable character
 *
 * Description: a function that prints strings, followed by a new line.
 *
 * Return: 0 (success)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;
	char *s;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(params, n);

	for (i = 0; i < n - 1; i++)
	{
		s = va_arg(params, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator)
			printf("%s", separator);
	}

	s = va_arg(params, char *);
	if (s)
		printf("%s\n", s);
	else
		printf("(nil)\n");

	va_end(params);
}

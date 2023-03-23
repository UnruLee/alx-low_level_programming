#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - entry point
 * @separator: variable character
 * @n: variable character
 *
 * Description: function that prints string
 *
 * Return: Success
 */

void print_strings(const char *separator, unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list params;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(params, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(params, char *);
		if (str == NULL)
			str = "(nil)";

		if (i != n - 1)
		{
			if (separator == NULL)
				printf("%s", str);
			else
				printf("%s%s", str, separator);
		}
		else
			printf("%s\n", str);
	}
	va_end(params);
}

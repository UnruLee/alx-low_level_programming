#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * for_char - print char
 * @params: list of arguments
 */

void for_char(va_list params)
{
	printf("%c", va_arg(params, int));
}

/**
 * for_int - print int
 * @params: list of arguments
 */

void for_int(va_list params)
{
	printf("%d", va_arg(params, int));
}

/**
 * for_float - print float
 * @params: list of arguments
 */

void for_float(va_list params)
{
	printf("%f", va_arg(params, double));
}

/**
 * for_string - print string
 * @params: list of arguments
 */

void for_string(va_list params)
{
	char *str = va_arg(params, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - entry point
 * @format: variable character
 *
 * Description: A function that prints anything
 *
 * Return: Success
 */

void print_all(const char * const format, ...)
{
	int i, j;
	va_list params;
	char *s = "";
	char *div = ", ";

	fx_l ops[] = {
		{'c', for_char},
		{'i', for_int},
		{'f', for_float},
		{'s', for_string},
		{'\0', NULL}
	};

	va_start(params, format);
	i = 0;
	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (ops[j].c != '\0')
		{
			if (ops[j].c == format[i])
			{
				printf("%s", s);
				ops[j].f(params);
				s = div;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(params);
}

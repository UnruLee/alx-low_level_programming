#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

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
	int i = 0;
	va_list params;
	char *s = "(nil)";
	char *arr = NULL;
	char *div = ", ";

	va_start(params, format);

	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(params, int));
				break;
			case 'i':
				printf("%d", va_arg(params, int));
				break;
			case 'f':
				printf("%f", va_arg(params, double));
				break;
			case 's':
				arr = va_arg(params, char *);
				if (arr == NULL)
					arr = s;
				printf("%s", arr);
				break;
			default:
				i++;
				continue;
		}
		if ((format[i + 1] != '\0') && (format[i] == 'c' || format[i] == 'i'||
					format[i] == 'f' || format[i] == 's'))
			printf("%s", div);
		i++;
	}
	printf("\n");
	va_end(params);
}

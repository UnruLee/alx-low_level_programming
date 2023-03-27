#ifndef VARIADIC_FUNCTION_N
#define VARIADIC_FUNCTION_N
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct fx - New Struct
 *
 * @c: The data type (char)
 * @f: The function associated with it
 */

typedef struct fx
{
	char c;
	void (*f)(va_list);
} fx_l;

#endif

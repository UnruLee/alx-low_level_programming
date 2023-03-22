#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Entry point
 * @name: variable for name
 * @f: variable for function pointer
 *
 * Description: function that prints a name
 *
 * Return: Success
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == 0)
		return;
	f(name);
}

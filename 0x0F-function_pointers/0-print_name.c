#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Entry point
 * @name: is a variable character
 * @f: is a variable character
 *
 * Description: a function that prints a name.
 *
 * Return: 0 (success)
 */

void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - Entry point
 * @s: is a variable character
 *
 * Description: one of the list of functions
 *
 * Return: 0 (success)
 */

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (i < 5)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);

		i++;
	}

	return (NULL);
}

#include "main.h"

/**
 * _strlen_recursion - Entry point
 * @s: variable character
 *
 * Description: funciton that prints length of a string
 *
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}

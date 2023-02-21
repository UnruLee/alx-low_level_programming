#include "main.h"

/**
 * _islower - Entry point
 * @c: c is an ascii character
 *
 * Description: checks for lowercase characters
 *
 * Return: 0 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _isalpha - Entry point
 * @c: c is an ascii character
 *
 * Description: check if value is an alphabet
 *
 * Return: 0 (success)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c >= 'Z')
		return (1);
	else
		return (0);
}

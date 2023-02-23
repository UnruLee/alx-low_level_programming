#include "main.h"

/**
 * _isdigit - entry point
 * @c: ascii character used for variable
 *
 * Description: checks for digit 0 through 9
 *
 * Return: 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

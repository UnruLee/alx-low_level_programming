#include "main.h"

/**
 * _abs - Entry point
 * @n: n represents the integer variable
 *
 * Description: prints absolute value
 *
 * Return: 0 (success)
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	else
		return (n);
}

#insert "main.h"

/**
 * _isupper - entry point
 * @c: ascii cahractor used for variable
 *
 * Description: function that checks for uppercase letter
 *
 * Return: 1 if uppercase and 0 otherwise
 */

void _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}

#include "main.h"

/**
 * wildcmp - entry point
 * @s1: function parameter one
 * @s2: function parameter two
 *
 * Description: a function that compares two strings and returns 1
 * if the strings can be considered identical, otherwise return 0.
 *
 * Return: Always 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2 || *s2 == '*')
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wilcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}

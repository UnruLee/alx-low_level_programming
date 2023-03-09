#include "main.h"

/**
 * check1 - Entry point
 * @s: entry point
 *
 * Description: check string lenght
 *
 * Return: Success (1)
 */

int check1(char *s)
{
	if (*s == '\0')
		return (0);

	return (check1(s + 1) + 1);
}

/**
 * check2 - Entry point
 * @x: variable character
 * @y: variable character
 *
 * Description: checks for matching characters
 *
 * Return: Success (1)
 */

int check2(char *x, char *y)
{
	if (x > y)
		return (1);
	if (*x != *y)
		return (0);

	return (check2(x + 1, y - 1));
}

/**
 * is_palindrome -Entry point
 * @s: varibale character
 *
 * Description: function that returns 1 if a string is a palindrome
 * and 0 if not
 *
 * Return: Success (1)
 */

int is_palindrome(char *s)
{
	int i;

	i = check1(s);

	return (check2(s, s + i - 1));
}

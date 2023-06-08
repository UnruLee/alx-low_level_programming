#include "main.h"

/**
 *  check1 - entry point
 *  @t: function paramater
 *
 *  Description:  a function that check length of string
 *
 *  Return: Always 0
 */

int check1(char *t)
{
	if (*t == '\0')
		return (0);
	return (check1(t + 1) + 1);
}

/**
 *  check2 - entry point
 *  @p: function paramater one
 *  @k: function parameter two
 *
 *  Description:  a function that checks for palindrome string
 *
 *  Return: Always 0
 */

int check2(int p, int k)
{
	if (p > k)
		return (1);
	if (*p != *k)
		return (0);
	return (check2(p + 1, k - 1));
}

/**
 *  is_palindrome - entry point
 *  @s: function paramater
 *
 *  Description:  a function that returns 1 if a string is a palindrome and
 *  0 if not.
 *
 *  Return: Always 0
 */

int is_palindrome(char *s)
{
	int i = check1(s);

	return (check2(s, s + i - 1));
}

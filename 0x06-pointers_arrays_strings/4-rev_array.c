#include "main.h"

/**
 * rev_array - Entry point
 * @a: variable array character
 * @n: variable integer character
 *
 * Description: function that reverses the content of integers
 *
 * Return: Always 0
 */

void rev_array(int *a, int n)
{
	int i;
	int temp;

	n--;

	for (i = 0; i < n; i++, n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}

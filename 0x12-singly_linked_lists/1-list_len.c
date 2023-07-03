#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - entry point
 * @h: list variable
 *
 * Description: a function that returns the number of elements in a
 * linked list_t list.
 *
 * Return: Always 0
 */

size_t list_len(const list_t *h)
{
	unsigned int p = 0;

	while (h != 0)
	{
		h = h->next;
		p++;
	}

	return (p);
}

#include "lists.h"

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
	size_t p;

	p = 0;
	while (h != NULL)
	{
		p++;
		h = h->next;
	}

	return (p);
}

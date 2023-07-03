#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - entry point
 * @h: list variable
 *
 * Description: a function that prints all the elements of a list_t list.
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t p;

	p = 0;
	while (h != NULL)
	{
		p++;
		if (h->s == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->l, h->s);

		h = h->next;
	}
	return (p);
}

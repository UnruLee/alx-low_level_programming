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
	unsigned int p;

	p = 0;
	while (h != NULL)
	{
		if (h->s == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->l, h->s);

		h = h->next;
		p++;
	}
	return (p);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - entry point
 * @h: function variable
 *
 * Description: a function that prints all the elements of a listint_t list.
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int size;

	size = 0;
	while (h != NULL)
	{
		size++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}

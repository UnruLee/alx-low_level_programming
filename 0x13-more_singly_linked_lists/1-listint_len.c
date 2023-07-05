#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - entry point
 * @h: function variable
 *
 * Description: a function that returns the number of elements in a
 * linked listint_t list
 *
 * Return: Always 0
 */

size_t listint_len(const listint_t *h)
{
	unsigned int size;

	size = 0;
	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}

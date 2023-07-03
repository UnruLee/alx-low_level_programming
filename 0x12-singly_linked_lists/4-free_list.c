#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - entry point
 * @head: list variablee
 *
 * Description:  a function that frees a list_t list
 *
 * Return: Always 0
 */

void free_list(list_t *head)
{
	if (head == 0)
		return;

	free_list(head->next);
	free(head->str);
	free(head);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * lenstr - returns length of string
 * @s: string variable
 * Return: string length
 */

int lenstr(const char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

/**
 * add_node_end - entry point
 * @head: function parameter
 * @str: function parameter
 *
 * Description:  a function that adds a new node at the end of a list_t list
 *
 * Return:  the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	char *s;
	list_t *temp;

	temp = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	s = strdup(str);
	if (s == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = lenstr(str);
	new->str = s;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * lenstr - length of string
 * @s: string variable
 * Return: string length
 */

int lenstr(const char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}

/**
 * add_node - entry point
 * @head: function parameter
 * @str: second function parameter
 *
 * Description: a function that adds a new node at the beginning
 * of a list_t list
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *s;
	int l;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		s = NULL;
		l = 0;
	}
	else
	{
		s = strdup(str);
		l = lenstr(str);
	}
	new->len = l;
	new->str = s;
	new->next = *head;
	*head = new;

	return (*head);
}

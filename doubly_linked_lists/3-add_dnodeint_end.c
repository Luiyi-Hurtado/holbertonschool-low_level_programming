#include "lists.h"

/**
 *add_dnodeint_end - adds a new node at the end of a list.
 *@head: header pointer of the linked list
 *@n: data input in the linked list
 *
 *Return: adds a new node at the end
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_n, *last_n;

	new_n = malloc(sizeof(dlistint_t));
	if (!new_n)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;
	last_n = *head;

	if (!*head)
	{
		new_n->prev = NULL;
		*head = new_n;
		return (new_n);
	}
	
	while (last_n->next != NULL)
		last_n = last_n->next;

	last_n->next = new_n;
	new_n->prev = last_n;

	return (new_n);
}

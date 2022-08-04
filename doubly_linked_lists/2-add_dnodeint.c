#include "lists.h"

/**
 *add_dnodeint - adds a new node at the beginning of a list.
 *@head: header pointer of the linked list
 *@n: data in the linked list
 *
 *Return: node at the beginning of a list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_n;

	new_n = malloc(sizeof(dlistint_t));
	if (!new_n)
		return (NULL);

	new_n->n = n;
	new_n->next = *head;
	new_n->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new_n;

	(*head) = new_n;

	return (new_n);
}

#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts a new node at a given position
 *@h: header pointer of the linked list
 *@n: data of the linekd list
 *@idx: index of the node
 *
 *Return: linked list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_n, *copy_h = *h;
	unsigned int count = 0;

	new_n = malloc(sizeof(dlistint_t));
	if (!new_n)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (count = 0; count < idx - 1; count++)
	{
		if (!copy_h)
			return (NULL);
		copy_h = copy_h->next;
	}

	if (!copy_h->next)
		return (add_dnodeint_end(h, n));

	new_n->n = n;
	new_n->prev = copy_h;
	new_n->next = copy_h->next;
	copy_h->next->prev = new_n;
	copy_h->next = new_n;

	return (new_n);
}

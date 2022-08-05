#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes the node at index
 *@head: header pointer of the linked list
 *@index: index of the node
 *
 *Return: 1 if it success, -1 if at failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *copy_h = *head;
	unsigned int count = 0;

	if (!head)
		return (-1);

	if (index == 0)
	{
		if (!copy_h)
			return (-1);

		*head = (*head)->next;
		free(copy_h);

		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	for (count = 0; copy_h != NULL; count++)
	{
		if (count == index)
		{
			if (copy_h->next)
				copy_h->next->prev = copy_h->prev;
			if (copy_h->prev)
				copy_h->prev->next = copy_h->next;

			free(copy_h);
			return (1);
		}
		copy_h = copy_h->next;
	}

	return (-1);
}

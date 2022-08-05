#include "lists.h"

/**
 *
 *
 *
 *
 */
void free_dlistint(dlistint_t *head)
{

	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
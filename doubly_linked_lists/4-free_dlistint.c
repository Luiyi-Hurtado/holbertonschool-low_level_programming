#include "lists.h"

/**
 *free_dlistint - that frees a list.
 *@head: header pointer of the linked list
 *
 *Return: nothing
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

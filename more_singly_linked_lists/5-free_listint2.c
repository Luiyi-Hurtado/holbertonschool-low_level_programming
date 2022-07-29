#include "lists.h"

/**
 *free_listint2 - free list
 *@head: header pointer of the linked list
 *
 *Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	if (!head)
		return;

	while (*head)
	{
		new = (*head)->next;
		free(head);
		*head = new;
	}

	head = NULL;
}

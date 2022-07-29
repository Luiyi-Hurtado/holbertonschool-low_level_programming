#include "lists.h"

/**
 *free_listint - free list
 *@head: header pointer of the linked list
 *
 *Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *newNode;

	while (head)
	{
		newNode = head->next;
		free(head);
		head = newNode;
	}
}

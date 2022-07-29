#include "lists.h"

/**
 *pop_listint - delte the head node
 *@head: header pointer of the linked list
 *
 *Retrun: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *newNode;
	int data = 0;

	if (!head)
		return (0);

	newNode = *head;
	*head = (*head)->next;
	data = (*head)->n;

	free(newNode);

	return (data);
}

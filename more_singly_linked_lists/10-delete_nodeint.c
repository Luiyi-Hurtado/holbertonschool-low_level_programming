#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the node at index index of linked lis
 *@head: header pointer of the linked list
 *@index: index of the nodes in liked list
 *
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *newNode, *copy_h = *head;
	unsigned int count = 0;

	if (!copy_h)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy_h);
		return (1);
	}

	for (count = 0; count < (index - 1); count++)
	{
		if (!copy_h->next)
			return (-1);

		copy_h = copy_h->next;
	}

	newNode = copy_h->next;
	copy_h->next = newNode->next;
	free(newNode);

	return (1);
}

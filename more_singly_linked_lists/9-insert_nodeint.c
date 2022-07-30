#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given position.
 *@head: header pointer of the linked list
 *@idx: index of the linked list
 *@n: input arguments of the new node
 *
 *Return: NULL if newNode is NULL or inserts a new node at a given position
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *copy_h = *head;
	unsigned int count = 0;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = copy_h;
		*head = newNode;
		return (newNode);
	}

	for (count = 0; count < idx - 1; count++)
	{
		if (!copy_h || !copy_h->next)
			return (NULL);
		copy_h = copy_h->next;
	}

	newNode->next = copy_h->next;
	copy_h->next = newNode;

	return (newNode);
}

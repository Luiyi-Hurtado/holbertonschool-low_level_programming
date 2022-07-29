#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a list
 *@head: header pointer of the list
 *@n: input arguments of the list
 *
 *Return: head adds node at the end of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *lastNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;

	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
			lastNode = lastNode->next;

		lastNode->next = newNode;
	}

	return (*head);
}

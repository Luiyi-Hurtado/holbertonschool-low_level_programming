#include "lists.h"

/**
 *add_nodeint - adds a new node at the beginning of a list.
 *@head: header pinter of the list
 *@n: input arguments
 *
 *Return: all node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

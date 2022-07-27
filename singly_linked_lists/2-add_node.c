#include "lists.h"

/**
 *add_node - add new node at the beginning of a list
 *@head: header pointer of the list
 *@str: input arguments
 *
 *Return: new node at beginning of a list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	
	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	if (head != NULL)
	{
		newNode->str = strdup(str);
		newNode->len = strlen(str);
		newNode->next = *head;

		*head = newNode;

		return (newNode);
	}
	
	return (0);
}

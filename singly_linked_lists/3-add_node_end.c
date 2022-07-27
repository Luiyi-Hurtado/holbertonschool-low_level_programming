#include "lists.h"

/**
 *add_node_end - add new node at the end of the list
 *@head: header pointer of the list
 *@str: input arguments
 *
 *Return: new node at the end of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *lastNode;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	if (str != NULL)
	{
		newNode->str = strdup(str);
		newNode->len = strlen(str);
		newNode->next = NULL;

		if(*head == NULL)
		{
			*head = newNode;
			return (*head);
		}
		else
		{
			lastNode = *head;
			while (lastNode->next != NULL)
				lastNode = lastNode->next;

			lastNode->next = newNode;
			return (lastNode);
		}
	}

	return (EXIT_SUCCESS);
}


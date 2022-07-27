#include "lists.h"

/**
 *free_list - free list
 *@head: header pointer list
 *
 *Return: nothing
 */
void free_list(list_t *head)
{
	list_t *newNode;

	while (head)
	{
		newNode = head;
		head = head->next;
		free(newNode->str);
		free(newNode);
	}
	free(head);
}

#include "lists.h"

/**
 *sum_dlistint - the sum of all the data (n)
 *@head: header pointer of the linked list
 *
 *Return: sum data
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	if (!head)
		return (0);

	while (head)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}

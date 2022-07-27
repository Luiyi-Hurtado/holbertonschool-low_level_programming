#include "lists.h"

/**
 *list_len - number elements in the list
 *@h: header pointer
 *
 *Return: number elements
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	for (count = 0 ; h != NULL ; count++)
		h = h->next;

	return (count);
}

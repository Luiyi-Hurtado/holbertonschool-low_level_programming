#include "hash_tables.h"

/**
 *hash_table_get - give key and gey value
 *@ht: hash table
 *@key: key of the value
 *
 *Return: Value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx = 0;
	hash_node_t *new_element;

	if (!ht || !key)
		return (NULL);

	indx = key_index((const unsigned char *) key, ht->size);
	new_element = (ht->array)[indx];

	while (new_element != NULL && strcmp(new_element->key, key) != 0)
		new_element = new_element->next;

	if (!new_element)
		return (NULL);
	else
		return (new_element->value);
}

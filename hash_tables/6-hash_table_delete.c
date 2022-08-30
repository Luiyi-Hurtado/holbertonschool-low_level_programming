#include "hash_tables.h"

/**
 *hash_table_delete - free hash table
 *@ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int indx = 0;
	hash_node_t *new_node, *next;

	if (!ht)
		return;
	if (!(ht->array))
	{
		free(ht);
		return;
	}

	while (indx < ht->size)
	{
		new_node = (ht->array)[indx];
		while (new_node)
		{
			next = new_node->next;
			if (new_node->key)
				free(new_node->key);
			if (new_node->value)
				free(new_node->value);
			new_node->key = NULL;
			new_node->value = NULL;
			free(new_node);
			new_node = next;
		}
		indx++;
	}
	free(ht->array);
	free(ht);
}

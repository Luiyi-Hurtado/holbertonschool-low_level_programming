#include "hash_tables.h"

/**
 * hash_table_create - Create memory space of hash tables
 * @size: Hash table index
 *
 * Return: New hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	size_t indx = 0;

	if (size > 0)
	{
		new_table = malloc(sizeof(hash_table_t));
		if (!new_table)
			return (NULL);

		new_table->size = size;
		new_table->array = malloc(sizeof(hash_table_t *) * size);
		if (!new_table->array)
			return (NULL);

		for (indx = 0; indx < size; indx++)
			new_table->array[indx] = NULL;

		return (new_table);
	}
	return (NULL);
}

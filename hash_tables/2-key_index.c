#include "hash_tables.h"

/**
 * key_index - Gives key´s index
 * @key: Key of the hash table
 * @size: Size of the hash table
 *
 * Return: index key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int key_indx = (hash_djb2(key) % size);

	return (key_indx);
}

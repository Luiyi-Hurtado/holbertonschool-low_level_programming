#include "hash_tables.h"

/**
 * link_node - node of the hash table
 * @ht: hash table
 * @key: key of the value
 * @value: value of the key
 * @indx: index of the hash table
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int link_node(hash_table_t *ht, const char *key,
		const char *value, unsigned long int indx)
{
	hash_node_t *new_node = NULL;
	char *k_dup = NULL, *v_dup = NULL;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	k_dup = strdup(key);
	if (!k_dup)
	{
		free(new_node);
		return (0);
	}

	v_dup = strdup(value);
	if (!v_dup)
	{
		free(k_dup);
		free(new_node);
		return (0);
	}

	new_node->key = k_dup;
	new_node->value = v_dup;

	if (!(ht->array)[indx])
		new_node->next = NULL;
	if ((ht->array)[indx] != NULL)
		new_node->next = (ht->array)[indx];

	(ht->array)[indx] = new_node;

	return (1);
}

/**
 *hash_table_set - adds elements of the hash table
 *@ht: hash tahble
 *@key: key of the value
 *@value: valueo of the key
 *
 *Return: 1 if succeedded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx = 0;
	hash_node_t *new_node = NULL;
	char *v_dup = NULL;

	if (!ht || !(ht->array) || strlen(key) == 0 || !value)
		return (0);

	indx = key_index((const unsigned char *) key, ht->size);
	new_node = (ht->array)[indx];

	while (new_node && (strcmp(key, new_node->key) != 0))
		new_node = new_node->next;
	if (new_node != NULL)
	{
		v_dup = strdup(value);

		if (!v_dup)
			return (0);
		if (new_node->value)
			free(new_node->value);
		new_node->value = v_dup;

		return (1);
	}

	return (link_node(ht, key, value, indx));
}

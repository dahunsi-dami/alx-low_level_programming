#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array.
 * Return: pointer to new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht;
	unsigned long int i;

	hasht = malloc(sizeof(hash_table_t));
	if (hasht == NULL)
		return (NULL);

	hasht->size = size;
	hasht->array = calloc(hasht->size, sizeof(hash_node_t *));

	for (i = 0; i < hasht->size; i++)
		hasht->array[i] = NULL;

	return (hasht);
}

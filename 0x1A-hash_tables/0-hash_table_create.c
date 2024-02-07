#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array.
 * Return: pointer to new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht;

	hasht = malloc(size);
	if (hasht == NULL)
		return (NULL);

	return (hasht);
}

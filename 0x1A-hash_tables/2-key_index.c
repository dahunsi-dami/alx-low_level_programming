#include "hash_tables.h"
/**
 * key_index - gives the index of a key.
 * @key: the key of value to be stored in hash table.
 * @size: the size of array of hash table.
 * Return: pointer to new hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key);

	return (i % size);
}

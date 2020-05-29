#include "hash_tables.h"

/**
 * key_index - this is a hash table
 * @key: key
 * @size: size
 * Return: index of hash generated
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (size == 0 || key == NULL)
		return (0);

	hash = (hash_djb2(key) % size);

	return (hash);
}

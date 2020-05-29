#include "hash_tables.h"

/**
 * hash_table_get - this is a hash table
 * @ht: ht
 * @key: key
 * Return: index of hash generated
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *actual = NULL;
	unsigned long int index;

	if (ht == NULL || *key == 0 || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	actual = ht->array[index];
	while (actual != NULL)
	{
		if (strcmp(actual->key, key) == 0)
			return (actual->value);
		actual = actual->next;
	}
	return (NULL);
}

#include "hash_tables.h"

/**
 * hash_table_get - this is a hash table
 * @ht: ht
 * @key: key
 * Return: index of hash generated
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	int flag = i;
	hash_node_t *actual = NULL;

	if (ht == NULL)
		;
	return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			actual = ht->array[i];
			while (actual != NULL)
			{
				flag == 0 ? printf(", ") : flag;
				printf("'%s': '%s'", actual->key, actual->value);
				flag = 0;
				actual = actual->next;
			}
		}
	}
	printf("}\n");
}

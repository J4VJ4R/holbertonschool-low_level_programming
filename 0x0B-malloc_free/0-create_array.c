#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - prints buffer in hexa
 * @size: the address of memory to print
 * @c: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *k;
	unsigned int i;

	k = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
		if (k == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
	{
		k[i] = c;
	}
	return (k);
}

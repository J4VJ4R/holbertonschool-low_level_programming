#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - prints buffer in hexa
 * @size: the address of memory to print
 * @c: the size of the memory to print
 *
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	int size;
	char *a;
	int l;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
	{
		ptr = malloc(1 * (sizeof(char)));
			     ptr[0] = '\0';
			     return (ptr);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	i--;
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	size = i + j;
	

	a = malloc(size * sizeof(char));
	l = 0;
	while (k <= i)
	{
		a[k] = s1[k];
		k++;
	}
	while (k <= size)
	{
		a[k] = s2[l];
		k++;
		l++;
	}
	return (a);
}

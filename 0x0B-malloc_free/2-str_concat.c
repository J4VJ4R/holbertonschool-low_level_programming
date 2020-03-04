#include "holberton.h"
#include <stdlib.h>
/**
 * *str_concat - prints buffer in hexa
 * @s1: the address of memory to print
 * @s2: the size of the memory to print
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

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
	for (j = 0; s2[j] != '\0'; j++)
		;
	}
	size = i + j + 1;

	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	l = 0;
	while (k < i)
	{
		a[k] = s1[k];
		k++;
	}
	while (k < size)
	{
		a[k] = s2[l];
		k++;
		l++;
	}
	a[i + j] = '\0';
	return (a);
}

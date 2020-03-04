#include "holberton.h"
#include <stdlib.h>
/**
 * *_strdup - prints buffer in hexa
 * @str: the address of memory to print
 *
 *
 * Return: Nothing.
 */
	char *_strdup(char *str)
	{
		unsigned int len;
		char *k;
		unsigned int i;

		if (str == NULL)
		{
			return (NULL);
		}
		for (len = 0; str[len] != '\0' ; len++)
		{
		}
		k = malloc(len * sizeof(char));
		if (len == 0)
		{
			return (NULL);
		}
		if (k == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < len; i++)
		{
			k[i] = str[i];
		}
		return (k);
	}

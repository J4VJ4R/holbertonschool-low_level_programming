#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - check the code for Holberton School students.
 * @s:integer
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

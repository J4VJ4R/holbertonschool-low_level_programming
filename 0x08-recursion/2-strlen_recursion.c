#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s:char
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(++s) + 1);
	}
	return (0);
}

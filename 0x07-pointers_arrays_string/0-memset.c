#include "holberton.h"
/**
 * *_memset - check the code for Holberton School students.
 * @s:char
 * @b:char
 * @n:unsigned int
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);

}

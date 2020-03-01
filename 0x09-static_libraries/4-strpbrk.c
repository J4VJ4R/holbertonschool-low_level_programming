#include "holberton.h"

/**
 * *_strpbrk - locates a character in a string
 * @s: string base
 * @accept: string to compare
 *
 * Return: i count
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}

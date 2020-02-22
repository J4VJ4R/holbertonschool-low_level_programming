#include "holberton.h"
/**
 * *string_toupper - check the code for Holberton School students.
 * @p:char
 *
 *
 * Return: Always 0.
 */
char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 97 && p[i] <= 122)
		{
			p[i] = p[i] - 32;
		}
	}
	return (p);
}

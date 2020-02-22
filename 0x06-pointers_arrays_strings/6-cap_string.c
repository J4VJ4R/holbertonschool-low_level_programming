#include "holberton.h"
/**
 * *cap_string - check the code for Holberton School students.
 * @p:char
 *
 *
 * Return: Always 0.
 */
char *cap_string(char *p)
{
	int i, j;
	char si[] = {' ', '\t', '\n', ',', ';',
		     '.', '!', '?', '"', '(', ')', '{', '}'};

	if (p[0] <= 'a' && p[0] >= 'z')
	{
		p[0] -= 32;
	}
	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if (si[j] == p[i])
			{
				if (p[i + 1] >= 'a' && p[i + 1] <= 'z')
				{
					p[i + 1] -= 32;
				}
			}
		}
	}
	return (p);
}

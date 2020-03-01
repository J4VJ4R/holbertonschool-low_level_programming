#include "holberton.h"

/**
 * *_strspn - locates a character in a string
 * @s: string base
 * @accept: string to compare
 *
 * Return: i count
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, x;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (needle[j] == haystack[i])
			{
				x = 0;
				break;
			}else
			{
				x = 1;
			}
		
			if (x == 0)
			{
				return (&needle[0]);
			}
			else
				return ('\0');
		}
	}
	return ('\0');
		
}

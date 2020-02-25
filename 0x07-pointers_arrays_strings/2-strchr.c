#include "holberton.h"
/**
 * *_strchr - prints buffer in hexa
 * @s:char
 * @c:char
 *
 * Return: a char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
		s = 0;
		return ('\0');
		return (s);
}

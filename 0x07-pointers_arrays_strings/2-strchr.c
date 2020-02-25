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
	char *t;
	int len;

	while (s[len] != '\0')
		len++;
	for (i = 0; i <= len; i++)
	{
		if (s[i] == c)
		{
			t = s + i;
			break;
		}
		t = 0;
	}
	for (i = 0; i > len; i++)
	{
		t = 0;
	}
	return (t);
}

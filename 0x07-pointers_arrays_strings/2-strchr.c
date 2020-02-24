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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			t = s + i;
			break;
		}
		t = 0;
	}
	return (t);
}

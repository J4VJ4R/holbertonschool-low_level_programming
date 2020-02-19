#include "holberton.h"

/**
 * print_rev - check the code for Holberton School students.
 *@s:char
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int a = 0;

	for (a = 62; s[a] != '\0'; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}

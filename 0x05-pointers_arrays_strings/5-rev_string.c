#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int a;
	int b;
	int c;
	for(a = 0; s[a] != '\0'; a++)
	{
	}
	a--;
	for(b = 0 ; b <= a; b++, a--)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;  
	}
}

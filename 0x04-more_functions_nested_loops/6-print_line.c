#include "holberton.h"
/**
 * print_line -  a function that prints
 * the numbers, from 0 to
 * 9, followed by a new line
 * @n:integer
 * Return: 0
 */

void print_line(int n)
{
	int y;

	if (n > 0)
	{
		for (y = 0; y < n; y++)
		{
			_putchar('_');
		}
	}
	if (n <= 0)
	{
	}
	_putchar ('\n');
}

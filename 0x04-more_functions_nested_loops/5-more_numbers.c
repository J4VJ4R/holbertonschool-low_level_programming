#include "holberton.h"

/**
 * more_numbers -  a function that prints
 * the numbers, from 0 to  * 9, followed by a new line
 *
 * Return: 0
 */

void more_numbers(void)
{
	int y;
	int n;
	int w;
	int z;

	for (y = 0; y <= 14 ; y++)
	{
	for (n = 0 ; n <= 14; n++)
	{

		if (n > 9)
		{
			w = n / 10;
			_putchar(w + '0');
		}
		z = n % 10;
		_putchar(z + '0');
	}
	_putchar('\n');
	}

}

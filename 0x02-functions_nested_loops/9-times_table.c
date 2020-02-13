#include "holberton.h"

/**
 * times_table - show the absolute value of n
 *
 * Return: 0 on success
 */
void times_table(void)
{

	int t0;
	int t2;
	int com;

	for (t0 = 0; t0 <= 9; t0++)
	{
	for (t2 = 0; t2 <= 9; t2++)
	{
		com = t0 * t2;
		if (t2 != 0)
		{
			if (com <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(com + '0');
			}
			else if (com > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(com / 10 + '0');
				_putchar(com % 10 + '0');
			}
		}
		else
		{
			_putchar(com + '0');
		}
	}
		_putchar('\n');
	}
}

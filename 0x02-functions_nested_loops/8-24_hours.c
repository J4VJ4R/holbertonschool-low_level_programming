#include "holberton.h"

/**
 * jack_bauer - show the absolute value of n
 *
 * Return: 0 on success
 */
void jack_bauer(void)
{
	int h1;
	int h2;
	int m1;
	int m2;

	for (h1 = 0; h1 <= 2; h1++)
	{
		h2 = 0;
		for (h2 = 0; h2 <= 9; h2++)
		{
			m1 = 0;
			if (h1 == 2 && h2 > 3)
		{
			break;
		}
			for (m1 = 0; m1 <= 5; m1++)
			{
				m2 = 0;
				for (m2 = 0; m2 <= 9; m2++)
				{
	_putchar('0' + h1);
	_putchar('0' + h2);
	_putchar(':');
	_putchar('0' + m1);
	_putchar('0' + m2);
	_putchar('\n');
				}
			}}}

}

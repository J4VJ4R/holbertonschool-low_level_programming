#include "holberton.h"

/**
 * print_last_digit - show the absolute value of n
 * @n:int checked
 * Return: 0 on success
 */

int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
	{
		digit = digit * -1;
	}
	_putchar('0' + digit);
	return (digit);
}

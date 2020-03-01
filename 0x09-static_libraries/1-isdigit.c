#include "holberton.h"

/**
 * _isdigit - Compare the intrance if is a digit or other things
 *@c:intgeger
 * Return: 0
 */

int _isdigit(int c)
{
	int x = c;

	if (x >= '0' && x <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

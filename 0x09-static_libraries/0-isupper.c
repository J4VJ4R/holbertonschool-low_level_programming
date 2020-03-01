#include "holberton.h"

/**
 * _isupper - Compare the intrance if is a uppercas or lowercase
 *@c:intgeger
 * Return: 0
 */

int _isupper(int c)
{
int x = c;
	if (x >= 'A' && x <= 'Z')
	{
	return (1);
}
	else
	{
		return (0);
	}
}

#include "holberton.h"

/**
 * _islower - compare if c is lowercase or no
 * @c:int checked
 * Return: 0 on success
 */

int _islower(int c)
{
	if (c >= 97 || c >= 122)
	{
	return (1);
	}
	return (0);
}


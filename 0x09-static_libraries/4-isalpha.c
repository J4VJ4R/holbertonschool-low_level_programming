#include "holberton.h"

/**
 * _isalpha - compare if c is lowercase or no
 * @c:int checked
 * Return: 0 on success
 */

int _isalpha(int c)
{
	if ((c >= 97 || c >= 122) || (c >= 65 && c <= 90))
	{
		if (c != 59)
			return (1);
	}
	return (0);
}

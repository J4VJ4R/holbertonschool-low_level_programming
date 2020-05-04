#include <stdio.h>
#include "holberton.h"

/**
 *_isalpha - checks for an alphabetic character
 * @c: char to check if alpha
 *Return: 1 if c is letter; 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
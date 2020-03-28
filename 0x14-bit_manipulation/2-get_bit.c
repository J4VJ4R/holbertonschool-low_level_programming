#include "holberton.h"
/**
 * get_bit - a function that get a bit
 * @n: an unsigned long integer
 * @index: this is a index
 * Return: an integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int long r;

if (index > 64)
	return (-1);

r = (((n >> index) & 1));

return (r);
}

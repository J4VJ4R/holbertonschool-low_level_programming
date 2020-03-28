#include "holberton.h"
/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: an usnsigned long integer
 * @m: an unsigned long integer
 * Return: an unsigned integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int count = 0;

while (n != m)
{
if ((n & 1) != (m & 1))
count++;
n = n >> 1;
m = m >> 1;
}
return (count);
}

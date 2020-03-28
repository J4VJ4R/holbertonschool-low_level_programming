#include "holberton.h"
/**
 * set_bit - a function that set a bit
 * @n: an integer
 * @index: an index
 * Return: an integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int inputData = *n;
unsigned long int comparator = 1;

comparator = (comparator << index);
while (index > 64)
return (-1);
*n = (inputData | comparator);
return (1);
}

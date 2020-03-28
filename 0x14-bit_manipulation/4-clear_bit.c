#include "holberton.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: a pointer
 * @index: an index
 * Return: an integer as result
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int inputData = *n;
unsigned long int comparator = 1;

comparator = (comparator << index);
while (index > 64)
return (-1);
*n = ((inputData & ~comparator));
return (1);
}

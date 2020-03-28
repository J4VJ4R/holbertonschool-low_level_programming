#include "holberton.h"
/**
 * print_binary - a function that print a binary
 * @n: an unsigned long int
 * Return: anything
 */
void print_binary(unsigned long int n)
{
int lenVar = 0;
unsigned long int result = n;

while ((result >> 1) > 0)
{
	lenVar++;
	result = result >> 1;
}
result = n;
while (lenVar > 0)
	_putchar(((result >> lenVar--) & 1) + '0');
_putchar((result & 1) + '0');
}

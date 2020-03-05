#include "holberton.h"
#include <stdlib.h>
/**
 * *malloc_checked - prints buffer in hexa
 * @b: the address of memory to print
 *
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	if (b == 0)
		exit(98);
	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}

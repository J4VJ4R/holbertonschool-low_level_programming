#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - check the code for Holberton School students.
 * @n: is a unsigned int
 * Return: in this case return a i
 */
int sum_them_all(const unsigned int n, ...)
{
	int o = n;
	va_list ap;
	unsigned int i = 0;

	if (o == 0)
		return (0);
	va_start(ap, n);
	for (; o; o--)
		i += va_arg(ap, int);
	va_end(ap);
	return (i);


}

#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - check the code for Holberton School students.
 * @n: is a unsigned int
 * @separator: is a pointer a char
 * Return: in this case return a i
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int o = n;
	va_list num;
	unsigned int i = 0;

	if (o == 0)
		printf("0");
	va_start(num, n);
	for (; o; o--)
	{
		i = va_arg(num, int);
		printf("%i", i);
		if (o > 1)
			printf("%s", separator);
	}
	va_end(num);
	printf("\n");
}

#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - check the code for Holberton School students.
 * @n: is a unsigned int
 * @separator: is a separator
 * Return: in this case return a i
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *l = 0;
	char *m = 0;
	int o = n;
	va_list let;

	if (o != 0)
	{
		va_start(let, n);
	for (; o; o--)
		l = va_arg(let, char*);
		m = va_arg(let, char*);
			printf("%s", l);
			printf("%s", separator);
			printf("%s", m);
			if (o > 1)
				printf("%s", separator);
	va_end(let);
	printf("\n");
	}
	else
		printf("nil");
}

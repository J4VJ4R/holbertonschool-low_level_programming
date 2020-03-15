#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * fn_char - check the code for Holberton School students.
 *
 * @data: this is a data
 */

void fn_char(va_list data)
{
	printf("%c", va_arg(data, int));
}

/**
 * fn_integer - check the code for Holberton School students.
 *@data: this is a data
 *
 */
void fn_integer(va_list data)
{
	printf("%i", va_arg(data, int));
}

/**
 * main - check the code for Holberton School students.
 * @data: this a data
 */
void fn_float(va_list data)
{
	printf("%f", va_arg(data, double));
}

/**
 * fn_string - check the code for Holberton School students.
 * @data: this is a data
 *
 */
void fn_string(va_list data)
{
	printf("%s", va_arg(data, char*));
}


/**
 * print_all - this is a print_all
 *@format: this is a format
 */
void print_all(const char * const format, ...)
{



	op_t printstring[] = {
		{"c", fn_char},
		{"i", fn_integer},
		{"f", fn_float},
		{"s", fn_string},
		{NULL, NULL}
	};
	va_list argvar;
	unsigned int j, i = 0;
	char *printsep = "";

	va_start(argvar, format);

	while (format &&  format[i])
	{
		j = 0;
		while (printstring[j].format_module)
		{
			if (printstring[j].format_module[0] == format[i])
			{
				printf("%s", printsep);
				printstring[j].f(argvar);
				printsep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
}

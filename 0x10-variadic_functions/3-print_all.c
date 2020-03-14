#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * *get_op_func - Struct op
 */


void fn_char(va_list data)
{
	printf("%c", va_arg(data, int));
}

void fn_integer(va_list data)
{
	printf("%i", va_arg(data, int));
} 

void fn_float(va_list data)
{
	printf("%f", va_arg(data, double));
}

void fn_string(va_list data)
{
	printf("%s", va_arg(data, char*));
}



void print_all(const char * const format, ...)
{
	unsigned int j, i = 0;
	char *printsep = "";
	op_t printstring[] = {
		{"c", fn_char},
		{"i", fn_integer},
		{"f", fn_float},
		{"s", fn_string},
		{NULL, NULL}
	};
	va_list nose;
	va_start(nose, format);
	while (format &&  format[i])
	{
		j = 0;
		while(printstring[j].op[0] == format[i])
		{
			if (printstring[j].op[0] == format[i])
			{
				printstring[j].f;
				printf("%s",printsep);
				
			}
			j++;
		}
		i++;
	}
}

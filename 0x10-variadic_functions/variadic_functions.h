#ifndef VAR_F
#define VAR_F
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct formats
{
	char *format_module;
	void (*f)(va_list list);
} op_t;
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif

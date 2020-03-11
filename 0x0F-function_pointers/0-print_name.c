#include <stdio.h>
/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: this is a name of function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

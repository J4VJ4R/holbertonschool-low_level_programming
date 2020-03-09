#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
#define BASE_FILE
int main(void)
{
	#ifndef BASE_FILE
	#define BASE_FILE
#endif
	printf("%s\n", __FILE__);
	return (0);
}

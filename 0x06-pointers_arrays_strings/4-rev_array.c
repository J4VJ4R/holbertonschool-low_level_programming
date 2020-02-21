#include "holberton.h"
/**
 * reverse_array - check the code for Holberton School students.
 * @a:char
 * @n:char
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	n--;

	for (i = 0; i < n; i++, n--)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}

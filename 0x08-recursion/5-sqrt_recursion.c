#include "holberton.h"./5-sqrt

/**
 * ed - this I use for other function
 *
 * @n: integer
 * @b: integer
 * Return: Always 0.
 */

int ed(int n, int b)
{
	int r;

	if (n == b * b)
	{
		return (1);
	}
	if (b * b > n)
	{
		return (-1);
	}
	r = ed(n, b + 1);
	if (r < 0)
	{
		return (-1);
	}
	return (1 + r);
}
/**
 * _sqrt_recursion - check the code for Holberton School students.
 * @n: integer
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{

	int k;

	k = ed(n, 1);
	return (k);
}

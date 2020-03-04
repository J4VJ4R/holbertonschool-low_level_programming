#include "holberton.h"
#include <stdlib.h>
/**
 * **alloc_grid - prints buffer in hexa
 * @width: the address of memory to print
 * @height: the size of the memory to print
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int **x;
	int i;

	x = malloc(width * sizeof(int *));
	if (x == NULL)
		return (NULL);
			if (width <= 0 || height <= 0)
				return (NULL);
	for (i = 0; i < width; i++)
		x[i] = (int *) malloc(height * sizeof(int));
	return (x);
}
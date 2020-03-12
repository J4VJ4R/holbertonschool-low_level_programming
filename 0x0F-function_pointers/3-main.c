#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the proposit is go home to sleep
 * @agrc: integer
 * @agrv: char
 * Return: diferent returns
 */
int main(int agrc, char *agrv[])
{
	int (*math)(int, int);

	if (agrc == 4)
	{
		math = get_op_func(agrv[2]);
		if (math == NULL)
		{
			printf("Error\n");
			exit(99);

		}
		printf("%d\n", math(atoi(agrv[1]), atoi(agrv[3])));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);


}

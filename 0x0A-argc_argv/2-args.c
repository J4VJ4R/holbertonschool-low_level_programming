#include <stdio.h>
/**
 *main - prints the number of arguments
 *@argc: Quantity of arguments
 *@argv: Arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
		printf("%s\n", argv[i++]);
	return (0);
}

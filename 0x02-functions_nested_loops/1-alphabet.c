#include "holberton.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: 0 on success
 */

void print_alphabet(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

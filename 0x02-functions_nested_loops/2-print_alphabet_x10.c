#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase x 10
 *
 * Return: 0 on success
 */

void print_alphabet_x10(void)
{
int j = 0;
while (j < 10)
{
char letter = 'a';
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
j++;
}

}

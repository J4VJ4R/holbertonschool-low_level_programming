#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - last digit
 * - A column of asterisks on the left side,
 * with beginning and ending almost-blank lines.
 *
 * Return: (0)
 */

int main(void)
{
char letter = 'a';
char letter1 = 'A';
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
for (letter1 = 'A'; letter1 <= 'Z'; letter1++)
{
putchar(letter1);
}
putchar('\n');
return (0);
}

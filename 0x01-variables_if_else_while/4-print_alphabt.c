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
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
putchar(letter);
}
putchar('\n');
return (0);
}

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
int i = 0;
while (i < 10)
{
putchar(48 + i);
i++;
}
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}

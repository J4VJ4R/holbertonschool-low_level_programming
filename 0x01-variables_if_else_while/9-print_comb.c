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
int i = 0;
while (i < 10)
{
putchar(48 + i);
if (i < 9)
{
putchar(44);
putchar(32);
}
i++;
}
putchar('\n');
return (0);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - check the code for Holberton School students.
 *  @h: this is a list
 * Return: a size_t
 */
size_t print_list(const list_t *h)
{
unsigned long i = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] %s\n", "(nil)");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
i++;
}
return (i);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - check the code for Holberton School students.
 *  @h: this is a list
 * Return: a size_t
 */
size_t list_len(const list_t *h)
{
unsigned long i = 0;

while (h != NULL)
{


h = h->next;
i++;
}
return (i);
}

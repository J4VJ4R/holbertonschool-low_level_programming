#include "lists.h"
/**
 * print_dlistint - a function to show the number of elements
 * @h: variable of the elements inside
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t i;

    for (i = 0; h; i++)
    {
        printf("%d\n", h->n);
        h = h->next;
    }
    return (i);
}

#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
    size_t i;

    for (i = 0; i++)
    {
        printf("%d\n", h->n);
        h = h->next;
    }
    return(i);
}
#include "lists.h"
/**
 * dlistint_len - a function to show the number of elements
 * @h: variable of the elements inside
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}

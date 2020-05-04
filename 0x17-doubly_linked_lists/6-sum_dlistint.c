#include "lists.h"
/**
 * sum_dlistint - is a function to add
 * a new node at the end
 * @head: where give a new space fo a nodo
 * element
 * Return: the count one
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *list = head;
	int count = 0;
	if (head == NULL)
		return (0);
	while (list != NULL)
	{
		count += list->n;
		list = list->next;
	}
	return (count);
}

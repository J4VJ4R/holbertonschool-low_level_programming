#include "lists.h"
/**
 * get_dnodeint_at_index(dlistint_t - is a function to add
 * a new node at the end
 * @head: where give a new space
 * @index: is a variable where inside the number of space or of
 * element
 * Return: the head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t(*head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	while (index != 0 && head != NULL)
	{
		head = head->next;
		index = index - 1;
	}
	if (head == NULL)
		return (NULL);
	return (head);
}

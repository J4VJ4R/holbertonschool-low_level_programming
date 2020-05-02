#include "lists.h"
/**
 * add_dnodeint_end - is a function to add a new node at the end
 * @head: where give a new space
 * @n: where enter a variable type int
 * Return: a new node at the end
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nuevoEnd = NULL, *nAux = *head;

	nuevoEnd = malloc(sizeof(dlistint_t));
	if (nuevoEnd == NULL)
		return (NULL);
	nuevoEnd->n = n;
	nuevoEnd->next = NULL;
	if (*head == NULL)
	{
		nuevoEnd->prev = NULL;
		*head = nuevoEnd;
	}
	else
	{
		nAux = *head;
		while (nAux->next != NULL)
			nAux = nAux->next;
		nuevoEnd->prev = nAux;
		nAux->next = nuevoEnd;
	}
	return (nuevoEnd);
}

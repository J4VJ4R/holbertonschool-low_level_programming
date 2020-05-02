#include "lists.h"
/**
 * add_dnodeint_end - is a function to add a new node at the end
 * @head: where give a new space
 * @head: where enter a variable type int
 * Return: a new node at the end
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nuevo;

	nuevo = *head;
	if (head == NULL)
		return (NULL);
	nuevo = malloc(sizeof(dlistint_t));
	if (nuevo == NULL)
		return (NULL);
	nuevo->n = n;
	nuevo->prev = NULL;
	nuevo->next = *head;
	if (*head != NULL)
		(*head)->next = nuevo;
	*head = nuevo;
	return (nuevo);
}

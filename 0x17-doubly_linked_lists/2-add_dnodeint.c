#include "lists.h"
/**
 * add_dnodeint - a function to show the number of elements
 * @head: variable of the elements inside
 * @n: cuantiti of the element
 * Return: a temp
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
		(*head)->prev = nuevo;
	*head = nuevo;
	return (nuevo);
}

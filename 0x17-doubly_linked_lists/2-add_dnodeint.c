#include "lists.h"
/**
 * add_dnodeint - a function to show the number of elements
 * @head: variable of the elements inside
 * @n: cuantiti of the element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

    tmp = *head;
    if (head == NULL)
        return (NULL);
    tmp = malloc(sizeof(dlistint_t));
    if (tmp == NULL)
        return (NULL);
    tmp->n = n;
    tmp->prev = NULL;
    tmp->next = *head;

    if (*head != NULL)
        (*head)->prev = tmp;
    *head = tmp;
    return (tmp);    
}

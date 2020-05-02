#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * 
 * 
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
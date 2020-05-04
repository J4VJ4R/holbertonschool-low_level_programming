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
    int count = head->n;
    if (head == NULL)
        return (0);
    while (head != NULL)
    {
        head = head->next;
        count = count + head->n;
    }
    return (count);
    
}

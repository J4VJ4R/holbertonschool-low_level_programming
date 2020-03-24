#include "lists.h"
/**
 * free_listint2 - function to free memory
 * @head: a pointer that passed a values
 * Return: a void
 */
void free_listint2(listint_t **head)
{
listint_t *freeMemo = *head;

if (freeMemo == NULL)
return;
while (freeMemo != NULL)
{
freeMemo = freeMemo->next;
free(freeMemo);
}
free(*head);
*head = NULL;
}

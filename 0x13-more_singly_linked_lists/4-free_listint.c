#include "lists.h"
/**
 * free_listint - this is a function to free
 * @head: this is a pointer
 * Return: return a void
 */
void free_listint(listint_t *head)
{
listint_t *freeMemory;

while (head != NULL)
{
freeMemory = head;
head = head->next;
free(freeMemory);
}
}

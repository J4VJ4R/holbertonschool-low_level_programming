#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: this is a pointer
 * Return: a integer
 */
int pop_listint(listint_t **head)
{
int data; /*guarda el dato de retorno, valor traido en **head*/
listint_t *aux_borrar; /*puntero auxiliar para recorrer la lista*/
aux_borrar = *head; /*apunta a head el primer nodo*/
data = aux_borrar->n; /*se guarda el dato traido por head ne data*/
*head = aux_borrar->next; /*head apunta al siguiente nodo*/
free(aux_borrar); /*elimina el nodo anterior*/
return (data); /*retorna el dato guardado en data*/
}

#include "lists.h"
/**
 * print_listint - this function print a list
 * @h: a pointer that passed a value
 * Return: a size_t type
 */
size_t print_listint(const listint_t *h)
{
    /**
     * Creamos el contador de elementos
     */

unsigned long int i = 0;

    /**
     * validamos si en la dirección que apunta *h contiene
     * algo
     */

while (h != NULL)
{
    /**
    * Printf - si contiene algo entonces mostramos por pantalla
    * los elementos de la lista
    */
printf("%d\n", h->n);
    /**
    * h - guardamos en el head inicial el elemento siguiente que apunta a
    * NULL
    */
h = h->next;
    /**
    * Activamos el contador de elementos
    */
i++;
}
    /**
    * retornamos el contador de elementos de la lista
    */
return (i);
}

#include "lists.h"
/**
 * *get_nodeint_at_index - a function that
 * returns the nth node of a listint_t linkded
 * list
 * @head: a pointer
 * @index: an index
 * Return: an integer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    /*(1)*/
unsigned int numIndex = 0;/*(2)*/
if (head == NULL)/*(3)*/
return (NULL);
    /**
     * Validamos si la lista está vacia.
     * si está vacia entonces,
     * Recorremos la lista nodo por nodo
     * hasta encontrar el número de index que se nos
     * pasa por parámetro
     */
while (head != NULL && numIndex != index)
{
    /**
     * el numIndex aumenta en uno para regresar y
     * poderse comparar a index
     */
numIndex++;
    /**
     * le decimos al head que avance al siguiente
     * nodo y entre nuevamente a este while
     */
head = head->next;
}
    /**
     * ahora validamos si el numIndex es igual al index
     * que viene dado por parametro
     */
if (numIndex == index)
{
    /**
     * al entrar aquí, devolvemos con return
     * el index que nos pasaron por parámetro
     */
return (head);
}
return (NULL);
}
    /**
     * (1)
     * creamos una variable para guardar el número del
     * index y poder comparar
     */

    /**
     * (2)
     * validamos que existan elementos en la lista
     * (head)
     */

    /**
     * (3)
     * Si no existen elementos retornamos
     * NULL
     */

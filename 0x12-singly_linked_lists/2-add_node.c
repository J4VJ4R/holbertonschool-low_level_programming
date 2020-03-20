#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_list - check the code for Holberton School students.
 *  @h: this is a list
 * Return: a size_t
 */
list_t *add_node(list_t **head, const char *str)
{
    unsigned int len = 0;
    list_t *nuevo_nodo, *tmp;
    nuevo_nodo = (list_t *) malloc(sizeof(list_t));

    if (nuevo_nodo != NULL)
    {
        nuevo_nodo->len = len;
        nuevo_nodo->str = strdup(str);
        nuevo_nodo->next = *head;
    }

    if (*head == NULL)
    {
        *head = nuevo_nodo;
    }
    else
    {
        /*agregar el nodo de último*/
        tmp = *head;
        while (tmp->next != NULL)
        {
            /*PROCESO para recorrer la lista*/
            tmp = tmp->next;
        }
        /*cuando lo anterior sea falso nos salimos del while y tendriamos en tmp el último elemento*/
        /*el último nodo de la lista*/
        tmp->next = nuevo_nodo; /*este ya no apuntaría a null sino que va a ser igual al nuevo nodo*/
        /*que nosotros estamos agregando que ya previamente está escrito en la linea 18 y terminemos de*/
        /*enlazar la lista*/
        
    }
    return (nuevo_nodo);
    
}

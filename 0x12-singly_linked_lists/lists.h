#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s/*definimos la estructura*/
{
    char *str; /*primer valor de la estructura tipo char*/
    unsigned int len; /*segundo valor de la estructura tipo unsigned int*/
    struct list_s *next; /*la autoreferenciamos con struct list_s*//*variable apuntador*/
    /**la variable apuntador next de tipo struct list_s nos sirve para unir una estructura
    * de tipo list_s con otra del mismo tipo, este es el vínculo para ver si existe más nodos o más
    * elementos en nuestra lista
    */
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void tortoise(void);
#endif

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int _strlen(const char *s);
/**
 * *add_node - check the code for Holberton School students.
 *  @head: this is a list
 *  @str: this is a list
 * Return: a size_t
 */


list_t *add_node(list_t **head, const char *str)
{
list_t *nuevoPersonaje;

nuevoPersonaje = malloc(sizeof(list_t));
nuevoPersonaje->len = _strlen(str);
nuevoPersonaje->next = *head;
nuevoPersonaje->str = strdup(str);
*head = nuevoPersonaje;
if (head == NULL)
{
*head = nuevoPersonaje;
}
else
{
}
return (nuevoPersonaje);
}
/**
 * _strlen - this a function to counter the characters
 * of the string
 * @s: character pointer
 * Return: return value of i
 */
int _strlen(const char *s)
{
int i;
while (*(s + i))
{
i++;
}
return (i);
}

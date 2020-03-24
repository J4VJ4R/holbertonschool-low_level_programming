#ifndef lists_h
#define lists_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
int n; /* Primer elemento de la lista */
struct listint_s *next;/** Apuntador para saber si ya no hay nada
    * en la lista
    */
} listint_t;
/**
 * print_listint - this a function to print a list
 * @h: this is a element pased for pointer
 * Return: an element size_t
 */
size_t print_listint(const listint_t *h); /* función para imprimir la lista */
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
#endif

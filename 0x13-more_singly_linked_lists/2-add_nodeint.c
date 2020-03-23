#include "lists.h"
/**
 * *add_nodeint - add a new nodo in the list
 * @head: this is a double pointer to simple pointer to
 * a single value
 * @n: this is an integer value
 * Return: a list of values
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    /**
     * declaramos un nuevo nodo para guardar los datos traidos
     */

listint_t *newNumber;

    /**
     * Le asignamos espacio a nuestro newNumber;
     */
newNumber = malloc(sizeof(listint_t));
    /**
     * comprobamos si la memoria fué asignada
     */
if (newNumber != NULL)
{
    /**
    * Si la memoria existe satisfactoriamente entonces llenamos
    * los valores traidos en los campos para los datos creados
    * en la estructura
    */
newNumber->n = n;
    /**
    * Introducimos el nodo siguiente al inicio de la lista en nuestro caso
    * en *head que es la cabeza de los datos, debemos decirle que el campo
    * next, de este newNumber, apunte al inicio de *head
    */
newNumber->next = *head;
    /**
     * en seguida debemos decirle al inicio de la lista, osea a *head
     * que apune al newNumber
     */
*head = newNumber;
    /*(2)*/
}
    /*(1)*/
return (newNumber);
}

/**------ Descripción ------**/

    /**
     * (1)
     * finalmente al hacer los cambios en la lista de numbers,
     *  we remember came it
     * the actual list or atual newNumber in our case with return
     */

    /**
     *  (2)
     * finalmente al hacer los cambios en la lista de numbers,
     *  we remember came it
     * the actual list or atual newNumber in our case with return
     */

#include "lists.h"
/**
 * *add_nodeint_end - this is a function for add a new node at end
 * @head: this is a double pointer
 * @n: this is a integer value
 * Return: a list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{    /*(2)*/
listint_t *newNumber;
listint_t *newNumberAux;
    /*(3)*/
newNumber = malloc(sizeof(listint_t));
    /*(4)*/
if (newNumber != NULL)
{
   /*(5)*/
newNumber->n = n;
/*(6)*/
newNumber->next = NULL;
   /*(7)*/
if (*head == NULL)
{
    /*(8)*/
*head = newNumber;
}
else
{
    /*(9)*/

newNumberAux = *head;
    /*(10)*/
while (newNumberAux->next != NULL)
{
    /*(1)*/
newNumberAux = newNumberAux->next;
}
    /*(11)*/
newNumberAux->next = newNumber;
}
}
    /**
     * retornamos el apuntador *head el cual tiene guardado el dato pasado
     * desde main y apunta a la dirección de memoria donde se están guardando
     * los numbers
     */
return (*head);
}
    /**
     * (1)
     * Se hace referencia al campo next ne newNumberAux porque
     * si se deja solamente newNumber diferente de NULL pues al final
     * estaremos parados sobre NULL y no estaremos en el último newNumber
     * de la lista, por esto se debe ubicar exactamente en newNumberAux
     * donde su campo next sea igual a NULL
     * Mientras esto no se cumpla, el newNumberAuxiliar seguirá
     * saltando de nodo en nodo
     */

    /**
     * (2)
     * declaramos el nuevo nodo
     */

    /**
     * (3)
     * asignar espacio a nuestro newNumber
     */

    /**
     * (4)
     * nos aseguramos de que el espacio anteriormente creado
     * fue asignado
     */

    /**
     * (6)
     * como este nodo lo introduciremos al final de la lista
     * este pasará a ser el último elemento de la lista, y este debe
     * apuntar siempre a NULL
     */

     /**
      * (7)
     * comprobamos si la lista está vacia en nuestro caso es *head
     */

    /**
     * (8)
     * Entonces si la head está vacía, el newNumber que vamos a
     * insertar, en este momento pasará a ser el primer nodo
     * en el *head
     */

    /**
     * (9)
     * se debe crear un newNumber auxiliar osea newNumberAux y decirle a este
     * que guarde lo que está en *head
     */

    /**
     * (10)
     * ahora haremos que newNumberAux salte de newNumber en newNumber
     * hasta que llegue al último
     */

    /**
     * (11)
     * en el momento en que este ciclo termine newNumberAuxiliar guardará
     * el último número de la lista y procederemos a insertar el newNumber
     */

#include "lists.h"
/**
 * listint_len - this is function to count the len of
 * elements
 * @h: pointer to value passed
 * Return: the size_t type
 */

size_t listint_len(const listint_t *h)
{
    /**
     * declaramos una variable de tipo entero para iniciar el
     * contador en 0
     */
unsigned int long contadorElements = 0;
    /**
     * Hacemos un recorrido por la lista con un while contando cada paso
     * y revisando al puntero *h el cual nos indica los valores pasados
     * y guardandolo en contadorElements
     */
while (h != NULL)
{
     /**
      *  Aquí van las acciones que en el presente caso no tenemos
      * pero le pedimos que avance al siguiente nodo
      */
h = h->next;
     /**
      *  y le pedimos que sume en 1 al contador
      */
contadorElements++;

}
    /*finalmente retornamos el contador*/
return (contadorElements);
}

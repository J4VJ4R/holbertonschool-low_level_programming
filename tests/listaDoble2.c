#include <stdio.h>
#include <stdlib.h>

typedef struct _nodo
{
    int dato;
    struct _nodo *siguiente;
    struct _nodo *anterior;
}tipoNodo;

typedef tipoNodo *pNodo;
typedef tipoNodo *List;

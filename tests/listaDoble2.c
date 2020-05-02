#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
    int dato;
    struct nodo *siguiente;
    struct nodo *anterior;
}NODO;

NODO *CrearNodo(int dato);
int InsertarInicio(NODO **cabeza, int dato);

int main(){
    return (0);
}

int InsertarInicio(NODO **cabeza, int dato);
{
    NODO *nuevo = NULL;

    nuevo = CrearNodo(dato);
    if (nuevo != NULL))
    {
        nuevo->siguiente = *cabeza;
        nuevo->anterior = NULL;
    }
    
}
NODO *CrearNodo(int dato)
{
    NODO* nuevo = NULL;
    nuevo = (NODO*)malloc(sizeof(NODO));
    if (nuevo != NULL)
    {
        nuevo->dato = dato;
        nuevo->siguiente = NULL;
        nuevo->anterior = NULL;
    }
    return (nuevo);
    
}

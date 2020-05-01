#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
    int dato;
    struct nodo* siguiente;
    struct nodo* atras;
}nodo;

nodo* primero = NULL;
nodo* ultimo =  NULL;

void insertarNodo();

void desplegarListaPU();
void desplegarListaUP();
int main(){
    return (0);
}

// lista de 13, 16, 2, 9

// primero == 13 ultimo = 9 nuevo = 9

//lista doble ----------- null <- 13 -> <- 16 -> <- 2 -> <- 9 -> NULL
void insertarNodo(){
    nodo* nuevo = (nodo*)malloc(sizeof(nodo));
    printf(" ingresa el dato que contendrá el nuevo nodo: ");
    scanf("%d", &nuevo->dato);

    if(primero == NULL){
        primero = nuevo;
        primero->siguiente = NULL;
        primero->atras = NULL;
        ultimo = primero;
    }else{
        ultimo->siguiente = nuevo;
        nuevo->siguiente = NULL;
        nuevo->atras = ultimo;
        ultimo = nuevo;
    }

    printf("\n Nodo ingresado con éxito\n\n");
}

void desplegarListaPU(){
    nodo* actual = (nodo*)malloc(sizeof(nodo));
    actual = primero;
    if(primero != NULL){
        while (actual != NULL)
        {
            printf("\n %d", actual->dato);
            actual = actual->siguiente;
        }
        
    }else{
        printf("\nlas lista se encuentra vacía\n\n");
    }
}

void desplegarListaUP(){
    nodo* actual = (nodo*)malloc(sizeof(nodo));
    actual = ultimo;
    if(primero != NULL){
        while (actual != NULL)
        {
            printf("\n %d", actual->dato);
            actual = actual->atras;
        }
        
    }else{
        printf("\nlas lista se encuentra vacía\n\n");
    }
}
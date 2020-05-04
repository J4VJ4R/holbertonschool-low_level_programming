#include <stdio.h>
#include <stdlib.h>

void holamundo(){
    printf("hola holberton\n");
}

int suma(int a, int b){
    return (a + b);
}

int main(void)
{
   holamundo();
   int val = suma(1, 2);
   printf("la suma es: %d", val);
    return 0;
}

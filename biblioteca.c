#include "funciones.h"
#include <stdio.h>
#include <string.h>
/*Opción 1: Invertir una cadena ingresada por el usuario. Esta función ya fue vista en clase.*/


void Invertir(char cadena[],int inicio,int longitud){
    char temp;
    int fin = longitud - 1;
    int in = inicio;

    while (in < fin)
    {
        temp = cadena[in];
        cadena[in] = cadena[fin];
        cadena[fin] = temp;
        fin --;
        in ++;
    } 
}


void menu(){
    printf("\nMenu Interactivo\n");
        printf("1. Invertir una cadena\n");
        printf("2. Calcular el factorial de un número\n");
        printf("3. Generar la sucesión de Fibonacci\n");
        printf("4. Salir\n");
        printf("Opción: ");
}


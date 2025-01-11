#include <stdio.h>
#include <string.h>
#include "head.h"

void menu();

int main() {
    menu();
    return 0;
}

void menu() {
    int opcion;
    char cadena[100];
    int numero;

    do {
        printf("\nMenu Interactivo\n");
        printf("1. Invertir una cadena\n");
        printf("2. Calcular el factorial de un número\n");
        printf("3. Generar la sucesión de Fibonacci\n");
        printf("4. Salir\n");
        printf("Opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("Ingrese una cadena: ");
                scanf("%s", cadena);
                invertirCadena(cadena, 0, strlen(cadena) - 1);
                printf("Cadena invertida: %s\n", cadena);
                break;
            case 2:
                printf("Ingrese un número: ");
                scanf("%d", &numero);
                printf("Factorial de %d es: %d\n", numero, factorial(numero));
                break;
            case 3:
                printf("Ingrese el número de términos para la sucesión de Fibonacci: ");
                scanf("%d", &numero);
                printf("Sucesión de Fibonacci: ");
                generarFibonacci(numero, 0, 1);
                printf("\n");
                break;
            case 4:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    } while(opcion != 4);
}

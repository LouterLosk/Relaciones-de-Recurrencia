#include "funciones.h"

int main() 
{
    int opcion;
    char cadena[100];
    int numero;
    int Factorial;
    do {
        menu();
        scanf("%d", &opcion);
        switch(opcion){
                    case 1:
                        printf("Ingrese una cadena: ");
                        scanf("%s", cadena);
                        Invertir(cadena,0,strlen(cadena)-1);
                        printf("Cadena invertida: %s\n", cadena);
                        opcion = 4;
                        break;
                    case 2:
                        do
                        {
                            printf("Ingrese un número: ");
                            scanf("%d", &numero);
                        } while (numero < 0);
                        printf("Factorial de %d es: %d\n", numero, factorial(numero,numero));
                        opcion = 4;
                        break;
                    case 3:
                        do
                        {
                            printf("Ingrese el número hasta el cual calcualar de Fibonacci: ");
                            scanf("%d", &numero);
                        } while (numero < 0);
                        generarFibonacci(numero);
                        opcion = 4;
                        break;
                    case 4:
                        printf("Saliendo...\n");
                        break;
                    default:
                        printf("Opción no válida. Intente de nuevo.\n");
                }  
    } while(opcion != 4);
    return 0;
}
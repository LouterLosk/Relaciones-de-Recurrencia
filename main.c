#include "funciones.h" //sirve para llamar lo que esta en el archivo funciones.h

int main() 
{
    //declaracion de variables
    int opcion;
    char cadena[100];
    int numero;
    int Factorial;
    do {
        menu();
        scanf("%d", &opcion);
        //Eleccion de que se quiere hacer en el codigo
        switch(opcion){
                    case 1:
                        printf("Ingrese una cadena: ");
                        scanf("%s", cadena);
                        Invertir(cadena,0,strlen(cadena));
                        printf("Cadena invertida: %s\n", cadena);
                        opcion = 4;
                        break;
                    case 2:
                        do  //Verificacon de que el dato sea positivo
                        {
                            printf("Ingrese un número: ");
                            scanf("%d", &numero);
                        } while (numero < 0);
                        printf("Factorial de %d es: %d\n", numero, factorial(numero,numero));
                        opcion = 4;
                        break;
                    case 3:
                        do //Verificacon de que el dato sea positivo
                        {
                            printf("Ingrese el número hasta el cual calcualar de Fibonacci: ");
                            scanf("%d", &numero);
                        } while (numero < 0);
                        generarFibonacci(numero);
                        opcion = 4;
                        break;
                    case 4: //Se agrego esta opccion por si no deseas hacer nada
                        printf("Saliendo...\n");
                        break;
                    default:
                        printf("Opción no válida. Intente de nuevo.\n");//Verificacon de que el dato este entre las opciones
                }  
    } while(opcion != 4);
    return 0;
}
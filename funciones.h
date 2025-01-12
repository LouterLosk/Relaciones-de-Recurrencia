#include <stdio.h>
#include <string.h>

void menu();
void menu() // se encarga de presentar el menu
{
    printf("\nMenu Interactivo\n");
        printf("1. Invertir una cadena\n");
        printf("2. Calcular el factorial de un número\n");
        printf("3. Generar la sucesión de Fibonacci\n");
        printf("4. Salir\n");
        printf("Opción: ");
}

//Invertir una cadena ingresada por el usuario.
// Función para invertir una cadena
void Invertir(char cadena[],int inicio,int longitud);
void Invertir(char cadena[], int inicio, int longitud) 
{   
    if (inicio >= longitud - 1){
    return;}
    char temp;
    int fin = longitud - 1;
    temp = cadena[inicio];
    cadena[inicio] = cadena[fin];
    cadena[fin] = temp;
    
    // Se vuelve a llamar a la funcion
    Invertir(cadena, inicio + 1, longitud - 1);
}


//Calcular el factorial de un número entero positivo ingresado por el usuario.
// Función para calcular el factorial de un numero n
int factorial(int n,int i);
int factorial(int n,int i){
    int numero;
    if (i <= 1)
    {
    return n;
    }
    n = n * (i - 1);
    i --;
    return factorial(n,i);
}


//Calcular el factorial de un número entero positivo ingresado por el usuario.
// Función recursiva para calcular el n-ésimo número de Fibonacci
int fibonacci(int n);
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Función para generar la sucesión de Fibonacci hasta n
void generarFibonacci(int n) {
    printf("Sucesión de Fibonacci hasta %d: ", n);
    for (int i = 0; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

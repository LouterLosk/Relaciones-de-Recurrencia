#include <stdio.h>

// Función recursiva para calcular el n-ésimo número de Fibonacci
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

int main() {
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("El número debe ser entero positivo.\n");
    } else {
        generarFibonacci(numero);
    }

    return 0;
}

#include <stdio.h>

// Prototipos
void IMPRIMIR(int matriz[4][3]);
void sumarMatrices(int M1[4][3], int M2[4][3], int resultado[4][3]);

int main() {
    // Matrices base
    int A[4][3] = { // A' * B'
        {1, 1, 1},
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 0}
    };
    int B[4][3] = { // A' * B
        {1, 0, 0},
        {1, 1, 1},
        {0, 0, 0},
        {0, 1, 0}
    };
    int C[4][3] = { // A * B'
        {0, 1, 0},
        {0, 0, 0},
        {1, 1, 1},
        {1, 0, 0}
    };
    int D[4][3] = { // A * B
        {0, 0, 0},
        {0, 1, 0},
        {1, 0, 0},
        {1, 1, 1}
    };

    // Matriz para almacenar el resultado
    int resultado[4][3];

    // Ejemplo: Calcular A * B + A' * B
    sumarMatrices(D, B, resultado);
    printf("Resultado de A * B + A' * B:\n");
    IMPRIMIR(resultado);

    return 0;
}

// Función para sumar dos matrices
void sumarMatrices(int M1[4][3], int M2[4][3], int resultado[4][3]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (j < 2) {
                // Copiar valores de las primeras dos columnas
                resultado[i][j] = M1[i][j];
            } else {
                // Sumar la columna de resultado (s)
                resultado[i][j] = M1[i][j] || M2[i][j]; // OR lógico
            }
        }
    }
}

// Función para imprimir una matriz
void IMPRIMIR(int matriz[4][3]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

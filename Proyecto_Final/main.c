#include "./lib/funciones.h"




int main() {
    int cont [4] ={0};
    int nombre[4][3] = {
        {0,0,0},
        {0,1,0},
        {1,0,0},
        {1,1,1}
    };
    int A[4][3] = { //A'*B'
        {1,1,1},
        {1,0,0},
        {0,1,0},
        {0,0,0}
    };
    int B[4][3] = { //A'*B
        {1,0,0},
        {1,1,1},
        {0,0,0},
        {0,1,0}
    };
    int C[4][3] = { //A*B'
        {0,1,0},
        {0,0,0},
        {1,1,1},
        {1,0,0}
    };
    int D[4][3] = { //A*B
        {0,0,0},
        {0,1,0},
        {1,0,0},
        {1,1,1}
    };
    Matriz1(nombre);
    printf("\n");
    IMPRIMIR(nombre);
    printf("\n");
    imprimirExpresion(nombre, cont);
return 0;
}
    

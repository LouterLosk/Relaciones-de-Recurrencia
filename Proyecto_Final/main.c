#include "./lib/funciones.h"
#include "./lib/Tablas.h"



int main() {
    int variables;
    /*
    printf("Digite el número de variables lógicas, solo 2 o 3:  ");
    scanf("%d",&variables);
if (variables == 2){
        int cont [4] = {0};
        int nombre[4][3] = {
            {0,0,0},
            {0,1,0},
            {1,0,0},
            {1,1,0}
        };
        Matriz1(nombre);
        printf("\n");
        IMPRIMIR(nombre);
        printf("\n");
        imprimirExpresion(nombre, cont);
    }else if (variables == 3)
    {
        int cont [8] = {0};
        int Mat2[8][4] = {
            {0,0,0,0},//0
            {0,0,1,0},//1
            {0,1,0,0},//2
            {0,1,1,0},//3
            {1,0,0,0},//4
            {1,0,1,0},//5
            {1,1,0,0},//6
            {1,1,1,0}//7
        };
        Matriz2(Mat2);
        printf("\n");
        IMPRIMIR2(Mat2);
        printf("\n");
        imprimirExpresion2(Mat2, cont);
    }*/
        int cont [8] = {0};
        int Mat2[8][4] = {
            {0,0,0,0},//0
            {0,0,1,0},//1
            {0,1,0,0},//2
            {0,1,1,0},//3
            {1,0,0,0},//4
            {1,0,1,0},//5
            {1,1,0,0},//6
            {1,1,1,0}//7
        };
        LeerMatriz2(Mat2);
        printf("\n");
        IMPRIMIR2(Mat2);
        printf("\n");
        imprimirExpresion2(Mat2, cont);
    
return 0;
}
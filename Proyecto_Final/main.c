#include "./lib/funciones.h"
#include "./lib/Tablas.h"



int main() {
int seguir = 1;

    
    while (seguir){
      int variables;
    printf("MATEMATICAS DISCRETAS 1\n");
    printf("Ethan Flores y Miguel Ruales\n");
    printf("En este programa se calcula la expresion booleana con 2 o 3 variables\n");
    printf("2024/25\n");
    do
    {
        printf("Digite el numero de variables logicas, solo 2 o 3:  ");
        scanf("%d",&variables); 
    } while (variables !=2 && variables !=3);
    
  
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
        imprimir(nombre);
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
        LeerMatriz2(Mat2);
        printf("\n");
        imprimir2(Mat2);
        printf("\n");
        imprimirExpresion2(Mat2, cont);
    
    } 
    do
    {
      printf("Quire calcular otra vez?\n");
      printf("Si 1");
      printf("   No 0\n");
     scanf("%d",&seguir);  
    } while (seguir !=1 && seguir !=0);
    printf("Saliendo....");
}   
return 0;
}
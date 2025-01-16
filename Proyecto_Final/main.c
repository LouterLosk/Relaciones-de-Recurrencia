#include "funciones.h"



int main() {
    int nombre[4][3] = {
        {0,0,0},
        {0,1,0},
        {1,0,0},
        {1,1,0}
    };
    Matriz1(nombre);

    char cadena[6];
        if(nombre[0][2] == 1){ 
            printf("A'*B'\n"); 
            sprintf(cadena, "A'*B'"); 
            printf("%s\n", cadena); 
            }  

        if(nombre[1][2] == 1){   
        printf("A'*B");
        char cadena[] = "A'*B";
        printf(" %c",cadena);
        }  
        if(nombre[2][2] == 1){
        printf("A*B'");
        } 
        if(nombre[3][2] == 1){
        printf("A*B\n");
        }   
    
    
    


    printf("\n");
    IMPRIMIR(nombre);
    return 0;
}


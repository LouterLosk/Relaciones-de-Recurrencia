#include <stdio.h>
#include <string.h>
#define RESET "\033[0m"         // Restablece colores
#define GREEN "\033[32m"
#define RED "\033[31m"          // Texto rojo

   
// Prototipos de las funciones
void Matriz1(int nombre[4][3]);
void imprimirExpresion(int nombre[4][3], int *cont);
void IMPRIMIR(int matriz[4][3]);
int selccion(int Contador[4], int term);
void remplazar2(int matriz1[4][3], int matriz2[4][3]);
void remplazar3(int matriz1[4][3], int matriz2[4][3],int matriz3[4][3]);
void remplazar4(int matriz1[4][3], int matriz2[4][3],int matriz3[4][3],int matriz4[4][3]);



void IMPRIMIR(int matriz[4][3]) {
    int j;
    printf("a b s\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        if(matriz[i][2] == 1){
                printf(GREEN"1 "RESET);
            }else{
                printf(RED"0 "RESET);
            }
        printf("\n");
    }   
}

void Matriz1(int nombre[4][3]){
    // nombre[Fila][Columna]
    int S;    
    // Imprimir todo el arreglo
    printf("Imprimiendo el arreglo:\n");
    int i,j;
    do
    {
        printf("a b s\n");
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 2; j++) {
                printf("%d ", nombre[i][j]);
            }
        scanf("%d",&S);
        nombre[i][2] = S;  
        if (S != 0 && S != 1)
        {
            printf("No puede ingresar un valor diferente a 1 y 0");
            printf("\n");
            i = -1;
            j = 0;
            printf("a b s\n");
        }
    }
    }while (S != 0 && S != 1);
   }

void imprimirExpresion(int nombre[4][3], int *cont) {
    int firstTerm = 1;
    int term = 0;
    if (nombre[0][2] == 1) {
        printf("A'*B'");
        firstTerm = 0;
        cont[0] = 1;
        term++;
    }
    if (nombre[1][2] == 1) {
        if (!firstTerm) {
            printf(" + ");
        }
        printf("A'*B");
        firstTerm = 0;
        cont[1] = 1;
        term++;
    }
    if (nombre[2][2] == 1) {
        if (!firstTerm) {
            printf(" + ");
        }
        printf("A*B'");
        firstTerm = 0;
        cont[2] = 1;
        term++;
    }
    if (nombre[3][2] == 1) {
        if (!firstTerm) {
            printf(" + ");
        }
        printf("A*B");
        cont[3] = 1;
        term++;
    }
    printf("\n");
    selccion(cont, term);
}

int selccion(int Contador[4], int term) {
    int A[4][3] = {
        {1, 1, 1},
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 0}
    };
    int B[4][3] = {
        {1, 0, 0},
        {1, 1, 1},
        {0, 0, 0},
        {0, 1, 0}
    };
    int C[4][3] = {
        {0, 1, 0},
        {0, 0, 0},
        {1, 1, 1},
        {1, 0, 0}
    };
    int D[4][3] = {
        {0, 0, 0},
        {0, 1, 0},
        {1, 0, 0},
        {1, 1, 1}
    };

    if (Contador[0] == 1 && term == 1) {
        printf("Seleccionaste A'*B':\n");
        IMPRIMIR(A);
    }
     if (Contador[1] == 1 && term == 1) {
        printf("Seleccionaste A'*B:\n");
        IMPRIMIR(B);
    }
    if (Contador[2] == 1 && term == 1) {
        printf("Seleccionaste A*B':\n");
        IMPRIMIR(C);
    }
    if (Contador[3] == 1 && term == 1) {
        printf("Seleccionaste A*B:\n");
        IMPRIMIR(D);

    }
    //Dos terminos
    if (Contador[0] == 1 && Contador[1]== 1 && term == 2){
        printf("Seleccionaste A'*B' + A'*B:\n");
        remplazar2(A,B);
    }
     if (Contador[0] == 1 && Contador[2]== 1 && term == 2){
        printf("Seleccionaste A'*B' + A*B':\n");
        remplazar2(A,C);
    }
     if (Contador[0] == 1 && Contador[3]== 1 && term == 2){
        printf("Seleccionaste A'*B' + A*B:\n");
        remplazar2(A,D);
    }
     if (Contador[1] == 1 && Contador[2]== 1 && term == 2){
        printf("Seleccionaste A'*B + A*B':\n");
        remplazar2(B,C);
    }
     if (Contador[1] == 1 && Contador[3]== 1 && term == 2){
        printf("Seleccionaste A'*B + A*B:\n");
        remplazar2(B,D);
    }
    if (Contador[2] == 1 && Contador[3]== 1 && term == 2){
        printf("Seleccionaste A*B' + A*B:\n");
        remplazar2(C,D);
    }
    
    //Tres terminos
    if (Contador[0] == 1 && Contador[1]== 1 && Contador[2]== 1 && term == 3){
        printf("Seleccionaste A'*B' + A'*B + A*B':\n");
        remplazar3(A,B,C);
    }
    if (Contador[0] == 1 && Contador[1]== 1 && Contador[3]== 1 && term == 3){
        printf("Seleccionaste A'*B' + A'*B + A*B:\n");
        remplazar3(A,B,D);
    }
    if (Contador[0] == 1 && Contador[2]== 1 && Contador[3]== 1 && term == 3){
        printf("Seleccionaste A'*B' + A*B' + A*B:\n");
        remplazar3(A,C,D);
    }
    if (Contador[1] == 1 && Contador[2]== 1 && Contador[3]== 1 && term == 3){
        printf("Seleccionaste A'*B + A*B' + A*B:\n");
        remplazar3(B,C,D);
    }

    //cuatro terminos
    if (Contador[0] == 1 && Contador[1]== 1 && Contador[2]== 1 && Contador[3]== 1 && term == 4){
        printf("Seleccionaste A'*B' + A'*B + A*B' + A*B:\n");
        remplazar4(A,B,C,D);
    }
return 0;
}

void remplazar2(int matriz1[4][3], int matriz2[4][3]){
int matriz[4][6]= {0};
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0; j < 2; j ++){
            printf("%d ", matriz1[i][j]);
        }
            printf(GREEN "%d"RESET , matriz1[i][2]);
            //Resultado
            printf("        ");
            if(matriz1[i][2] || matriz2[i][2]){
                printf(RED"1 "RESET);
            }else{
                printf(RED"0 "RESET);
            }
            printf("        ");
        //matriz 2
        for(int h = 0; h < 2; h ++){
            printf("%d ", matriz2[i][h]);
        }
            printf(GREEN "%d"RESET , matriz2[i][2]);
            printf("\n");   
    }
}

void remplazar3(int matriz1[4][3], int matriz2[4][3],int matriz3[4][3]){
    for(int i = 0 ; i < 4 ; i++){
        printf("(");
        //Matriz 1
        for(int j = 0; j < 2; j ++){
            printf("%d ", matriz1[i][j]);
        }
            printf(GREEN "%d"RESET , matriz1[i][2]);
            //Resultado
            printf("        ");
            if(matriz1[i][2] || matriz2[i][2]){
                printf(RED"1 "RESET);
            }else{
                printf(RED"0 "RESET);
            }
            printf("        ");
        //matriz 2
        for(int h = 0; h < 2; h ++){
            printf("%d ", matriz2[i][h]);
        }
            printf(GREEN "%d"RESET , matriz2[i][2]);
            printf(")"); 
        printf("        ");
            if((matriz1[i][2] || matriz2[i][2])||matriz3[i][2] == 1){
                printf(RED"1 "RESET);
            }else{
                printf(RED"0 "RESET);
            }
            printf("        ");

        //matriz 3
        for(int h = 0; h < 2; h ++){
            printf("%d ", matriz3[i][h]);
        }
            printf(GREEN "%d"RESET , matriz3[i][2]);
            printf("\n");  

    }
}

void remplazar4(int matriz1[4][3], int matriz2[4][3],int matriz3[4][3],int matriz4[4][3]){
int matriz[4][6]= {0};
    for(int i = 0 ; i < 4 ; i++){
        printf("("); 
        //Matriz 1
        for(int j = 0; j < 2; j ++){
            printf("%d ", matriz1[i][j]);
        }
            printf(GREEN "%d"RESET , matriz1[i][2]);
            //Resultado
            printf("        ");
            if(matriz1[i][2] || matriz2[i][2]){
                printf(RED"1 "RESET);
            }else{
                printf(RED"0 "RESET);
            }
            printf("        ");
        //matriz 2
        for(int h = 0; h < 2; h ++){
            printf("%d ", matriz2[i][h]);
        }
            printf(GREEN "%d"RESET , matriz2[i][2]);
            printf(")"); 
        //Resultado final
            printf("        ");
            if((matriz1[i][2] || matriz2[i][2])||(matriz3[i][2] || matriz4[i][2])){
                printf(RED"1 "RESET);
            }else{
                printf(RED"0 "RESET);
            }
            printf("        ");
        printf("(");
        //Matriz 3
        for(int j = 0; j < 2; j ++){
            printf("%d ", matriz3[i][j]);
        }
            printf(GREEN "%d"RESET , matriz3[i][2]);
            //Resultado
            printf("        ");
        if(matriz3[i][2] || matriz4[i][2]){
            printf(RED"1 "RESET);
        }else{
            printf(RED"0 "RESET);
        }
            printf("        ");
        //matriz 2
        for(int h = 0; h < 2; h ++){
            printf("%d ", matriz4[i][h]);
        }
            printf(GREEN "%d"RESET , matriz4[i][2]);
            printf(")"); 
            printf("\n");   

    }
}



   
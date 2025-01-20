#include <stdio.h>
#include <string.h>
#define RESET "\033[0m"         // Restablece colores
#define RED "\033[31m"          // Texto rojo
#define GREEN "\033[32m"        // Texto verde
#define YELLOW "\033[33m"       // Texto amarillo
#define BLUE "\033[34m"         // Texto azul
#define MAGENTA "\033[35m"      // Texto magenta
#define CYAN "\033[36m"         // Texto cian

//Calculo con tres variables 

void LeerMatriz2(int nombre[8][4]);  
void imprimir2(int matriz[8][4]);
void imprimirExpresion2(int nombre[8][4], int *cont);
void mat2(int matriz1[8][4], int matriz2[8][4]);
void mat3(int matriz1[8][4], int matriz2[8][4],int matriz3[8][4]);
void mat4(int matriz1[8][4], int matriz2[8][4],int matriz3[8][4],int matriz4[8][4]);
void mat5(int matriz1[8][4], int matriz2[8][4],int matriz3[8][4],int matriz4[8][4],int matriz5[8][4]);
void mat6(int matriz1[8][4], int matriz2[8][4],int matriz3[8][4],int matriz4[8][4],int matriz5[8][4],int matriz6[8][4]);
void mat7(int matriz1[8][4], int matriz2[8][4],int matriz3[8][4],int matriz4[8][4],int matriz5[8][4],int matriz6[8][4],int matriz7[8][4]);
void mat8(int matriz1[8][4], int matriz2[8][4],int matriz3[8][4],int matriz4[8][4],int matriz5[8][4],int matriz6[8][4],int matriz7[8][4],int matriz8[8][4]);
int selccion2(int Contador[8], int term); 
void m(int i ,int matriz1[8][4]);
void r(int i,int matriz1[8][4], int matriz2[8][4]);

void imprimir2(int matriz[8][4]){
    int j;
    printf("a b c s\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        if(matriz[i][3] == 1){
                printf(GREEN"1 "RESET);
            }else{
                printf(RED"0 "RESET);
            }
        printf("\n");
    }   
}

void LeerMatriz2(int nombre[8][4]){
    // nombre[Fila][Columna]
    int S;    
    // Imprimir todo el arreglo
    printf("Imprimiendo el arreglo:\n");
    int i,j;
    do
    {
        printf("a b c s\n");
        for (i = 0; i < 8; i++) {
            for (j = 0; j < 3; j++) {
                printf("%d ", nombre[i][j]);
            }
        scanf("%d",&S);
        nombre[i][3] = S;  
        if (S != 0 && S != 1)
        {
            printf("No puede ingresar un valor diferente a 1 y 0");
            printf("\n");
            i = 0;
            j = 0;
            printf("a b c s\n");
        }
    }
    }while (S != 0 && S != 1);
   }

void imprimirExpresion2(int nombre[8][4], int *cont) {
    int termino = 1;
    int term = 0;
    if (nombre[0][3] == 1) {
        printf("A'*B'*C'");//0
        termino = 0;
        cont[0] = 1;
        term++;
    }
    if (nombre[1][3] == 1) {
        if (!termino) {
            printf(" + ");
        }
        printf("A'*B'*C");//1
        termino = 0;
        cont[1] = 1;
        term++;
    }
    if (nombre[2][3] == 1) {
        if (!termino) {
            printf(" + ");
        }
        printf("A'*B*C'");//2
        termino = 0;
        cont[2] = 1;
        term++;
    }
    if (nombre[3][3] == 1) {
        if (!termino) {
            printf(" + ");
        }
        printf("A'*B*C");//3
        cont[3] = 1;
        term++;
    }
    if (nombre[4][3] == 1) {
        if (!termino) {
            printf(" + ");
        }
        printf("A*B'*C'");//4
        termino = 0;
        cont[4] = 1;
        term++;
    }
    if (nombre[5][3] == 1) {
        if (!termino) {
            printf(" + ");
        }
        printf("A*B'*C");//5
        termino = 0;
        cont[5] = 1;
        term++;
    }
    if (nombre[6][3] == 1) {
        if (!termino) {
            printf(" + ");
        }
        printf("A*B*C'");//6
        termino = 0;
        cont[6] = 1;
        term++;
    }
    if (nombre[7][3] == 1) {
        if (!termino) {
            printf(" + ");
        }
        printf("A*B*C");//7
        cont[7] = 1;
        term++;
    }
    printf("\n");
    selccion2(cont, term);
}

int selccion2(int Contador[8], int term) {
    int matrices[8][8][4] = {
        {{1,1,1,1}, {1,1,0,0}, {1,0,1,0}, {1,0,0,0}, {0,1,1,0}, {0,1,0,0}, {0,0,1,0}, {0,0,0,0}}, // A
        {{1,1,0,0}, {1,1,1,1}, {1,0,0,0}, {1,0,1,0}, {0,1,0,0}, {0,1,1,0}, {0,0,0,0}, {0,0,1,0}}, // B
        {{1,0,1,0}, {1,0,0,0}, {1,1,1,1}, {1,1,0,0}, {0,0,1,0}, {0,0,0,0}, {0,1,1,0}, {0,1,0,0}}, // C
        {{1,0,0,0}, {1,0,1,0}, {1,1,0,0}, {1,1,1,1}, {0,0,0,0}, {0,0,1,0}, {0,1,0,0}, {0,1,1,0}}, // D
        {{0,1,1,0}, {0,1,0,0}, {0,0,1,0}, {0,0,0,0}, {1,1,1,1}, {1,1,0,0}, {1,0,1,0}, {1,0,0,0}}, // E
        {{0,1,0,0}, {0,1,1,0}, {0,0,0,0}, {0,0,1,0}, {1,1,0,0}, {1,1,1,1}, {1,0,0,0}, {1,0,1,0}}, // F
        {{0,0,1,0}, {0,0,0,0}, {0,1,1,1}, {0,1,0,0}, {1,0,1,0}, {1,0,0,0}, {1,1,1,1}, {1,1,0,0}}, // G
        {{0,0,0,0}, {0,0,1,0}, {0,1,0,0}, {0,1,1,0}, {1,0,0,0}, {1,0,1,0}, {1,1,0,0}, {1,1,1,1}}  // H
    };

    for (int i = 0; i < 8; i++) {
        if (Contador[i] == 1 && term == 1) {
            imprimir2(matrices[i]);
        }
    }

    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (Contador[i] == 1 && Contador[j] == 1 && term == 2) {
                mat2(matrices[i], matrices[j]);
            }
            for (int k = j + 1; k < 8; k++) {
                if (Contador[i] == 1 && Contador[j] == 1 && Contador[k] == 1 && term == 3) {
                    mat3(matrices[i], matrices[j], matrices[k]);
                }
                for (int l = k + 1; l < 8; l++) {
                    if (Contador[i] == 1 && Contador[j] == 1 && Contador[k] == 1 && Contador[l] == 1 && term == 4) {
                        mat4(matrices[i], matrices[j], matrices[k], matrices[l]);
                    }
                    for (int m = l + 1; m < 8; m++) {
                        if (Contador[i] == 1 && Contador[j] == 1 && Contador[k] == 1 && Contador[l] == 1 && Contador[m] == 1 && term == 5) {
                            mat5(matrices[i], matrices[j], matrices[k], matrices[l], matrices[m]);
                        }
                        for (int n = m + 1; n < 8; n++) {
                            if (Contador[i] == 1 && Contador[j] == 1 && Contador[k] == 1 && Contador[l] == 1 && Contador[m] == 1 && Contador[n] == 1 && term == 6) {
                                mat6(matrices[i], matrices[j], matrices[k], matrices[l], matrices[m], matrices[n]);
                            }
                            for (int o = n + 1; o < 8; o++) {
                                if (Contador[i] == 1 && Contador[j] == 1 && Contador[k] == 1 && Contador[l] == 1 && Contador[m] == 1 && Contador[n] == 1 && Contador[o] == 1 && term == 7) {
                                    mat7(matrices[i], matrices[j], matrices[k], matrices[l], matrices[m], matrices[n], matrices[o]);
                                }
                                for (int p = o + 1; p < 8; p++) {
                                    if (Contador[i] == 1 && Contador[j] == 1 && Contador[k] == 1 && Contador[l] == 1 && Contador[m] == 1 && Contador[n] == 1 && Contador[o] == 1 && Contador[p] == 1 && term == 8) {
                                        mat8(matrices[i], matrices[j], matrices[k], matrices[l], matrices[m], matrices[n], matrices[o], matrices[p]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}

void m(int i ,int matriz1[8][4]){
    for(int j = 0; j < 3; j ++){
            printf("%d ", matriz1[i][j]);
        }
            printf(GREEN "%d"RESET , matriz1[i][3]);
}

void r(int i,int matriz1[8][4], int matriz2[8][4]){
    if(matriz1[i][3] || matriz2[i][3]){
                printf(RED"1 "RESET);
            }else{
                printf(RED"0 "RESET);
            }
            printf("        ");
}
    
void mat2(int matriz1[8][4], int matriz2[8][4]){
int matriz[4][6]= {0};
    for(int i = 0 ; i < 8 ; i++){
            m(i,matriz1);
            //Resultado
            printf("        ");
            r(i,matriz1,matriz2);
        //matriz 2
            m(i,matriz2);
            printf("\n");   
    }
}

void mat3(int matriz1[8][4], int matriz2[8][4],int matriz3[8][4]){
    for(int i = 0 ; i < 8 ; i++){
        printf("(");
        //Matriz 1
            m(i,matriz1);
            //Resultado
            printf("        ");
            r(i,matriz1,matriz2);
        //matriz 2
            m(i,matriz2);
            printf(")"); 
            printf("        ");
            if((matriz1[i][3] || matriz2[i][3])||matriz3[i][3] == 1){
                printf(RED"1 "RESET);
            }else{
                printf(RED"0 "RESET);
            }
            printf("        ");

        //matriz 3
            m(i,matriz3);
            printf("\n");  

    }
}

void mat4(int matriz1[8][4], int matriz2[8][4],int matriz3[8][4],int matriz4[8][4]){
    for(int i = 0 ; i < 8 ; i++){ 
        //Matriz 1
        printf("(");
        m(i,matriz1);
        printf("        ");
        //resultado 1,2
        r(i, matriz1, matriz2);
        //matriz 2
        m(i,matriz2);
        printf(")");
        printf("        ");
        //Resultado final
        if((matriz1[i][3] || matriz2[i][3])||(matriz3[i][3] || matriz4[i][3])){
            printf(RED"1 "RESET);
        }else{
            printf(RED"0 "RESET);
        }
        printf("        ");
        printf("(");
        //Matriz 3
        m(i,matriz3);
            //Resultado
            printf("        ");
        r(i, matriz3, matriz4);    
        //matriz 4
        m(i,matriz4);
            printf(")"); 
            printf("\n");   

    }
}

void mat5(int matriz1[8][4], int matriz2[8][4],int matriz3[8][4],int matriz4[8][4],int matriz5[8][4]){
    for(int i = 0 ; i < 8 ; i++){ 
        //Matriz 1
        printf("(");
        printf("(");
        m(i,matriz1);
        printf("        ");
        //resultado 1,2
        r(i, matriz1, matriz2);
        //matriz 2
        m(i,matriz2);
        printf(")");
        printf("        ");
        //Resultado final
        if((matriz1[i][3] || matriz2[i][3])||(matriz3[i][3] || matriz4[i][3])){
            printf(RED"1 "RESET);
        }else{
            printf(RED"0 "RESET);
        }
        printf("        ");
        printf("(");
        //Matriz 3
        m(i,matriz3);
            //Resultado
            printf("        ");
        r(i, matriz3, matriz4);    
        //matriz 4
        m(i,matriz4);
        printf(")");
        printf(")"); 
        printf("        ");
        //resultado  
        if(((matriz1[i][3] || matriz2[i][3])||(matriz3[i][3] || matriz4[i][3]))||matriz5[i][3]){
            printf(MAGENTA"1 "RESET);
        }else{
            printf(MAGENTA"0 "RESET);
        } 
        printf("        ");
        m(i,matriz5); 
        printf("\n");
    }
}

void mat6(int matriz1[8][4], int matriz2[8][4],int matriz3[8][4],int matriz4[8][4],int matriz5[8][4],int matriz6[8][4]){
    for(int i = 0 ; i < 8 ; i++){ 
        //Matriz 1
        printf("(");
        m(i,matriz1);
        printf("        ");
        //resultado
        r(i,matriz1,matriz2);
        //matriz 2
        m(i,matriz2);
        printf(")"); 
        printf("        ");
        if((matriz1[i][3] || matriz2[i][3])||(matriz3[i][3] || matriz4[i][3])){
                printf(CYAN"1 "RESET);
            }else{
                printf(CYAN"0 "RESET);
            } 
            printf("        ");
        //Matriz 3
        printf("(");
        m(i,matriz3);
        printf("        ");
        //resultado
        r(i,matriz3,matriz4);
        //matriz 4
        m(i,matriz4);
        printf(")"); 
        printf("        ");
        //RESULTADO FINAL
        if(((matriz1[i][3] || matriz2[i][3])||(matriz3[i][3] || matriz4[i][3]))|| (matriz5[i][3]||matriz6[i][3])){
                printf(MAGENTA"1 "RESET);
            }else{
                printf(MAGENTA"0 "RESET);
            } 
            printf("        ");
            //MATRIZ 5
            printf("(");
            m(i,matriz5);
            printf("        ");
            //resultado
            r(i,matriz5,matriz6);
            //matriz 4
            m(i,matriz6);
            printf(")"); 
        printf("\n");
    }
}

void mat7(int matriz1[8][4], int matriz2[8][4],int matriz3[8][4],int matriz4[8][4],int matriz5[8][4],int matriz6[8][4],int matriz7[8][4]){
    for(int i = 0 ; i < 8 ; i++){ 
        //Matriz 1
        printf("(");
        printf("(");
        m(i,matriz1);
        printf("        ");
        //resultado 1,2
        r(i, matriz1, matriz2);
        //matriz 2
        m(i,matriz2);
        printf(")");
        printf("        ");
        //Resultado final 12 34
        if((matriz1[i][3] || matriz2[i][3])||(matriz3[i][3] || matriz4[i][3])){
            printf(CYAN"1 "RESET);
        }else{
            printf(CYAN"0 "RESET);
        }
        printf("        ");
        printf("(");
        //Matriz 3
        m(i,matriz3);
            //Resultado
        printf("        ");
        r(i, matriz3, matriz4);    
        //matriz 4
        m(i,matriz4);
        printf(")"); 
        printf(")"); 
        printf("        ");
        if(matriz1[i][3]||matriz2[i][3]||matriz3[i][3]||matriz4[i][3] || matriz5[i][3]||matriz6[i][3] ||matriz7[i][3]){
            printf(MAGENTA"1 "RESET);
        }else{
            printf(MAGENTA"0 "RESET);
        }
        printf("        ");
        printf("(");
        printf("(");
        //Matriz 5
        m(i,matriz5);
        //Resultado
        printf("        ");
        r(i, matriz5, matriz6);    
        //matriz 6
        m(i,matriz6);
            printf(")");
         printf("        ");
        if((matriz5[i][3] || matriz6[i][3])||matriz7[i][3] ){
            printf(CYAN"1 "RESET);
        }else{
            printf(CYAN"0 "RESET);
        }
        printf("        ");
        //Matriz 7
        m(i,matriz7);
        printf(")");
            printf("\n");  

    }
}

void mat8(int matriz1[8][4], int matriz2[8][4],int matriz3[8][4],int matriz4[8][4],int matriz5[8][4],int matriz6[8][4],int matriz7[8][4],int matriz8[8][4]){
    for(int i = 0 ; i < 8 ; i++){ 
        //Matriz 1
        printf("(");
        printf("(");
        m(i,matriz1);
        printf("        ");
        //resultado 1,2
        r(i, matriz1, matriz2);
        //matriz 2
        m(i,matriz2);
        printf(")");
        printf("        ");
        //Resultado final 12 34
        if(matriz1[i][3] || matriz2[i][3]||matriz3[i][3] || matriz4[i][3]){
            printf(CYAN"1 "RESET);
        }else{
            printf(CYAN"0 "RESET);
        }
        printf("        ");
        printf("(");
        //Matriz 3
        m(i,matriz3);
            //Resultado
        printf("        ");
        r(i, matriz3, matriz4);    
        //matriz 4
        m(i,matriz4);
        printf(")"); 
        printf(")"); 
        printf("        ");
        if(matriz1[i][3]||matriz2[i][3]||matriz3[i][3]||matriz4[i][3] || matriz5[i][3]||matriz6[i][3] ||matriz7[i][3]||matriz8[i][3]){
            printf(MAGENTA"1 "RESET);
        }else{
            printf(MAGENTA"0 "RESET);
        }
        printf("        ");
        printf("(");
        printf("(");
        //Matriz 5
        m(i,matriz5);
        //Resultado
        printf("        ");
        r(i, matriz5, matriz6);    
        //matriz 6
        m(i,matriz6);
        printf(")");
        printf("        ");
        if((matriz5[i][3] || matriz6[i][3])||matriz7[i][3] ||matriz8[i][3]){
            printf(CYAN"1 "RESET);
        }else{
            printf(CYAN"0 "RESET);
        }
        printf("        ");
        printf("(");
        //Matriz 7
        m(i,matriz7);
        printf("        ");
        r(i,matriz7,matriz8);
        //Matriz 8
        m(i,matriz8);
        printf(")");
        printf(")");
            printf("\n");  

    }
}


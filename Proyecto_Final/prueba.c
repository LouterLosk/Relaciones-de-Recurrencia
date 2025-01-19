#include <stdio.h>

void IMPRIMIR2(int matriz[8][4]);
void mat2(int matriz1[8][4], int matriz2[8][4]);
void mat3(int matriz1[8][4], int matriz2[8][4], int matriz3[8][4]);
void mat4(int matriz1[8][4], int matriz2[8][4], int matriz3[8][4], int matriz4[8][4]);
void mat5(int matriz1[8][4], int matriz2[8][4], int matriz3[8][4], int matriz4[8][4], int matriz5[8][4]);
void mat6(int matriz1[8][4], int matriz2[8][4], int matriz3[8][4], int matriz4[8][4], int matriz5[8][4], int matriz6[8][4]);
void mat7(int matriz1[8][4], int matriz2[8][4], int matriz3[8][4], int matriz4[8][4], int matriz5[8][4], int matriz6[8][4], int matriz7[8][4]);
void mat8(int matriz1[8][4], int matriz2[8][4], int matriz3[8][4], int matriz4[8][4], int matriz5[8][4], int matriz6[8][4], int matriz7[8][4], int matriz8[8][4]);

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
            IMPRIMIR2(matrices[i]);
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



int selccion2(int Contador[8],int term){
    //A'*B'*C'
    int A[8][4] = {
        {1,1,1,1},//0
        {1,1,0,0},//1
        {1,0,1,0},//2
        {1,0,0,0},//3
        {0,1,1,0},//4
        {0,1,0,0},//5
        {0,0,1,0},//6
        {0,0,0,0}//7
        };
    //A'*B'*C
    int B[8][4] = {
        {1,1,0,0},//0
        {1,1,1,1},//1
        {1,0,0,0},//2
        {1,0,1,0},//3
        {0,1,0,0},//4
        {0,1,1,0},//5
        {0,0,0,0},//6
        {0,0,1,0}//7
        };
    //A'*B*C'
   int C[8][4] = {
        {1,0,1,0},//0
        {1,0,0,0},//1
        {1,1,1,1},//2
        {1,1,0,0},//3
        {0,0,1,0},//4
        {0,0,0,0},//5
        {0,1,1,0},//6
        {0,1,0,0}//7
        };
    //A'*B*C
    int D[8][4] = {
        {1,0,0,0},//0
        {1,0,1,0},//1
        {1,1,0,0},//2
        {1,1,1,1},//3
        {0,0,0,0},//4
        {0,0,1,0},//5
        {0,1,0,0},//6
        {0,1,1,0}//7
        };
    //A*B'*C'
    int E[8][4] = {
        {0,1,1,0},//0
        {0,1,0,0},//1
        {0,0,1,0},//2
        {0,0,0,0},//3
        {1,1,1,1},//4
        {1,1,0,0},//5
        {1,0,1,0},//6
        {1,0,0,0}//7
        };
    //A*B'*C
    int F[8][4] = {
        {0,1,0,0},//0
        {0,1,1,0},//1
        {0,0,0,0},//2
        {0,0,1,0},//3
        {1,1,0,0},//4
        {1,1,1,1},//5
        {1,0,0,0},//6
        {1,0,1,0}//7
        };
    //A*B*C'
    int G[8][4] = {
        {0,0,1,0},//0
        {0,0,0,0},//1
        {0,1,1,1},//2
        {0,1,0,0},//3
        {1,0,1,0},//4
        {1,0,0,0},//5
        {1,1,1,1},//6
        {1,1,0,0}//7
        };
    //A*B*C
    int H[8][4] = {
        {0,0,0,0},//0
        {0,0,1,0},//1
        {0,1,0,0},//2
        {0,1,1,0},//3
        {1,0,0,0},//4
        {1,0,1,0},//5
        {1,1,0,0},//6
        {1,1,1,1}//7
        };

    if (Contador[0] == 1 && term == 1) {
        IMPRIMIR2(A);
    }
     if (Contador[1] == 1 && term == 1) {
        IMPRIMIR2(B);
    }
    if (Contador[2] == 1 && term == 1) {
        IMPRIMIR2(C);
    }
    if (Contador[3] == 1 && term == 1) {

        IMPRIMIR2(D);
    if (Contador[4] == 1 && term == 1) {
        IMPRIMIR2(E);
    }
     if (Contador[5] == 1 && term == 1) {
        IMPRIMIR2(F);
    }
    if (Contador[6] == 1 && term == 1) {
        IMPRIMIR2(G);
    }
    if (Contador[7] == 1 && term == 1) {
        IMPRIMIR2(H);

    }
    //Dos terminos
    //0
    if (Contador[0] == 1 && Contador[1]== 1 && term == 2){
        mat2(A,B);
    }
    if (Contador[0] == 1 && Contador[2]== 1 && term == 2){
        mat2(A,C);
    }
    if (Contador[0] == 1 && Contador[3]== 1 && term == 2){
        mat2(A,D);
    }
    if (Contador[0] == 1 && Contador[4]== 1 && term == 2){
        mat2(A,E);
    }
    if (Contador[0] == 1 && Contador[5]== 1 && term == 2){
        mat2(A,F);
    }
    if (Contador[0] == 1 && Contador[6]== 1 && term == 2){
        mat2(A,G);
    }
    if (Contador[0] == 1 && Contador[7]== 1 && term == 2){
        mat2(A,H);
    }
    //1
    if (Contador[1] == 1 && Contador[2]== 1 && term == 2){
        mat2(B,C);
    }
     if (Contador[1] == 1 && Contador[3]== 1 && term == 2){
        mat2(B,D);
    }
    if (Contador[1] == 1 && Contador[4]== 1 && term == 2){
        mat2(B,E);
    }
      if (Contador[1] == 1 && Contador[5]== 1 && term == 2){
        mat2(B,F);
    }
     if (Contador[1] == 1 && Contador[6]== 1 && term == 2){
        mat2(B,G);
    }
    if (Contador[1] == 1 && Contador[7]== 1 && term == 2){
        mat2(B,H);
    }
    //2
    if (Contador[2] == 1 && Contador[3]== 1 && term == 2){
        mat2(C,D);
    }
    if (Contador[2] == 1 && Contador[4]== 1 && term == 2){
        mat2(C,E);
    }
    if (Contador[2] == 1 && Contador[5]== 1 && term == 2){
        mat2(C,F);
    }
    if (Contador[2] == 1 && Contador[6]== 1 && term == 2){
        mat2(C,G);
    }
    if (Contador[2] == 1 && Contador[7]== 1 && term == 2){
        mat2(C,H);
    //3
    if (Contador[3] == 1 && Contador[4]== 1 && term == 2){
        mat2(C,E);
    }
    if (Contador[3] == 1 && Contador[5]== 1 && term == 2){
        mat2(C,F);
    }
    if (Contador[3] == 1 && Contador[6]== 1 && term == 2){
        mat2(C,G);
    }
    if (Contador[3] == 1 && Contador[7]== 1 && term == 2){
        mat2(C,H);
    //4
    if (Contador[4] == 1 && Contador[5]== 1 && term == 2){
        mat2(C,F);
    }
    if (Contador[4] == 1 && Contador[6]== 1 && term == 2){
        mat2(C,G);
    }
    if (Contador[4] == 1 && Contador[7]== 1 && term == 2){
        mat2(C,H);
    //5
    if (Contador[4] == 1 && Contador[6]== 1 && term == 2){
        mat2(C,G);
    }
    if (Contador[4] == 1 && Contador[7]== 1 && term == 2){
        mat2(C,H);


    
    //Tres terminos
    if (Contador[0] == 1 && Contador[1]== 1 && Contador[2]== 1 && term == 3){
        mat3(A,B,C);
    }
    if (Contador[0] == 1 && Contador[1]== 1 && Contador[3]== 1 && term == 3){
        mat3(A,B,D);
    }
    if (Contador[0] == 1 && Contador[2]== 1 && Contador[3]== 1 && term == 3){
        mat3(A,C,D);
    }
    if (Contador[1] == 1 && Contador[2]== 1 && Contador[3]== 1 && term == 3){
        mat3(B,C,D);
    }
    //cuatro terminos
    if (Contador[0] == 1 && Contador[1]== 1 && Contador[2]== 1 && Contador[3]== 1 && term == 4){
        mat4(A,B,C,D);
    }
return 0;
}
    }}
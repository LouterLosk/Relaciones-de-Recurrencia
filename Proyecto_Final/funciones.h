 #include <stdio.h>
 #include <string.h>
 
 /*do
    {
       printf("Digite el número de variables lógicas, solo 2 o 3:  ");
       scanf("%d",&logicas);
    } while (logicas != 2 && logicas != 3);
    */


   void Matriz1(int nombre[4][3]){
    // nombre[Fila][Columna]
    int S;    
    // Imprimir todo el arreglo
    printf("Imprimiendo el arreglo:\n");
    printf("a b s\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", nombre[i][j]);
        }
        scanf("%d",&S);
        nombre[i][2] = S;
    }
   }

   
void IMPRIMIR(int nombre[4][3]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", nombre[i][j]);
        }
        printf("\n");
    }
}







   

void Invertir(char cadena[],int inicio,int longitud)
{ 
    char temp; 
    int fin = longitud - 1; 
    temp = cadena[inicio]; 
    cadena[inicio] = cadena[fin]; 
    cadena[fin] = temp; // Llamada recursiva con los índices ajustados 
    Invertir(cadena, inicio + 1, longitud - 1); 
}

int main()
{
    Invertir("casa",0,strlen("casa")-1);
    return 0;
}

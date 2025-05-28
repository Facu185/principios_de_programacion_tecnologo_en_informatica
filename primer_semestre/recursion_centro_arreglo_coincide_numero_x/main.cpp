//Programa recursivo que dado un arreglo de enteros de largo impar retorna true si el elmento del centro del arrglo es igual a un numero x pasado por parametro.
#include <stdio.h>
//Funcion recursiva que dado un arreglo de enteros de largo impar retorna true si el elmento del centro del arrglo es igual a un numero x pasado por parametro.
bool igualMedio(int A[], int inicio, int fin, int x);

int main(){
    int A[] = {4, 2, 1, 8, 4, 3, 6};
    int inicio = 0;
    int fin = sizeof(A)/sizeof(int) - 1; // tamaño del arreglo - 1 para obtener el índice final
    int x = 1;
    
    if(igualMedio(A, inicio, fin, x)){
        printf("\nEl valor %d es igual al valor del centro del arreglo.\n", x);
    } else {
        printf("\nEl valor %d no es igual al valor del centro del arreglo.\n", x);
    }

    return 0;
}

bool igualMedio(int A[], int inicio, int fin, int x){
    if (inicio == fin) {
        return A[inicio] == x;
    }
    return igualMedio(A, inicio + 1, fin - 1, x);
}
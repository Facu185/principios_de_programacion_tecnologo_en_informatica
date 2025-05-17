
//Programa que clacula la matriz traspuesta.
#include <stdio.h>
#define fila 4
#define columna 4
//Funcion que clacula la matriz traspuesta.
void matrizTraspuesta(int matA[fila][columna], int matB[columna][fila]);
//Funcion que imprime una matiz
void imprimirMatriz(int matB[columna][fila]);

main() {
    int matA[fila][columna] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {12, 13, 14, 15}};
    int matB[columna][fila];
    imprimirMatriz(matA);
    printf("\n");
    matrizTraspuesta(matA, matB);
    imprimirMatriz(matB);
}

void matrizTraspuesta(int matA[fila][columna], int matB[columna][fila]) {
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            matB[j][i] = matA[i][j];
        }
    }
}

void imprimirMatriz(int matB[columna][fila]) {
    for (int i = 0; i < columna; i++) {
        for (int j = 0; j < fila; j++) {
            printf("%d ", matB[i][j]);
        }
        printf("\n");
    }
}

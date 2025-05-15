//Programa que dado un arreglo de enteros retorna true si esta ordendo de menor a mayor y si no de lo contrario retorne false. Luego dado dos conjuntos de enteros representados con arreglos ordenados de menor a mayor, que se calcule la intereseccion de los conjuntos (el resultado debe ser un arreglo ordenado. Antes de calcular la interseccion, se chequa  que los arreglos esten ordenados , si alguno no esta ordenado , no realizara la interseccion y devolvera un mensaje.
#include <stdio.h>
//Funcion que verifica si un arreglo esta ordenado de menor a mayor.
bool arregloOrdenado(int arr[], int n);
//Funcion que intersecta dos arreglos.
//pos-condicion: el arreglo interseccion queda cargado con los elementos que estan wn el arreglo A y en el arreglo B.
void interseccionArreglos(int A[], int n, int B[], int m, int intereseccion[], int &tope);
//Funcion que recorre el arreglo
void recorrerArreglo(int A[], int n, int B[], int m, int intereseccion[], int &tope);
main(){
    int A[]={1,2,3,4,5,6};
    int B[]={1,4,5,6,7,8,9};
    int intereseccion[]={};
    int n = sizeof(A)/sizeof(int);
    int m = sizeof(B)/sizeof(int);
    int tope = 0;
    int j=arregloOrdenado(A, n);
    int k=arregloOrdenado(B, m);
    printf("%d", k);
    if(j==1 && k==1){
        interseccionArreglos(A, n, B, m, intereseccion, tope);
        recorrerArreglo(A, n, B, m, intereseccion, tope);
    }else if(j==0){
        printf("\nEl arreglo A esta desordenado.");
    }else if(k==0){
        printf("\nEl arreglo B esta desordenado.");
    }
    
}
bool arregloOrdenado(int arr[], int n){
    int men;
    for(int i=0; i<n-1; i++){
        men=arr[i+1];
        if(arr[i]>men){
            return false;
        }
    }
    return true;
}
void interseccionArreglos(int A[], int n, int B[], int m, int intereseccion[], int &tope){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(A[i]==B[j]){
                for (int h=0; h<tope; h++){
                    if(intereseccion[h]!=A[i]){
                        intereseccion[tope]=A[i];
                    }
                }
                tope++;
            }
        }
    }
}
void recorrerArreglo(int A[], int n, int B[], int m, int intereseccion[], int &tope){
    printf("\nEl arreglo A es: ");
    printf("[");
    for(int i=0; i<n; i++){
        printf(" %d", A[i]);
    }
    printf("] ");
    printf("\nEl arreglo B es: ");
    printf("[");
    for(int j=0; j<m; j++){
        printf(" %d", B[j]);
    }
    printf("] ");
     printf("\nLa interseccion es: ");
    printf("[");
    for(int l=0; l<tope; l++){
        printf(" %d", intereseccion[l]);
    }
    printf("] ");
}
//Programa que dado un numero natural pasado pro parametro si es par imprime los primeros naturales pares y sino los impares.
#include <stdio.h>
//Funcion que dado un numero natural pasado pro parametro si es par imprime los primeros naturales pares y sino los impares.
void naturalesParesImpares(int n);

main(){
    int n=-1;
    if(n<0){
        printf("%d no es natural.", n);
    }
    naturalesParesImpares(n);
}

void naturalesParesImpares(int n){
    if(n>=0){
        printf("\n%d", n);
        naturalesParesImpares(n-2);
    }
}
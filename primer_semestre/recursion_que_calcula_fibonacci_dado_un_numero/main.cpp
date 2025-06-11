//Programa que dado un numero calcula el valor de la serie fibonacci
#include <stdio.h>
//Funcion que calcula la serie fibonacci dado un numero
int serieFibonacci(int num);

main(){
    int num, res;
    printf("Ingrese un numero: ");
    scanf(" %d", &num);
    res=serieFibonacci(num);
    printf("La serie fibanacci es: %d", num);
}

int serieFibonacci(int num){
    if(num<=2){
        return 1;
    }else{
        return serieFibonacci(num-1)+serieFibonacci(num-2);
    }
}
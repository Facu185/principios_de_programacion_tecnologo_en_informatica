//Programa para hacer la sumatotia de dos numeros ingresados por el usuario
#include <stdio.h>
int main()
{
    int num1,num2,suma=0;
    printf("Ingrese un numero: ");
    scanf(" %d", &num1);
    printf("Ingrese otro numero: ");
    scanf(" %d", &num2);
    if(num1>num2){
        printf("\nEl segundo numero debe ser mayor que el primero.");
    }else{
        for(int i=num1; i<=num2; i++){
            suma=suma+i;
        }
        printf("El valor de la sumatoria es: %d", suma);
    }
}
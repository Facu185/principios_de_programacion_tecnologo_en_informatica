//Programa que calcula el mcd (maximo comun divisor) de dos numeros pasados parametros.
#include <stdio.h>
//Funcion que imprime el mcd de dos numeros pasados por parametros.
int mcdNumeros(int num1, int num2);

main(){
    int num1, num2, res;
    printf("Ingrese dos numeros: ");
    scanf(" %d %d", &num1, &num2);
    res=mcdNumeros(num1, num2);
    printf("El maximo comun divior de %d y de %d es: %d", num1, num2, res);
}

int mcdNumeros(int num1, int num2){
    if(num2==0){
        return num1;
    }else{
       return mcdNumeros(num2,num1%num2);
    }
}
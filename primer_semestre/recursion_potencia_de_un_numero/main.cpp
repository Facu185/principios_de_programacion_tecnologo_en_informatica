//Programa que calcula la poyencia de a^b de forma rrecursiva.
#include <stdio.h>
//Funcion que calcula la poyencia de a^b de forma rrecursiva.
int potenciaNumero(int num1, int num2);

main(){
    int num1=2;
    int num2=3;
    int res;
    res=potenciaNumero(num1, num2);
    printf("%d", res);
}

int potenciaNumero(int num1, int num2){
    if(num2==0){
        return num1;
    }else if(num2==1){
        return num1;
    }else{
        return num1*potenciaNumero(num1, num2-1);   
    }
}
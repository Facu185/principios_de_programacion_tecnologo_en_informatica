//Programa que cambia un arreglo char todo a mayuscula o a minuscula.
#include <stdio.h>
//Funcion que cambia un arreglo char todo a mayuscula o a minuscula.
void pasarTextoMinusculaMayuscula(char *A, char cambio);

main(){
    char A[]="Hola Como";
    printf("Ingresar una letra minuscula o mayuscula: ");
    char cambio;
    scanf(" %c", &cambio);
    printf("\n%s", A);
    pasarTextoMinusculaMayuscula(A, cambio);
    printf("\n%s", A);
}

void pasarTextoMinusculaMayuscula(char *A, char cambio){
    if(cambio>=65 && cambio<=90){
        for(int i=0; A[i]!='\0'; i++){
            if(A[i]>=97 && A[i]<=122){
                A[i]=A[i]-32;
            }
        }
    }else if(cambio>=97 && cambio<=122){
        for(int j=0; A[j]!='\0'; j++){
            if(A[j]>=65 && A[j]<=90){
                A[j]=A[j]+32;
            }
        }
    }
}
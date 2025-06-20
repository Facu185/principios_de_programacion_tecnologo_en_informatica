//Programa que suma dos tipos de dato entero con punteros en c.
#include <stdio.h>

main(){
    int *num1 = (int*)malloc(sizeof(int));
    int *num2 = (int*)malloc(sizeof(int));
    *num1=30;
    *num2=15;
    int *suma=(int*)malloc(sizeof(int));
    *suma=*num1+*num2;
    printf("La segunda suma es %d", *suma);
    free(num1);
    free(num2);
    free(suma);
}

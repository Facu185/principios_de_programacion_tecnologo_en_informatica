//Programa que suma dos tipos de dato entero con punteros en c++.
#include <stdio.h>

main(){
    //C++
    int *num1=new int;
    int *num2=new int; 
    int *suma=new int;
    *num1=65;
    *num2=25;
    *suma=*num1+*num2;
    printf("La suma da %d", *suma);
    delete(num1);
    delete(num2);
    delete(suma);
}

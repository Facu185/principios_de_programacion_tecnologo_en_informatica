//Programa que calcula el largo de un arreglo de char.
#include <stdio.h>
//Funcion que calcula el largo de un arreglo de char.
int  largoArrgloChar(const char *a);
main()
{
    char a[]="abcdefg";
    int largo=largoArrgloChar(a);
    printf("El largo del arreglo es: %d \n", largo);
}
int  largoArrgloChar(const char *a){
    int iterador=0;
    while(a[iterador]!='\0'){
        iterador++;
    }
    return iterador;
}
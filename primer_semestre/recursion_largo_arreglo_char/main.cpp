//Programa que retorna el largo de un arreglo char recursivamente.
#include <stdio.h>
//Funcion que retorna el largo de un arreglo char recursivamente.
int largoArregloChar(char Arreglo[], int pos);

main(){
    int pos=0, res;
    char Arreglo[]="Programacion";
    res=largoArregloChar(Arreglo, pos);
    printf("El largo de la palabra %s arreglo es: %d", Arreglo, res);
}

int largoArregloChar(char Arreglo[], int pos){
    if(Arreglo[pos]=='\0'){
        return 0;
    }else{
        return (1+largoArregloChar(Arreglo, ++pos));
    }
}
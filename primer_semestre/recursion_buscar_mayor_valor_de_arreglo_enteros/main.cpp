//Programa que devuelve el mayor valor de un arreglo de enteros.
#include <stdio.h>
//Funcion que devuelve el mayor valor de un arreglo de enteros.
int mayroValorArreglos(int Arreglo[], int largo, int max);

main(){
    int Arreglo[9]={1,2,3,4,10,5,6,7,8};
    int max=0, largo, res;
    largo=sizeof(Arreglo)/sizeof(int);
    res=mayroValorArreglos(Arreglo, largo, max);
    printf("El mayor valor del arreglo es: %d", res);
}

int mayroValorArreglos(int Arreglo[], int largo, int max){
    if(largo==0){
        return max;
    }else{
        if(Arreglo[largo-1]>max){
            max=Arreglo[largo-1];
        }
        return mayroValorArreglos(Arreglo, largo-1, max);
    }
}
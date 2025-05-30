//Programa que compara dos arreglos de enteros son iguales, si son iguales la funcion retorna true si no es asi retorna false.
#include <stdio.h>
//Funcion que compara dos arreglos de enteros son iguales, si son iguales la funcion retorna true si no es asi retorna false.
bool sonIgualesArreglos(int Arreglo1[], int Arreglo2[], int largo);

main(){
    int Arreglo1[8]={1,2,3,4,5,6,7,8};
    int Arreglo2[8]={1,2,3,4,5,6,7,8};
    int largo=sizeof(Arreglo1)/sizeof(int);
    bool res;
    if (sizeof(Arreglo1)/sizeof(int)!=sizeof(Arreglo2)/sizeof(int)){
        printf("Los arreglos son diferentes ya que tienen diferente largo.");
    }
    res=sonIgualesArreglos(Arreglo1, Arreglo2, largo-1);
    if (res==true){
        printf("Los arreglos son iguales.");
    }else{
        printf("Los arreglos son diferentes.");
    }
    
}

bool sonIgualesArreglos(int Arreglo1[], int Arreglo2[], int largo){
    if(largo>0 && Arreglo1[largo-1]==Arreglo2[largo-1]){
        return true && sonIgualesArreglos(Arreglo1, Arreglo2, largo-1);
    }else if(largo==0){
        return true;
    }else{
        return false;
    }
}
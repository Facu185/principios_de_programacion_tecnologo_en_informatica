//Programa que dado un arreglo de enteros retorna la suma de forma recursiva de los valores que estan en las posiciones pares.
#include <stdio.h>
//Funcion que dado un arreglo de enteros retorna la suma de forma recursiva de los valores que estan en las posiciones pares.
int sumaValoresPares(int valores[], int largo);

main(){
    int valores[]={1,6,4,2,8};
    int res=0,largo=0;
    largo=sizeof(valores)/sizeof(int);
    res=sumaValoresPares(valores, largo);
    printf("La suma es: %d", res);
}

int sumaValoresPares(int valores[], int largo){
    if(largo==0){
        return valores[0];
    }else if(largo%2==0){
        return valores[largo]+sumaValoresPares(valores, largo-1);
    }else{
        return sumaValoresPares(valores, largo-1);
    }
}
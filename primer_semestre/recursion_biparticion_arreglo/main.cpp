//Programa que realiza la busqueda de un elemento de un arreglo ordenado por biparticion, en la que retorna la poscision del elemento n caso de encontrarlo o retorna -1 si el elemento no se encuentra.
#include <stdio.h>
//Funcion que que realiza la busqueda de un elemento de un arreglo ordenado por biparticion.
int poscionElemento(int Arreglo[], int infimo, int largo, int num);

main(){
    int num, infimo, res, largo;
    int Arreglo[]={1,2,3,4,5,6,7,8};
    num=1;
    largo=sizeof(Arreglo)/sizeof(int);
    res=poscionElemento(Arreglo, 0, largo, num);
    printf("El numero %d se encuentra en la poscion %d del arreglo. ", num, res);
}

int poscionElemento(int Arreglo[], int infimo, int largo, int num){
    int medio=(infimo+largo)/2;
    if(infimo>largo){
        return -1;
    }
    if(Arreglo[medio]>num){
        return  poscionElemento(Arreglo, 0, medio-1, num);
    }
    if(Arreglo[medio]<num){
        return  poscionElemento(Arreglo, medio+1, largo, num);
    }
    return medio;
}

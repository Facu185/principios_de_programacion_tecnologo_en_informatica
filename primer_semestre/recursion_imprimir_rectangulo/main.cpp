//Programa que imprime de forma recursiva dibuja un rectangulo.
#include <stdio.h>
//Funcion que imprime de forma recursiva dibuja un rectangulo.
void imprimirRectangulo(int altura, int base);
void imprimirRectangulo2(int base);

main(){
    int altura=5, base=4;
    imprimirRectangulo(altura, base);
}

void imprimirRectangulo(int altura, int base){
    if(altura>0){
        imprimirRectangulo2(base);
        imprimirRectangulo(altura-1, base);
    }
}
void imprimirRectangulo2(int base){
    if(base>0){
        printf("*");
        imprimirRectangulo2(base-1);
    }else{
        printf("\n");
    }
}
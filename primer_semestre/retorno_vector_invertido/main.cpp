//Programa que al pasarle un vector te lo devuelve en uno diferente e invertido
#include <stdio.h>
//Funcion que al pasarle un vector te lo devuelve en uno diferente e invertido
void retonoVectorInvertido (int arreglo[], int arreglo2[], int largo);
//Funcion que imprime el vector.
void imprimirVector(int arreglo2[], int largo);
//Funcion que al pasarle un vector te lo devuelve en ese mismo.
void retonoVectorInvertido2 (int arreglo3[], int largo2);
//Funcion que imprime el vector.
void imprimirVector2(int arreglo3[], int largo2);
 main()
{
    int arreglo[]={1,5,8,7,3,2,9};
    int arreglo3[]={1,5,8,7,3,2,9,0,12,11,19};
    int largo2=sizeof(arreglo3)/sizeof(int);
    int largo=sizeof(arreglo)/sizeof(int);
    int arreglo2[largo];
    retonoVectorInvertido (arreglo, arreglo2, largo);
    retonoVectorInvertido2 (arreglo3, largo2);
    imprimirVector(arreglo2, largo);
    imprimirVector2(arreglo3, largo2);
}

void retonoVectorInvertido (int arreglo[], int arreglo2[], int largo){
    int iterador=largo-1;
    for (int i=0; i<largo; i++){
        arreglo2[iterador]=arreglo[i];
        iterador--;
    }
}
void imprimirVector(int arreglo2[], int largo){
   printf("El nuevo arreglo es: ");
    for (int i = 0; i < largo; i++) {
        printf("%d ", arreglo2[i]);
    }
    printf("\n");
}
void retonoVectorInvertido2 (int arreglo3[], int largo2){
    int aux;
    int iterador=largo2-1;
    for (int i=0; i<largo2/2; i++){
        aux=arreglo3[i];
        arreglo3[i]=arreglo3[iterador];
        arreglo3[iterador]=aux;
        iterador--;
    }
}
void imprimirVector2(int arreglo3[], int largo2){
   printf("El nuevo arreglo es: ");
    for (int i = 0; i < largo2; i++) {
        printf("%d ", arreglo3[i]);
    }
    printf("\n");
}
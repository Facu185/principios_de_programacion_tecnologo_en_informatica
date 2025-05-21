//Programa que ordena un arreglo mediante selection sort
#include <stdio.h>
//Funcion que ordena un arreglo mediante selection sort
void selectionSort(int *A, int largo);
//Funcion que imprime el vector.
void imprimirVector(int A[], int largo);
main()
{
    int A[]={9,1,8,2,7,3,6,5};
    int largo=sizeof(A)/sizeof(int);
    imprimirVector(A, largo);
    selectionSort(A, largo);
    imprimirVector(A, largo);
}
void selectionSort(int *A, int largo){
    int pos;
    int men;
    for(int i=0; i<largo; i++){
        men=A[i];
        pos=i;
        if(men<A[i+1]){
            
        }
    }
}
void imprimirVector(int A[], int largo){
   printf("El arreglo es: ");
   printf("[ ");
    for (int i = 0; i < largo; i++) {
        printf("%d", A[i]);
    }
    printf(" ]");
    printf("\n");
}
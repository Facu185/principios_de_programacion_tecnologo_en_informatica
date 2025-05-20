//Programa que ordena por metodo burbuja un arreglo
#include <stdio.h>
//Funcion que ordena por metodo burbuja un arreglo
void ordenacionMetodoBurbuja(int *A, int largo);
//Funcion que imprime el vector.
void imprimirVector(int A[], int largo);
main()
{
    int A[]={9,1,8,2,7,3,6,5};
    int largo=sizeof(A)/sizeof(int);
    imprimirVector(A, largo);
    ordenacionMetodoBurbuja(A, largo);
    imprimirVector(A, largo);
}

void ordenacionMetodoBurbuja(int *A, int largo){
    for(int i=0; i<largo-1; i++){
        for(int j=0; j<largo-i-1; j++){
            if(A[j]>A[j+1]){
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
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
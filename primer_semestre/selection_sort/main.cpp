//Progrma que ordena una arreglo mediante el metodo selection sort
#include <stdio.h>
//Funcion que ordena una arreglo mediante el metodo selection sort
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
    for(int i=0; i<largo-1; i++){
        int minIndex=i;
        for(int j=i+1; j<largo; j++){
            if(A[j]<A[minIndex]){
                minIndex=j;
            }
        }
         int temp = A[i];
        A[i] = A[minIndex];
        A[minIndex] = temp;
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
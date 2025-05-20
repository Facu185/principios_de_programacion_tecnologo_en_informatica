//Progrma que ordena una arreglo mediante el metodo incision sort
#include <stdio.h>
//Funcion que ordena una arreglo mediante el metodo incision sort
void incisionSort(int *A, int largo);
//Funcion que imprime el vector.
void imprimirVector(int A[], int largo);
main()
{
    int A[]={9,1,8,2,7,3,6,5};
    int largo=sizeof(A)/sizeof(int);
    imprimirVector(A, largo);
    incisionSort(A, largo);
    imprimirVector(A, largo);
}
void incisionSort(int *A, int largo){
    for(int i=1; i<largo; i++){
        int temp=A[i];
        int j=i-1;
        while(j>=0 && A[j]>temp){
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=temp;
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
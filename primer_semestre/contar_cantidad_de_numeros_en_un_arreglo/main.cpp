//Programa que cuenta la cantidad de numeros ingresados en una arreglo.
#include <stdio.h>
//Funcion lee numeros ingresados por un usuario.
void ingresarNumero(int num, int *A, int &tope);
//Funcion que retorna la cantoidad de veces que se encuentra un entero en un arreglo.
int retornaCantVeccesNumero(int num, int *A, int tope);
main(){
    int tope = 0;
    int A[256];
    while (true) {
        printf("\nIngrese la opcion a realizar:\n");
        printf("1- Agregar numero.\n");
        printf("2- Retornar cantidad de numeros.\n");
        int opcion;
        scanf("%d", &opcion);
        switch (opcion) {
            case 1: 
            int num;
            printf("\nIngrese un numero para el arreglo: ");
            scanf("%d", &num);
            ingresarNumero(num, A, tope);
            break; 
            case 2: 
                int num2;
                printf("\nIngrese un numero para contar: ");
                scanf("%d", &num2);
                int cant=retornaCantVeccesNumero(num2, A, tope);
                printf("\nCantidad de numeros %d encontrados en el arreglo es: %d\n", num2, cant);
            break;
        }
    }
}

void ingresarNumero(int num, int *A, int &tope){
    A[tope]=num;
    tope++;
}
int retornaCantVeccesNumero(int num, int *A, int tope){
    int cont=0;
    for(int i=0; i<tope-1; i++){
        if(A[i]==num){
            cont++;
        }
    }
    return cont;
}

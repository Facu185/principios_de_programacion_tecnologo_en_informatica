//Programa que dado un arreglo de largo >=2 y un numero pasado por parametro calcule si los valores del arreglo pueden dar la suma del numero los valores del arreglo deben estar consecutivamente.
#include <stdio.h>
//pre-condicion: el arreglo debe ser de largo >=2
//post-condicion: devuelve true si los valores del arreglo pueden dar la suma del numero
//mayor o igual a 2 en el arreglo,tal que, la suma es igual a num o retorna false en caso contrario.
bool existeSecuenciaSuma(int A[], int largo, int num);

main() {
    int num, largo;
    int A[] = {2,3,2,3,4,6,8};
    num = 4;
    largo = sizeof(A) / sizeof(A[0]);
    if (largo < 2) {
        printf("El arreglo debe ser de largo mayor o igual a 2\n");
    }else{
        bool res;
        res = existeSecuenciaSuma(A, largo, num);
        if(res==1) {
            printf("El arreglo tiene una secuencia de suma igual a %d\n", num);
        }else{
            printf("El arreglo no tiene una secuencia de suma igual a %d\n", num);
        }
    }
}

bool existeSecuenciaSuma(int A[], int largo, int num) {
    for (int i = 0; i < largo - 1; i++) {
        if (A[i] + A[i + 1] == num) {
            return true;
        }
    }
    return false;
}
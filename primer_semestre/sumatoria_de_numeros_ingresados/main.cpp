//Programa que pide a un usuario numeros hasta que ingrese 0 y haga la suma de todos ellos.
#include <stdio.h>
//Funcion que pide los numeros al usuario y realiza la suma.
int pedirNumeros(int &suma);
//Funcion que imprime el resultado de la suma.
void imprimirResultado(int &suma);
main(){
    int suma = 0;
    suma=pedirNumeros(suma);
    imprimirResultado(suma);
}
int pedirNumeros(int &suma){
    int num;
    do{
        printf("Ingrese un numero: ");
        scanf("%d", &num);
        if(num != 0){
            suma= suma+ num;
        }
    }while (num!= 0);
    return suma;
}
void imprimirResultado(int &suma){
    printf("La suma es: %d", suma);
}
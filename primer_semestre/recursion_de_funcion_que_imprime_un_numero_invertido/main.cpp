//Programa que dado un numero pasado por parmetro lo imprima invertido
#include <stdio.h>
//Funcion que dado un numero lo imprime invertido
void invertirNumero(int num);

main(){
    int num;
    printf("Ingrese un numero: ");
    scanf(" %d", &num);
    printf("El numero invertido es: ");
    invertirNumero(num);
}

void invertirNumero(int num){
    printf("%d", num%10);
    if(num>10){
        invertirNumero(num/10);
    }
}
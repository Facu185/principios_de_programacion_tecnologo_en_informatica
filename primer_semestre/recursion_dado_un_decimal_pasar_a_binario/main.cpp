//Programa que convierte un decimal en un binario.
#include <stdio.h>
//Funcion que convierte un deciamal en un binario.
void convertirDecimalABinario(int num);

main(){
    int num;
    printf("Ingrese el numero: ");
    scanf(" %d", &num);
    convertirDecimalABinario(num);
}

void convertirDecimalABinario(int num){
    if(num>1){
        convertirDecimalABinario(num/2);
    }
    printf("%d", num%2);
}
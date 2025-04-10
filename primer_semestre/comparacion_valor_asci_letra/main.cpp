//Este programa compara el valor numerico en la tabla ascci de una letra minuscual.
#include <stdio.h>
int main()
{
    char letra1,letra2;
    printf("Introduzca una letra miniuscula: ");
    scanf(" %c", &letra1);
    printf("\nIntroduzca otra letra minuscual: ");
    scanf(" %c", &letra2);
    if(letra1>letra2){
        printf("\nLa letra %c es mayor que la letra %c", letra1, letra2);
    }else if (letra1<letra2){
        printf("\nLa letra %c es mayor que la letra %c", letra2, letra1);
    }else{
        printf("\nLas letras son iguales");
    }
    
}

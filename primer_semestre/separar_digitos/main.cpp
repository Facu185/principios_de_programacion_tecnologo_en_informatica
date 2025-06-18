//Este programa dado un numero entero de 4 digitos, imprime por separados los digitos de este numero
#include <stdio.h>
//Funcion para separar los digitos de un numero entero de 4 digitos
void separadorDigitos(int numero);
int main()
{
    int numero;
    printf("Ingresa un numero de 4 digitos: ");
    scanf("%d", &numero);
    separadorDigitos(numero);
}
void separadorDigitos(int numero){
    int terceroE = numero / 10;
    int cuartoR = numero % 10;
    int segundoE = terceroE / 10;
    int terceroR = terceroE % 10;
    int primeroE = segundoE / 10;
    int segundoR = segundoE % 10;
    int primeroR = primeroE % 10;
    printf("Los digitos del numero son: %d %d %d %d", primeroR, segundoR, terceroR, cuartoR);
}
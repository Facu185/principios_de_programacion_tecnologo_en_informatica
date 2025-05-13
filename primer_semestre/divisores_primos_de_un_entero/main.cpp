//Programa que calcula los divisores primos de un numero ingresado por el usuario.
#include <stdio.h>
#include <stdbool.h>
// Función que pide el número al usuario.
void pedirNumero(int *num);
// Función que calcula si un número es primo.
bool esPrimo(int num);

// Función que muestra los divisores primos de un número.
void mostrarDivisoresPrimos(int num);
int main() {
    int num;
    pedirNumero(&num);
    mostrarDivisoresPrimos(num);
    return 0;
}
void pedirNumero(int *num) {
    printf("Ingrese un numero: ");
    scanf("%d", num);
}

bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
void mostrarDivisoresPrimos(int num) {
    printf("Los divisores primos de %d son: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0 && esPrimo(i)) {
            printf("%d ", i);
        }
    }
}
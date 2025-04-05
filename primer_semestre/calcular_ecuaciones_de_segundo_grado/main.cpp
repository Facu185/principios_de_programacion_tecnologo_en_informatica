//Programa que calcula la solucion de una ecuacion de segundo grado.
#include <stdio.h>
#include <math.h>
//Funcion que pide los valores de la ecuacion al usuario.
void pedirValores(float &a, float &b, float &c);
//Funcion que calcula la solucion de la ecuacion.
void calcularSolucion(float &a, float &b, float &c, float &x1, float &x2);
//Funcion que imprime la solucion de la ecuacion.
void imprimirSolucion(float &x1, float &x2);
main(){
    float a, b, c, x1, x2;
    pedirValores(a, b, c);
    calcularSolucion(a, b, c, x1, x2);
    imprimirSolucion(x1, x2);
}
void pedirValores(float &a, float &b, float &c){
    printf("Introduce el valor de a (el valor que esta elvado al cuadrado de la ecuacion): ");
    scanf("%f", &a);
    printf("\nIntroduce el valor de b (el valor con x de la ecuacion): ");
    scanf("%f", &b);
    printf("\nIntroduce el valor de c (el valor sin x de la ecuacion): ");
    scanf("%f", &c);
}
void calcularSolucion(float &a, float &b, float &c, float &x1, float &x2){
    x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
}
void imprimirSolucion(float &x1, float &x2){
    printf("\nLa solucion de la ecuacion es: x1 = %f y x2 = %f", x1, x2);
}
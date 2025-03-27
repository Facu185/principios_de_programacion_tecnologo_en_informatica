//Este programa calcular el area de un rectangulo, separando las operaciones en distintas funciones
#include <stdio.h>
//Solicita el ingreso de un valor float por teclado al usuario
void ingresarValor(float &largo, float &ancho);
//Calcula el area de un rectangulo de largo "largo" y ancho "ancho"
float calcularArea(float largo, float ancho);
//Imprime el resultado de la operacion
void imprimir(float area);
main()
{
   float area, largo, ancho;
   ingresarValor(largo, ancho);
   area = calcularArea(largo, ancho);
   imprimir(area);
}
void ingresarValor(float &largo, float &ancho){
    printf("Ingrese el largo del rectangulo: ");
    scanf(" %f", &largo);
    printf("Ingrese el ancho del rectangulo: ");
    scanf(" %f", &ancho);
}
float calcularArea(float largo, float ancho){
    float area;
    area = largo * ancho;
    return area;
}
void imprimir(float area){
    printf("El area del rectangulo es: %f", area);
}
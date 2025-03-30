//Programa que clacula el area de un ciculo de radio r el cual es ingresado por el usuario.
#include <stdio.h>
#define pi 3.14
//Funcion que pide al usuario el valor del radio.
void pideRadio(float &radio);
//Funcion que calcula el area del circulo.
float calculaArea(float &radio);
//Funcion que imprime el area del circulo.
void imprimeArea(float area);
main(){
    float radio, area;
    pideRadio(radio);
    area=calculaArea(radio);
    imprimeArea(area);
}
void pideRadio(float &radio){
    printf("Ingresa el valor del radio: ");
    scanf(" %f", &radio);
}
float calculaArea(float &radio){
    float area=0;
    area= pi*radio*radio;
    return area;
}
void imprimeArea(float area){
    printf("El area del circulo es: %f", area);
}
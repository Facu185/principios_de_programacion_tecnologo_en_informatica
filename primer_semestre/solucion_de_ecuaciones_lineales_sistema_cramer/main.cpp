//Programa que resuelve ecuaciones lineales mediente el sitema de cramer.
#include <stdio.h>
//Funcion que que resuelve ecuaciones lineales mediente el sitema de cramer.
void sistemaCramer(int &a, int &b, int &c, int &d, int &e, int &f, int &x, int &y);
//Funcion para ingresar los valores de la ecuacion.
void imprimirSolucion(int &x, int &y);
void valoresEcuacion(int &a, int &b, int &c, int &d, int &e, int &f);
main(){
    int a, b, c, d, e, f, x, y, z;
    valoresEcuacion(a, b, c, d, e, f);
    sistemaCramer(a, b, c, d, e, f, x, y);
    imprimirSolucion(x, y);
}
void valoresEcuacion(int &a, int &b, int &c, int &d, int &e, int &f){
    printf("Ingresa el valor de a: ");
    scanf(" %d", &a);
    printf("Ingresa el valor de b: ");
    scanf(" %d", &b);
    printf("Ingresa resultado de la primera ecuacion: ");
    scanf(" %d", &c);
    printf("Ingresa el valor de d: ");
    scanf(" %d", &d);
    printf("Ingresa el valor de e: ");
    scanf(" %d", &e);
    printf("Ingresa resultado de la segunda ecuacion: ");
    scanf(" %d", &f); 
}
void sistemaCramer(int &a, int &b, int &c, int &d, int &e, int &f, int &x, int &y){
    int j, k, l, m;
    j = ((c * e) - (f * b));
    k = ((a * e) - (d * b));
    l = ((a * f) - (d * c));
    m=((a * e) - (d * b));
    if(j!=0 && k!=0 && l!=0 && m!=0){
        x=j/k;
        y=l/m;
    }else{
        x=0;
        y=0;
    }
}
void imprimirSolucion(int &x, int &y){
    if(x!=0&&y!=0){
        printf("El valor de x es: %d\n", x);
        printf("El valor de y es: %d\n", y);
    }else{
        printf("No se puede resolver la ecuacion");
    } 
}
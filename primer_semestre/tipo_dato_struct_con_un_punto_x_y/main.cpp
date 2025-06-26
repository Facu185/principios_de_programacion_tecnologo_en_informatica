//Programa que declara dos puntos mediante struct.
#include <stdio.h>
struct Punto{
   int x;
   int y;
};
//Funcion que imprime un tipo dato struct.
void imprimirPunto(Punto p);
main(){
   Punto p;
   p.x = 10;
   p.y = 20;
   imprimirPunto(p);
}
void imprimirPunto(Punto p){
    printf("x = %d, y = %d\n", p.x, p.y);
}
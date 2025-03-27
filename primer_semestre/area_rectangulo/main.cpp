//Este programa calcula el área de un rectángulo pidiendo los valores por teclado al usuario.
#include <stdio.h>
int main()
{
   int largo, ancho;
   printf("Ingresa el largo del rectángulo: ");
   scanf("%d", &largo);
   printf("Ingresa el ancho del rectángulo: ");
   scanf("%d", &ancho);
   int area = largo * ancho;
   printf("El área del rectángulo es: %d", area);
}

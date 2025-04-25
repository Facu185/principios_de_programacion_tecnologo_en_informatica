//Copiar un arreglo char a otro con punteros.
#include <stdio.h>
//Funcion para copiar un arreglo char a otro con punteros.
void copiarArregloChar(const char *arreglo1, char *arreglo2);
main()
{
    char arreglo1[] = "Hola";
    char arreglo2[1]={};
    printf("El arreglo 1 es: %s", arreglo1);
    copiarArregloChar(arreglo1, arreglo2);
    printf("\nEl arreglo 2 es: %s", arreglo2);
}
void copiarArregloChar(const char *arreglo1, char *arreglo2){
    for(int i=0; *arreglo1!='\0'; arreglo1++, arreglo2++){
        *arreglo2=*arreglo1;
    }
    *arreglo2='\0';
}
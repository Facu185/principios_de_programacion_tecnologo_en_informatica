//Programa para copiar una arrglo char en otro.
#include <stdio.h>
//Funcion para copiar una arrglo char en otro.
void copiaArregloChar(const char *a, char *b);
void imprimirVector(const char *a, char *b);
main(){
    char a[]="abcdefg";
    char b[]={};
    copiaArregloChar(a, b);
    imprimirVector(a, b);
}
void copiaArregloChar(const char *a, char *b){
    for(int i=0; a[i]!='\0'; i++){
        b[i]=a[i];
    }
}
void imprimirVector(const char *a, char *b){
    printf("Arreglo a: %s\n", a);
    printf("Arreglo b: %s", b);
}
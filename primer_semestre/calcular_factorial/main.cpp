//Programa que calcula el factorial de un numero entero positivo ingresado por el usuario. 
#include <stdio.h> 
//Funcion que pide el numero al usuario. 
void pedirNumero(int &numero); 
//Funcion que calcula el factorial de un numero. 
int factorial(int &numero); 
//Funcion que imprime el factorial de un numero. 
void imprimirFactorial(int &numero, int &resultado); 
main(){     
    int numero, resultado;     
    pedirNumero(numero);     
    resultado=factorial(numero);
    imprimirFactorial(numero, resultado);  
} 
void pedirNumero(int &numero){     
    printf("Ingrese un numero: ");     
    scanf(" %d", &numero); 
} 
int factorial(int &numero){     
    int resultado=1;     
    for(int i=1; i<=numero; i++){         
        resultado= resultado * i;     
    }       
    return resultado; 
} 
void imprimirFactorial(int &numero, int &resultado){     
    printf("El factorial de %d es: %d", numero, resultado); 
}
//Programa que retorna el producto de 2 numeros pasado por parametros.
#include <stdio.h>
//Funcion que retorna el producto de 2 numeros pasado por parametros.
int productoRecursivo(int num1, int num2);

main(){
   int num1, num2, res;
   printf("Ingrese dos numeros: ");
   scanf(" %d %d", &num1, &num2);
   res=productoRecursivo(num1, num2);
   printf("El producto de %d por %d es: %d", num1, num2, res);
}

int productoRecursivo(int num1, int num2){
    if(num1==0 || num2==0){
        return 0;     
    }else if(num1==1){
        return num2;
    }else if(num2==1){
        return num1;
    }else{
        return num2+productoRecursivo(num1-1,num2);
    }
}
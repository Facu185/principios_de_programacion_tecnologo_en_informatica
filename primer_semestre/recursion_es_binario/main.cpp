//Programa que dado un numero pasado por parametro te retorna si es binario.
#include <stdio.h>
//Funcion que dado un numero pasado por parametro te retorna si es binario.
bool esBinario(int num);

main(){
    int num=10;
    bool res;
    res=esBinario(num);
    if(res==0){
        printf("El numero %d no es binario.", num);
    }else{
        printf("El numero %d es binario.", num);
    }
    
}

bool esBinario(int num) {
    if (num == 0) {
        return true;
    }else if (num % 10 == 0 || num % 10 == 1) {
        return esBinario(num / 10);
    }
    return false;
}
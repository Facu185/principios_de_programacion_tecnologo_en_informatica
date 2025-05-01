#include "pila.h"
#include <cstdlib>
#include <stdio.h>
main(){
    char arreglo[]="if(a(b+c)-d((a+c))";
    int iterador=0;
    Pila pila=crearPila(20);
    while(arreglo[iterador]=='\0'){
        if(arreglo[iterador]=='('){
            if(!estaLlenaPila(pila)){
                insertarEnPila(pila, '(');
            }else{
                printf("La pila esta llena.\n");
            }
        }else if(arreglo[iterador]==')'){
            if(!estaVaciaPila(pila)){
                quitarTopePila;
            }
        }
        iterador++;
    }
    if(estaVaciaPila(pila)){
        printf("Los parentesis estan balanceados.\n");
    }else{
        printf("Los parentesis no estan balanceados.\n");
    }
    eliminarPila(pila);
}

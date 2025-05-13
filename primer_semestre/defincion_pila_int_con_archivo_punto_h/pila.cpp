#include "pila.h"
#include <cstdlib>
struct _Pila{
    int *pila;
    int tope;
    int llena;
};
//Constructora.
//Crea una pila vacia de la cantidad de tope
Pila crearPila(int tope){
    Pila p=(_Pila*)malloc(sizeof(_Pila));
    p->pila=(int*)malloc(tope*sizeof(int));
    p->tope=tope=0;
    p->llena=tope;
    return p;
}
//Selectoras
//pre-condicion la funcion pilaLlena rertorna false.
//pos-condicion inserta el elemento en el tope de la pila.
void insertarEnPila(Pila pila, int  elemento){
    pila->pila[pila->tope]=elemento;
    pila->tope++;
}
//pre-condicion vacia retorna false
//pos-condicion quita el elmento del tope de la pila
void quitarTopePila(Pila pila){
    pila->tope--;
}
//pre-condicion vacia retorna false
//pos-condicion retorna el elmento del tope de la pila
int elementoTopePila(Pila pila){
    return pila->pila[pila->tope];
}
//Predicados
//pos-condicion Retorna true si pila esta vacia
bool estaVaciaPila(Pila pila){
    return (pila->tope==0);
}
//pos-condicion Retorna true si pila esta llena
bool estaLlenaPila(Pila pila){
    bool llena=false;
    if(pila->tope==pila->llena){
        return true;
    }else{
        return false;
    }
}
//Destructoras 
//pos-condicion se destruye toda la memoria de la pila
void eliminarPila(Pila pila){
    free(pila->pila);
    free(pila);
    pila=NULL;
}
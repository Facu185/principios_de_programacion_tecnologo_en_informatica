#include "nat.h"
#include <stdio.h>
struct nat{
    int valor;
};
natural crearNatural(int a){
    natural b;
    if(a<0){
        printf("\nEl numero debe ser mayor igual a 0");
    }else{
        b.valor=a;
    }
    return b;
}
int funcionMayor(natural a, natural b){
    if(a.valor==b.valor){
        return 0;
    }else if(a.valor>b.valor){
        return -1;
    }else{
        return 1;
    }
}
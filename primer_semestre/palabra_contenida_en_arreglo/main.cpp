//Programa que retorna si una palabra esta contenida en una arreglo.
#include <stdio.h>
#include <stdbool.h>
//Funcion que retorna si una palabra esta contenida en una arreglo.
bool palabraContenida(char *arreglo, char *palabra);
main()
{
    char arreglo[]="iholakszyu";
    char palabra[]="martin";
    palabraContenida(arreglo, palabra);
}
bool palabraContenida(char *arreglo, char *palabra){
    bool x = true;
    while(*palabra!='\0'){
        if(*arreglo==*palabra){            
            arreglo++;
            palabra++;
            x=true;

        }else{
            arreglo++;
        }
    }
    
    if(x){        
        printf("La palbara se encuentra en el arreglo.");
    }else{
        printf("La palbara no se encuentra en el arreglo.");
    }
    return true;
}
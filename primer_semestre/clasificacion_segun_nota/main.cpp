//Programa que solicita al usuario una nota entre 0  y 12, luego se le dice si el alumno aprueba, desaprueba o exonera.
#include <stdio.h>
//Funcion que solicita la nota del alumno
void solicitarNota(int &nota);
//Funcion que dice si el alumno aprueba o desaprueba
void decirAprobacionODesaprobacion(int &nota);
main(){
    int nota;
    solicitarNota(nota);
    decirAprobacionODesaprobacion(nota);
}
void solicitarNota(int &nota){
    printf("Introduzca una nota entre 0 y 12: ");
    scanf("%d", &nota);
    if (nota < 0 || nota > 12){
        printf("La nota introducida no es correcta. Introduzca una nota entre 0 y 12: ");
        scanf("%d", &nota);
    }
}
void decirAprobacionODesaprobacion(int &nota){
    if(nota==0 || nota<=4){
        printf("El alumno desaprueba");
    }else if(nota>4 && nota<8){
        printf("El alumno aprueba");
    }else if(nota>=8 && nota<=12){
        printf("El alumno exonera");
    }
}
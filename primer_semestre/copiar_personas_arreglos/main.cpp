//Programa que copia una persona que esta dentro de un arreglo a otro arreglo nuevo.
#include <stdio.h>
#include <string.h>
//Estructura de fecha.
struct Fecha
{
    int dia;
    int mes;
    int anio;
};
struct Persoana{
    char nombre[25];
    Fecha fecha;
    int ci;
};
main()
{
    Persoana personas[100];
    char nombre[25]= "Jose";
    strcpy(personas[0].nombre, nombre);
    personas[0].fecha.dia=1;
    personas[0].fecha.mes=10;
    personas[0].fecha.anio=2002;
    personas[0].ci=52368920;
    Persoana personasJose[100];
    personasJose[0]=personas[0];
    printf("Nombre: %s", personas[0].nombre);
    printf("\nFecha de nacimiento: %d/%d/%d", personas[0].fecha.dia, personas[0].fecha.mes, personas[0].fecha.anio);
    printf("\nCedula: %d", personas[0].ci);
    printf("\n");
    printf("\nNombre: %s", personasJose[0].nombre);
    printf("\nFecha de nacimiento: %d/%d/%d", personasJose[0].fecha.dia, personas[0].fecha.mes, personas[0].fecha.anio);
    printf("\nCedula: %d", personasJose[0].ci);
}

//Programa que crea mascitas mediante structs.
#include <stdio.h>
//Estructura de fecha.
struct Fecha{
    int dia;
    int mes;
    int anio;
};
//Estructura de consultas de las mascotas.
struct Consultas{
    Fecha fecha;
    char descripcion[25];
};
//Estructura de mascotas.
struct Mascota{
    int nSocio;
    char nombre[25];
    Fecha fechaNacimiento;
    char sexo;
    char tipo[25];
    Consultas consulta[100];
    bool activo;
    int topeConsulta;
};
//Funcion que registra una mascota.
void registrarMascota(Mascota mascotas[], int &topeMascotas, int &nSocio);
//Agrega una consulta a la mascota con el id nSocio, la mascota debe existir en el arrelo.
void agregarConsultaMascota(Mascota mascotas[], int nSocio);
//Busca si una mascota existe y retorna true si esta y false si no
bool existeMascota(Mascota mascotas[], int nSocio);
//Funcion que imprime una mascota invluyendo el id.
void imprimirMacotas(Mascota mascotas[], int nSocio);
//Verifica si una mascota esta activa y retorna true si es asi.
bool estaActivaMascota(Mascota mascotas[], int nSocio);
//Deja a un mascota con el id nSocio y lo desactiva.
void desactivarMascota(Mascota mascotas[], int nSocio);
//Imprime el id de la mascota el nombre y debajo la fecha y descripcion de la ultima consulta.
void imprimirUltimoConsultaMascota(Mascota mascotas[], int nSocio);

main(){
    Mascota mascotas[100];
    int topeMacotas=0;
    int nSocio=0;
    bool condicion=true;
    while (condicion){
        printf("\n1) Registrar mascotas: ");
        printf("\n2) Agregar consulta a una mascota: ");
        printf("\n3) Desactivar una mascota: ");
        printf("\n4) Imprimir las mascotas: ");
        printf("\n5) Imprimir la ultima consulta de una mascota: ");
        printf("\n6) Salir: ");
        int op;
        printf("\n");
        scanf(" %d", &op);
        switch (op){
            case 1:
                if(topeMacotas<=100){
                    registrarMascota(mascotas, topeMacotas, nSocio);
                }else{
                    printf("La lista de mascotas esta llena");
                }
            break;
            case 2:
                printf("Ingrese el numero de socio de la mascota: ");
                scanf(" %d", &nSocio);
                if(existeMascota(mascotas, nSocio)==true){
                    if(estaActivaMascota(mascotas, nSocio)==true){
                        agregarConsultaMascota(mascotas, nSocio);
                    }else{
                        printf("La mascota no se encuentra activa");
                    }
                }else{
                    printf("La mascota no existe");
                }
            break;
            case 3:
                printf("Ingrese el numero de socio de la mascota: ");
                scanf(" %d", &nSocio);
                if(existeMascota(mascotas, nSocio)==true){
                    if(estaActivaMascota(mascotas, nSocio)==true){
                        desactivarMascota(mascotas, nSocio);
                    }else{
                        printf("La mascota ya ah sido desactivada");
                    }
                }else{
                    printf("La mascota no existe");
                }
            break;
            case 4:
                printf("Ingrese el numero de socio de la mascota: ");
                scanf(" %d", &nSocio);
                if(existeMascota(mascotas, nSocio)==true){
                    if(estaActivaMascota(mascotas, nSocio)==true){
                        imprimirMacotas(mascotas, nSocio);
                    }else{
                        printf("La mascota no se encuentra activa");
                    }     
                }else{
                    printf("No hay mascotas registradas");
                }
            break;
            case 5:
                printf("Ingrese el numero de socio de la mascota: ");
                scanf(" %d", &nSocio);
                if(existeMascota(mascotas, nSocio)==true){
                    if(estaActivaMascota(mascotas, nSocio)==true){
                        imprimirUltimoConsultaMascota(mascotas, nSocio);
                    }else{
                        printf("La mascota no se encuentra activa");
                    }
                }else{
                    printf("No hay mascotas registradas");
                }
            break;
            default:
                condicion=false;
            break;
        }
    }
    
}

void registrarMascota(Mascota mascotas[], int &topeMascotas, int &nSocio){
    mascotas[topeMascotas].nSocio = nSocio;
    printf("Ingrese el nombre de la mascota: ");
    scanf(" %s", &mascotas[topeMascotas].nombre);
    printf("\nIngrese la fecha de nacimiento de la mascota con formato dia, mes, año: ");
    scanf(" %d %d %d", &mascotas[topeMascotas].fechaNacimiento.dia, &mascotas[topeMascotas].fechaNacimiento.mes, &mascotas[topeMascotas].fechaNacimiento.anio);
    printf("\nIngrese el M si el sexo de la mascota es masculino y F si es femenino: ");
    scanf(" %c", &mascotas[topeMascotas].sexo);
    printf("\nIngrese el tipo de mascota: ");
    scanf(" %s", &mascotas[topeMascotas].tipo);
    mascotas[topeMascotas].activo = true;
    topeMascotas++;
    nSocio++;
}
void imprimirMacotas(Mascota mascotas[], int nSocio){
    for (int i = 0; i<=nSocio; i++){
        if(i==nSocio){
            printf("\nEl numero de socio de la mascota es: %d", mascotas[i].nSocio);
            printf("\nEl nombre de la mascota es: %s", mascotas[i].nombre);
            printf("\nLa fecha de nacimiento es: %d/%d/%d", mascotas[i].fechaNacimiento.dia, mascotas[i].fechaNacimiento.mes, mascotas[i].fechaNacimiento.anio);
            printf("\nEl sexo de la mascota es: %c", mascotas[i].sexo);
            printf("\nEl tipo de la mascota es: %s", mascotas[i].tipo);
        }
    }
}
void agregarConsultaMascota(Mascota mascotas[], int nSocio){
    bool encontre=false;
    int i=0;
    while(!encontre){
        if(nSocio==mascotas[i].nSocio){
            encontre=true;
        }else{
            i++;
        }
    }
    printf("\nIngrese la fecha de la consulta con el formato dia, mes año: ");
    scanf(" %d %d %d", &mascotas[i].consulta[mascotas[i].topeConsulta].fecha.dia, &mascotas[i].consulta[mascotas[i].topeConsulta].fecha.mes, &mascotas[i].consulta[mascotas[i].topeConsulta].fecha.anio);
    printf("\nIngrese la descripcion de la consulta: ");
    scanf(" %s", &mascotas[i].consulta[mascotas[i].topeConsulta].descripcion);
    mascotas[i].topeConsulta++;
}
bool existeMascota(Mascota mascotas[], int nSocio){
    bool encontre=false;
    int i=0;
    while (!encontre){
        if (mascotas[i].nSocio==nSocio){
            encontre=true;
            return encontre;
        }else{
            i++;
        }
    }
    return encontre;
}
bool estaActivaMascota(Mascota mascotas[], int nSocio){
    if(mascotas[nSocio].activo==true){
        return true;
    }else{
        return false;
    }
}
void desactivarMascota(Mascota mascotas[], int nSocio){
    if(mascotas[nSocio].activo==true){
        mascotas[nSocio].activo=false; 
    }else{
        printf("La mascota ya estaba desactivada");
    }
}
void imprimirUltimoConsultaMascota(Mascota mascotas[], int nSocio){
    printf("\nEl id de la mascota es: %d", mascotas[nSocio].nSocio);
    printf("\nEl nombre de la mascota es: %s", mascotas[nSocio].nombre);

    if (mascotas[nSocio].topeConsulta == 0) {
        printf("\nNo hay consultas para esta mascota.\n");
        return;
    }

    int ultimaConsultaIndice = 0;
    for (int i = 1; i < mascotas[nSocio].topeConsulta; i++) {
        if (mascotas[nSocio].consulta[i].fecha.anio >= mascotas[nSocio].consulta[ultimaConsultaIndice].fecha.anio && mascotas[nSocio].consulta[i].fecha.mes >= mascotas[nSocio].consulta[ultimaConsultaIndice].fecha.mes && mascotas[nSocio].consulta[i].fecha.dia > mascotas[nSocio].consulta[ultimaConsultaIndice].fecha.dia) {
            ultimaConsultaIndice = i;
        }
    }
    printf("\nLa última consulta fue el: %d/%d/%d\n", mascotas[nSocio].consulta[ultimaConsultaIndice].fecha.dia, mascotas[nSocio].consulta[ultimaConsultaIndice].fecha.mes, mascotas[nSocio].consulta[ultimaConsultaIndice].fecha.anio);
}
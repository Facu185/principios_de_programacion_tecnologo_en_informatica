//Programa que modela un estacionamiento el cual guarda autos con su matricula, dia y hora de entrada, dia y hor de salida, telefono de contacto. Habran 50 lugares pero se estima que va a crecer. De cada lugar de estaciomnamiento se quiere tenerun historial de 30 autos.
#include <stdio.h>
//Estructura de dia y hora de entrada y salida
struct DiaHoraEntradaSalida{
    int dia;
    int mes;
    int anio;
    int horaEntrada;
    int horaSlida;
};
//Estructura de autos.
struct Auto{
    char matricula[8];
    DiaHoraEntradaSalida diaHoraEntrada;
    DiaHoraEntradaSalida diaHoraSalida;
};
//Estructura del estacionamiento.
struct Estacionamiento{
    bool ocupado;
    Auto fechaAuto[29];
    int topeFechaAuto;
};
//Funcion para ingresar vehiculo.
void ingresarVehiculo(Estacionamiento estacionamientos[100], int posicionLibre);
//Funcion para salida de vehiculo.
void salidaVehiculo(Estacionamiento estacionamientos[100], int matricula);
//Funvion para listar lugares donde estuvo estacionado el vehiculo dada la matricula.
void listarEstacionamientosDeUnvehiculo(Estacionamiento estacionamientos[100], int matricula);
//Funcion para listar las posiciones libres del estacinamiento.
void poscionesLibresEstacionamiento(Estacionamiento estacionamientos[100], int &posicionLibre);

main(){
    Estacionamiento estacionamientos[100];
    int topeEstacionamiento=1, posicionLibre;
    poscionesLibresEstacionamiento(estacionamientos, posicionLibre);
    printf("%d", posicionLibre);
    
}

void poscionesLibresEstacionamiento(Estacionamiento estacionamientos[100], int &posicionLibre){
    int iterador=1;
    bool encontre=false;

    estacionamientos[1].ocupado==true;
    while(iterador<100 && !encontre){
        if(estacionamientos[iterador].ocupado==false){
            posicionLibre=iterador;
            encontre=true;
        }else{
            iterador++;
        }
    }
}

void ingresarVehiculo(Estacionamiento estacionamientos[100], int posicionLibre){
    estacionamientos[posicionLibre].ocupado=true;
    estacionamientos[posicionLibre].fechaAuto[estacionamientos[posicionLibre].topeFechaAuto].diaHoraEntrada.dia=12;
    estacionamientos[posicionLibre].fechaAuto[estacionamientos[posicionLibre].topeFechaAuto].diaHoraEntrada.mes=5;
    estacionamientos[posicionLibre].fechaAuto[estacionamientos[posicionLibre].topeFechaAuto].diaHoraEntrada.anio=2024;
    estacionamientos[posicionLibre].fechaAuto[estacionamientos[posicionLibre].topeFechaAuto].diaHoraEntrada.horaEntrada=12;
   /*  estacionamientos[posicionLibre].fechaAuto[estacionamientos[posicionLibre].topeFechaAuto].matricula="aai1680" */;
    estacionamientos[posicionLibre].topeFechaAuto++;
}
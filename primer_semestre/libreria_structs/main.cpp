//Programa que modela una libreria mediantes structs.
#include <stdio.h>
#include <string.h>
//Estructura de fecha.
struct Fecha{
    int dia;
    int mes; 
    int anio;
};
//Estructura de Autores.
struct Autor{
    char nombre[50];
    char apellido[50];
    int id;
};
//Estructruea de libros encuadrnados.
struct Libro{
    bool esDigital;
    char nombreLibro[50];
    Autor Autores[5];
    char generoLibro[50];
    int cantidadPaginas;
    char rutaServidor[50];
    int cantLibros;
};
//Estructura de historial de prestamos.
struct Historial{
    bool devuelto;
    int id;
    Fecha fechaPrestamo;
    Fecha fechaDevolucion;
    Fecha fechaIngresoSalaDigital;
};
//Estructura de usuarios.
struct Usuario{
    char nombre[50];
    char apellido[50];
    int ci;
    Historial historico[50];
    int topeHistorico;
};
//Estructura libreria.
struct Libreria{
    Libro libros[500];
    Usuario usuraios[100];
    int topeLibros;
    int topeUsuarios;
};
//Funcion para registrar libro.
void registrarLibro(Libreria &libreria);
//Funcion pare registrar un usuario.
void registrarUsuario(Libreria &libreria);
//Funcion para prestar un libro.
void prestarLibro(Libreria &libreria);
//Funcion para devoler un libro.
void devolverLibro(Libreria &libreria);
//Funcion que dada la cedula de un usuario te retorna la fecha el ultimo libro encuadernado devuelto.
Fecha fechaEntregaUltimoLibro(Libreria &libreria, int cedula);

main(){
    Libreria libreria;
    libreria.topeLibros = 0;
    libreria.topeUsuarios = 0;
    libreria.libros[libreria.topeLibros].cantLibros = 0;
    libreria.usuraios[libreria.topeUsuarios].topeHistorico = 0;
    bool salir = false;
    while(!salir){
        printf("1. Registrar libro.\n");
        printf("2. Registrar usuario.\n");
        printf("3. Prestar libro.\n");
        printf("4. Devolver libro.\n");
        printf("5. Fecha de entrega del ultimo libro.\n");
        printf("6. Salir.\n");
        int opcion;
        scanf(" %d", &opcion);
        switch(opcion){
            case 1:
                registrarLibro(libreria);
                break;
            case 2:
                registrarUsuario(libreria);
                break;
            case 3:
                prestarLibro(libreria);
                break;
            case 4:
                devolverLibro(libreria);
                break;
            case 5:
                printf("Ingrese la cedula del usuario.\n");
                int cedula;
                scanf(" %d", &cedula);
                Fecha fecha;
                fecha=fechaEntregaUltimoLibro(libreria, cedula);
                printf("La fecha de entrega del libro es %d/%d/%d.\n", fecha.dia, fecha.mes, fecha.anio);
                break;
            case 6:
                salir = true;
                break;
        }
    }
}

void registrarLibro(Libreria &libreria){
    printf("Ingrese el nombre del libro.\n");
    scanf(" %s", libreria.libros[libreria.topeLibros].nombreLibro);
    printf("Ingrese la cantidad de autores del libro.\n");
    int cantAutores;
    scanf(" %d", &cantAutores);
    for(int i = 0; i < cantAutores; i++){
        printf("Ingrese el nombre del autor %d.\n", i+1);
        scanf(" %s", libreria.libros[libreria.topeLibros].Autores[i].nombre);
        printf("Ingrese el apellido del autor %d.\n", i+1);
        scanf(" %s", libreria.libros[libreria.topeLibros].Autores[i].apellido);
        libreria.libros[libreria.topeLibros].Autores[i].id=i;
    }
    printf("Ingrese el genero del libro.\n");
    scanf(" %s", libreria.libros[libreria.topeLibros].generoLibro);
    printf("Ingrese la cantidad de paginas del libro.\n");
    scanf(" %d", &libreria.libros[libreria.topeLibros].cantidadPaginas);
    printf("El libro es digital presione s/S para si o n/N para no.\n");
    char digital;
    scanf(" %c", &digital);
    if(digital == 's' || digital == 'S'){
        libreria.libros[libreria.topeLibros].esDigital = true;
        printf("Ingrese la ruta del servidor del libro.\n");
        scanf(" %s", libreria.libros[libreria.topeLibros].rutaServidor);
    }else{
        libreria.libros[libreria.topeLibros].esDigital = false;
        printf("Ingrese la cantidad de libros que tiene en la libreria.\n");
        scanf(" %d", &libreria.libros[libreria.topeLibros].cantLibros);
    }
    printf("Libro registrado con exito.\n");
    libreria.topeLibros++;
}

void registrarUsuario(Libreria &libreria){
    printf("Ingrese el nombre del usuario.\n");
    scanf(" %s", &libreria.usuraios[libreria.topeUsuarios].nombre);
    printf("Ingrese el apellido del usuario.\n");
    scanf(" %s", &libreria.usuraios[libreria.topeUsuarios].apellido);
    printf("Ingrese la cedula del usuario.\n");
    scanf(" %d", &libreria.usuraios[libreria.topeUsuarios].ci);
    printf("Usuario registrado con exito.\n");
    libreria.topeUsuarios++;
}

void prestarLibro(Libreria &libreria){
    printf("Ingrese la cedula del usuario.\n");
    int cedula;
    scanf(" %d", &cedula);
    int i=0;
    bool encontre=false;
    while(!encontre && i<=libreria.topeUsuarios){
        if(libreria.usuraios[i].ci==cedula){
            printf("Ingrese s/S si el libro es digital o n/N si es fisico.\n");
            char digital;
            scanf(" %c", &digital);
            if(digital == 'n' || digital == 'N'){
                printf("Ingrese el id del libro.\n");
                int id;
                scanf(" %d", &id);
                libreria.usuraios[i].historico[libreria.usuraios[i].topeHistorico].id = id;
                libreria.usuraios[i].historico[libreria.usuraios[i].topeHistorico].devuelto = true;
                printf("Ingrese el dia, mes y año de la fecha de entrega.\n");
                int dia, mes, anio;
                scanf(" %d %d %d", &dia, &mes, &anio);
                libreria.usuraios[i].historico[libreria.usuraios[i].topeHistorico].fechaIngresoSalaDigital.dia = dia;
                libreria.usuraios[i].historico[libreria.usuraios[i].topeHistorico].fechaIngresoSalaDigital.mes = mes;
                libreria.usuraios[i].historico[libreria.usuraios[i].topeHistorico].fechaIngresoSalaDigital.anio = anio;
                libreria.usuraios[i].topeHistorico++;
            }else{
                printf("Ingrese el id del libro.\n");
                int id;
                scanf(" %d", &id);
            }
            printf("Libro prestado con exito.\n");
            encontre=true;
        }else{
            i++;
        }
        
    }
}

void devolverLibro(Libreria &libreria){
    printf("Ingrese la cedula del usuario.\n");
    int cedula;
    scanf(" %d", &cedula);
    int i=0;
    bool encontre=false;
    while(!encontre && i<=libreria.topeUsuarios){
        if(libreria.usuraios[i].ci==cedula){
            printf("Ingrese s/S si el libro es digital o n/N si es fisico.\n");
            char digital;
            scanf(" %c", &digital);
            if(digital == 'n' || digital == 'N'){
               printf("Ingrese el id del libro.\n");
                int id;
                scanf(" %d", &id);
                printf("Ingrese el dia, mes y año de la fecha de entrega.\n");
                scanf(" %d %d %d", &libreria.usuraios[i].historico[libreria.usuraios[i].topeHistorico].fechaDevolucion.dia , &libreria.usuraios[i].historico[libreria.usuraios[i].topeHistorico].fechaDevolucion.mes, &libreria.usuraios[i].historico[libreria.usuraios[i].topeHistorico].fechaDevolucion.anio);
                libreria.usuraios[i].historico[libreria.usuraios[i].topeHistorico].id = id;
                libreria.usuraios[i].historico[libreria.usuraios[i].topeHistorico].devuelto = true;
                for(int j=0; j<libreria.topeLibros; j++){
                    if(id == j){
                        libreria.libros[j].cantLibros++;
                    }
                }
                printf("Libro devuelto con exito.\n");
            }else{
                printf("El libro no necesita ser devuelto.\n");
            }
            encontre=true;
        }else{
            i++;
        }
        
    }
}

Fecha fechaEntregaUltimoLibro(Libreria &libreria, int cedula){
    bool encontre=false;
    int i=0;
    while(!encontre && i<=libreria.topeUsuarios){
        if(cedula==libreria.usuraios[i].ci){
            printf("La fecha de entrega del ultimo libro es: %d", libreria.usuraios[i].historico[libreria.usuraios[i].topeHistorico-1].fechaDevolucion.dia);
            return libreria.usuraios[i].historico[libreria.usuraios[i].topeHistorico].fechaDevolucion;
        }else{
            i++;
        }
    }
}
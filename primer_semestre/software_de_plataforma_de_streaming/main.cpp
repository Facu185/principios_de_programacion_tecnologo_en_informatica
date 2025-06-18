//Programa que simula el software de una platforma de streaming, donde se requiere, registar usuarios, registar actores de la pelicula o serie, registrar una pelicula o serie, vizualizar serie o pelicula por un usuario registrado, dar de baja pelicula o serie, calificar pelicula o serie por un usuario registrado, mostrar la cantidad de visulizaciones de ese usuario, listar las peliculas o series visualizada por el usuario, sugerir pelicula o serie  segun el genero que mas visualizo y que ya no haya visto esa pelicola o serie.
#include <stdio.h>
#include <string.h>
struct Fecha{
    int dia;
    int mes;
    int anio;
};
struct Usuario{
    char nombre[25];
    char correo[25];
    Fecha fechaNacimiento;
    bool activo;
    char contrasenia[25];
};
struct Artista{
    char nombre[25];
    char apellido[25];
    char sexo;
    int id;
};
struct Vizualisacion{
    char correo[25];
    int puntuacion;
    int cantidad;
};
struct Capitulo{
    char descripcion[25];
    int duracion;
    char rutaCapitulos[25];
};
struct Contenido{
    bool esPelicula;
    char nombre[25];
    Artista artistas[25];
    int topeArtista;
    int id;
    char genero[10];
    char descripcion[25];
    int cantVisualizaciones;
    int edadMinima;
    Vizualisacion visualizaciones[50];
    int topeVisualizaciones;
    bool activo;
    char rutaPelicula[25];
    Capitulo capitulos[50];
    int topeCapitulos;
};
//Funcion para registrar un usuario a la plataforma.
void registrarUsuario(Usuario usuarios[50], int &topeUsuarios);
//Funcion para registrar un actor en una plataforma.
void registrarArtistas(Artista artistas[50], int &topeArtistas);
//Funcion para registrar una nueva pelicula o serie.
void registrarPeliculaSerie(Contenido contenidos[50], int &topeContenidos, Artista artistas[50], int &topeArtistas);
//Funcion para visualizar pelicula o serie.
void verSeriePelicula(Contenido contenidos[50], int peliculaSelecionada, Usuario usuarios[50], int topeUsuarios);
//Funcion para dar de baja una serie o pelicula.
void darDeBajaPelicula(Contenido  contenidos[50], int peliculaSeleccionada);
//Funcion para calificar una pelicula.
void calificarPelicula(Contenido contenidos[50], int peliculaSeleccionada, Usuario usuarios[50], int topeUsuarios);
//Funcion para mostrar las vizualicaciones de un usuario a una pelicula o serie.
void cantidadVisualizacionPeliculaSerie(Contenido contenidos[50], int peliculaSeleccionada);
//Funcion para listar las peliculas o series de un actor dado el nombre del actor.
void listarPeliculasActor(Artista artistas[50], Contenido contenidos[50], char nombreActor[25]);
//Funcion peliculas o series visualizadas por un usuario.
void peliculaVisualizadaPorUsuario(Vizualisacion visualizaciones[50]);
//Funcion para sugerir pelicula o serie a un usuario segun el genero que mas viualizo.
void sugerirPeliculaSerie(Contenido contenidos[50], Vizualisacion visualizaciones[50], Usuario usuarios[50]);

main(){
    Usuario usuarios[50];
    Artista artistas[50];
    Contenido contenidos[50];
    int topeUsuarios=0, topeArtistas=0, topeContenidos=0;
    registrarUsuario(usuarios, topeUsuarios);
    registrarArtistas(artistas, topeArtistas);
    registrarPeliculaSerie(contenidos, topeContenidos, artistas, topeArtistas);
    printf("Ingrese el id de la pelicula o serie que desea visualizar: ");
    int peliculaSelecionada;
    scanf(" %d", &peliculaSelecionada);
    verSeriePelicula(contenidos, peliculaSelecionada, usuarios, topeUsuarios);
}

void registrarUsuario(Usuario usuarios[50], int &topeUsuarios){
    printf("\nIngrese el correo electronico: ");
    char correoElectronico[25];
    scanf(" %s", correoElectronico);
    bool encontre = false;
    int iterador = 0;
    while (!encontre && iterador<topeUsuarios){
        if(strcpy(correoElectronico, usuarios[iterador].correo)==0){
            encontre=true;
        }else{
            iterador++;
        }
    }
    if (encontre){
        printf("\nEl correo electronico ya existe en la plataforma, registre uno nuevo o ingrese con este.");
    }else{
        strcpy(usuarios[topeUsuarios].correo, correoElectronico);
        printf("\nIngrese su nombre: ");
        scanf(" %s", usuarios[topeUsuarios].nombre);
        printf("\nIngrese su fecha de nacimiento con formato dia, mes, año: ");
        scanf(" %d %d %d", &usuarios[topeUsuarios].fechaNacimiento.dia, &usuarios[topeUsuarios].fechaNacimiento.mes, &usuarios[topeUsuarios].fechaNacimiento.anio);
        usuarios[topeUsuarios].activo=true;
        printf("\nIngrese la contraseña: ");
        scanf( " %s", usuarios[topeUsuarios].contrasenia);
        topeUsuarios++;
    }
}
void registrarArtistas(Artista artistas[50], int &topeArtistas){
    printf("\nIngrese el nombre del artista: ");
    scanf(" %s", artistas[topeArtistas].nombre);
    printf("\nIngrese el apellido del artista: ");
    scanf(" %s", artistas[topeArtistas].apellido);
    printf("\nIngrese el sexo del actor: ");
    scanf(" %c", &artistas[topeArtistas].sexo);
    artistas[topeArtistas].id++;
    topeArtistas++;
}
void registrarPeliculaSerie(Contenido contenidos[50], int &topeContenidos, Artista artistas[50], int &topeArtistas){
    printf("\nIngrese el nombre de la pelicula o serie: ");
    scanf(" %s", contenidos[topeContenidos].nombre);
    printf("\nIngrese la cantidad de artistas que participan en la pelicula o serie: ");
    int art;
    scanf(" %d", &art);
    for (int i=0; i<art; i++){
        registrarArtistas(artistas, topeArtistas);
    }
    printf("\nIngrese el genero de la pelicula o serie: ");
    scanf(" %s", contenidos[topeContenidos].genero);
    contenidos[topeContenidos].cantVisualizaciones=0;
    printf("\nIngrese la edad minima para poder ver la pelicula o serie: ");
    scanf(" %d", &contenidos[topeContenidos].edadMinima);
    contenidos[topeContenidos].activo=true;
    printf("\nSi es una pelicula ingrese P si es una serie ingrese S: ");
    char seleccion;
    scanf(" %c", &seleccion);
    if (seleccion=='p' || seleccion=='P'){
        contenidos[topeContenidos].esPelicula=true;
        printf("\nIngrese la ruta de la pelicula en el servidor: ");
        scanf(" %s", contenidos[topeContenidos].rutaPelicula);
        printf("\nIngrese la duracion de la pelicula: ");
        scanf(" %d", &contenidos[topeContenidos].capitulos[contenidos[topeContenidos].topeCapitulos].duracion);
        printf("\nIngrese la descripcion de la pelicula: ");
        scanf(" %s", contenidos[topeContenidos].capitulos[contenidos[topeContenidos].topeCapitulos].descripcion);
    }else{
        printf("\nIngrese la cantidad de capitulos: ");
        int cap;
        scanf(" %d", &cap);
        for (int i=1; i<=cap; i++){
            printf("\nIngrese la ruta del capitulo %d en el servidor: ", i);
            scanf(" %s", contenidos[topeContenidos].capitulos[contenidos[topeContenidos].topeCapitulos].rutaCapitulos);
            printf("\nIngrese la duracion del capitulo %d: ", i);
            scanf(" %d", &contenidos[topeContenidos].capitulos[contenidos[topeContenidos].topeCapitulos].duracion);
            printf("\nIngrese la descripcion del capitulo %d: ", i);
            scanf(" %s", contenidos[topeContenidos].capitulos[contenidos[topeContenidos].topeCapitulos].descripcion);
        }
        contenidos[topeContenidos].capitulos[contenidos[topeContenidos].topeCapitulos++];
    }
    topeContenidos++;
}
void verSeriePelicula(Contenido contenidos[50], int peliculaSelecionada, Usuario usuarios[50], int topeUsuarios){
    char correo[25];
    printf("\nIngrese su correo electronico: ");
    scanf(" %s", &correo);
    int i=0;
    bool encontre=false;
    while(i<=topeUsuarios && !encontre){
        if (strcmp(usuarios[i].correo, correo)==0){
            printf("\nNombre: %s", contenidos[peliculaSelecionada].nombre);
            printf("\nArtistas: ");
            for (int i = 0; i <=contenidos[peliculaSelecionada].topeArtista; i++){
               printf("\n%s %s", contenidos[peliculaSelecionada].artistas[i].nombre, contenidos[peliculaSelecionada].artistas[i].apellido);
            }
            printf("\nEl genero es: %s", contenidos[peliculaSelecionada].genero);
            printf("\nDescripcion: %s", contenidos[peliculaSelecionada].descripcion);
            printf("\nCantidad de vizualizaciones: %d", contenidos[peliculaSelecionada].cantVisualizaciones);
            contenidos[peliculaSelecionada].cantVisualizaciones++;
            printf("\nEdad minima: %d", contenidos[peliculaSelecionada].edadMinima);   
            strcpy(contenidos[peliculaSelecionada].visualizaciones[contenidos[peliculaSelecionada].topeVisualizaciones].correo, usuarios[i].correo);
            contenidos[peliculaSelecionada].visualizaciones[contenidos[peliculaSelecionada].topeVisualizaciones].cantidad++;
            if(!contenidos[peliculaSelecionada].esPelicula){
                for(int i=0; i<=contenidos[peliculaSelecionada].topeCapitulos; i++){
                    printf("\nVer capitulo: %d", i);
                    printf("\nLa duracion del capitulo es: %d", contenidos[peliculaSelecionada].capitulos[i].duracion);
                    printf("\nLa descripcion del capitulo es: %s", contenidos[peliculaSelecionada].capitulos[i].descripcion);
                    printf("\nIngrese del 1 al 5 la calificacion para la el capitulo.");
                    scanf(" %d", &contenidos[peliculaSelecionada].visualizaciones[contenidos[peliculaSelecionada].topeVisualizaciones].puntuacion);
                }
            }else{
                printf("\nIngrese del 1 al 5 la calificacion para la pelicula.");
                scanf(" %d", &contenidos[peliculaSelecionada].visualizaciones[contenidos[peliculaSelecionada].topeVisualizaciones].puntuacion);
            }     
            contenidos[peliculaSelecionada].topeVisualizaciones++;
            encontre=true;
        }else{
            i++;
        }
    }  
}
void darDeBajaPelicula(Contenido  contenidos[50], int peliculaSeleccionada){
    contenidos[peliculaSeleccionada].activo=false;
    printf("\nPelicula dada de baja con exito.");
}
void calificarPelicula(Contenido contenidos[50], int peliculaSeleccionada, Usuario usuarios[50], int topeUsuarios){
    char correo[25];
    printf("\nIngrese su correo electronico: ");
    scanf(" %s", &correo);
    int i=0;
    bool encontre=false;
    while(i<=topeUsuarios && !encontre){
        if (strcmp(usuarios[i].correo, correo)==0){
            if(!contenidos[i].esPelicula){
                for(int j=0; j<=contenidos[i].topeCapitulos; j++){
                    printf("\nCalificar capitulo: %d", j);
                    printf("\nIngrese del 1 al 5 la calificacion para el capitulo.");
                    scanf(" %d", &contenidos[peliculaSeleccionada].visualizaciones[j].puntuacion);
                }
            }else{
                printf("\nIngrese del 1 al 5 la calificacion para la pelicula.");
                scanf(" %d", &contenidos[peliculaSeleccionada].visualizaciones[contenidos[peliculaSeleccionada].topeVisualizaciones].puntuacion);
            }
            encontre=true;
            contenidos[peliculaSeleccionada].topeVisualizaciones++;
        }else{
            i++;
        }
    }
}
void cantidadVisualizacionPeliculaSerie(Contenido contenidos[50], int peliculaSeleccionada){
    printf("\nLa cantidad de visualizaciones es: %d", contenidos[peliculaSeleccionada].cantVisualizaciones);
}
void listarPeliculasActor(Artista artistas[50], Contenido contenidos[50], char nombreActor[25]){
    
}
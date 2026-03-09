#ifndef PELICULA_H
#define PELICULA_H

#define MAX_DIRECTORES 10

typedef struct{
    char *nombre;
    char *genero;
    short year;
    char *directores[MAX_DIRECTORES];
    short numDirectores;
} Pelicula;

Pelicula* crearPelicula(const char *nombre,const char *genero,short year);
void imprimir(Pelicula *p);
void cambiarGenero(Pelicula *p,const char *nuevoGenero);
void agregarDirector(Pelicula *p,const char *director);
void destruir(Pelicula *p);

#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pelicula.h"

char* copiarCadena(const char *s){
    char c = (char)malloc(strlen(s)+1);
    strcpy(c,s);
    return c;
}

Pelicula* crearPelicula(const char *nombre,const char *genero,short year){

    Pelicula p = (Pelicula)malloc(sizeof(Pelicula));

    p->nombre = copiarCadena(nombre);
    p->genero = copiarCadena(genero);
    p->year = year;
    p->numDirectores = 0;

    return p;
}

void agregarDirector(Pelicula *p,const char *director){

    if(p->numDirectores < MAX_DIRECTORES){
        p->directores[p->numDirectores] = copiarCadena(director);
        p->numDirectores++;
    }
}

void cambiarGenero(Pelicula *p,const char *nuevoGenero){

    free(p->genero);
    p->genero = copiarCadena(nuevoGenero);
}

void imprimir(Pelicula *p){

    printf("Pelicula: %s\n",p->nombre);
    printf("Genero: %s\n",p->genero);
    printf("Año: %d\n",p->year);

    printf("Directores:\n");

    for(int i=0;i<p->numDirectores;i++)
        printf("%s\n",p->directores[i]);
}

void destruir(Pelicula *p){

    free(p->nombre);
    free(p->genero);

    for(int i=0;i<p->numDirectores;i++)
        free(p->directores[i]);

    free(p);
}

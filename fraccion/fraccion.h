#ifndef FRACCION_H
#define FRACCION_H

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num;
    int den;
} Fraccion;

Fraccion* crearFraccion(int num, int den);
void simplificar(Fraccion* f);
Fraccion* sumar(Fraccion* f1, Fraccion* f2);
void imprimir(Fraccion* f);
void destruir(Fraccion* f);
int mcd(int a, int b);

#endif

#include "fraccion.h"

int main() {
    Fraccion* f1 = crearFraccion(1, 2); // 1/2
    Fraccion* f2 = crearFraccion(1, 4); // 1/4

    printf("Fraccion 1: ");
    imprimir(f1);
    printf("Fraccion 2: ");
    imprimir(f2);

    Fraccion* suma = sumar(f1, f2);
    printf("Resultado de la suma: ");
    imprimir(suma);

    // Limpieza de memoria
    destruir(f1);
    destruir(f2);
    destruir(suma);

    return 0;
}

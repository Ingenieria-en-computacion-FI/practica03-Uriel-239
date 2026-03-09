#include "pelicula.h"

int main(){

    Pelicula *p;

    p = crearPelicula("Inception","Ciencia Ficcion",2010);

    agregarDirector(p,"Christopher Nolan");

    imprimir(p);

    cambiarGenero(p,"Thriller");

    imprimir(p);

    destruir(p);

    return 0;
}

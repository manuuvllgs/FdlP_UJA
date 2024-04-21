// @author Manuel Villegas Aceituno
// @file practica10ej1.cpp
// @date 4-dic-2023
// @desc Escribe  una  función  que  tome  como  parámetros  dos  punteros  a  datos  del  mismo  tipo  e
// intercambie  el  contenido  de  las  zonas  de  memoria  a  las  que  apuntan  los  punteros.  Es  decir,
// la  función  debe  intercambiar  a  sus  dos  parámetros---recibidos  por  referencia  mediante sintaxis
// de paso de punteros.

#include <iostream>

using namespace std;

void intercambiarPuntero(int *p1, int *p2) {
    int aux;
    aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}

int main() {
    int *num1 = new int;
    int *num2 = new int;
    *num1 = 9;
    *num2 = 2;

    intercambiarPuntero(num1, num2);

    cout << *num1 << " " << *num2;

    delete num1;
    delete num2;


    return 0;
}



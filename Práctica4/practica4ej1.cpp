// @author Manuel Villegas Aceituno
// @file practica4ej1.cpp - PRÁCTICA VECTORES Y MATRICES
// @date 16-oct-2023
// @desc Escribe  un  programa  que  lea  de  la  entrada  estándar  una  serie  de  números  y  los  almacene  en  un
// vector.  Una  vez  rellenado  el  vector  con  los  números  leídos,  muestre  en  la salida estándar los números
// del vector con sus índices asociados.

#include <iostream>

using namespace std;

const int VALOR_MAX = 30;

int main() {

    float v[VALOR_MAX];
    int i, valor;

    cout << "¿Cuantos valores desea que formen el vector? (valor maximo 30): ";
    cin >> valor;

    for (i = 0; i < valor; ++i) {
        cout << "Introduzca el valor de la posición " << i + 1 << ":";
        cin >> v[i];
    }

    for (i = 0; i < valor; ++i) {
        cout << "El valor que ocupa la posición " << i + 1 << " es: " << v[i] << endl;
    }


    return 0;
}
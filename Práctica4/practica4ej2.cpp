// @author Manuel Villegas Aceituno
// @file practica4ej2.cpp - PRÁCTICA VECTORES Y MATRICES
// @date 16-oct-2023
// @desc Escribe  un  programa  que  defina  un  vector  de  números  y  muestre  en  la  salida  estándar  el
// vector en orden inverso (es decir, del último al primer elemento).  Nota: tendrás que generar los índices en
// orden inverso para resolver el ejercicio.

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
    cout << endl;
    for (i = valor; i > 0; --i) {
        cout << "El valor que ocupa la posición " << i << " es: " << v[i - 1] << endl;
    }


    return 0;
}
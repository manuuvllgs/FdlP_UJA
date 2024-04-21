// @author Manuel Villegas Aceituno
// @file practica4ej3.cpp - PRÁCTICA VECTORES Y MATRICES
// @date 16-oct-2023
// @desc Escribe  un  programa  que  defina  un  vector  de  números  y  calcule  la  suma  de  sus  elementos.

#include <iostream>

using namespace std;

const int VALOR_MAX = 150;

int main() {

    float v[VALOR_MAX];
    int i, valor;
    float suma = 0;

    cout << "¿Cuantos valores desea que formen el vector? (valor maximo 150): ";
    cin >> valor;

    for (i = 0; i < valor; ++i) {
        cout << "Introduzca el valor de la posición " << i + 1 << ":";
        cin >> v[i];
    }
    cout << endl;
    for (i = 0; i < valor; ++i) {
        suma = suma + v[i];
    }
    cout << "El valor de la suma de todos los elementos del vector es " << suma;

    return 0;
}
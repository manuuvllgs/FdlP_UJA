// @author Manuel Villegas Aceituno
// @file practica4ej7.cpp - PRÁCTICA VECTORES Y MATRICES
// @date 23-oct-2023
// @desc Escribe  un  programa  que  defina  un  vector  de  números  y  calcule  si  existe  algún  número  en el
// vector cuyo valor equivale a la suma del resto de números del vector.

#include <iostream>

using namespace std;

const int VALOR_MAX = 100;

int main() {
    float v[VALOR_MAX], num;
    int tam, i, j, l, validar = 0;
    float suma = 0;


    cout << "Introduzca la cantidad de numeros que quiere que formen el vector: ";
    cin >> tam;

    for (l = 0; l < tam; ++l) {
        cout << "Introduzca el componente de la posicion " << l + 1 << ": ";
        cin >> v[l];
    }

    for (i = 0; i < tam; ++i) {
        suma = suma + v[i];
    }

    for (j = 0; j < tam; ++j) {
        if (v[j] == suma - v[j]) {
            num = v[j];
            validar = 1;
        }
    }

    if (validar == 1) {
        cout << "El numero " << num << " es igual a la suma del resto de componentes del vector.";
    } else {
        cout << "No hay ningun numero en el vector cuya suma del resto de valores del vector sea igual a su valor.";
    }


    return 0;
}
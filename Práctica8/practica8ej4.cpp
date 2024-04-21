// @author Manuel Villegas Aceituno
// @file practica8ej3.cpp
// @date 14-nov-2023
// @desc Realiza  una  función  que  tome  como  parámetros  un  vector  de  números  y  su  tamaño  y
// cambie el signo de los elementos del vector.

#include <iostream>

using namespace std;

const int TAM_MAX = 100;

void signoVector(int v[TAM_MAX], int tam_vector) {

    for (int i = 0; i < tam_vector; ++i) {
        v[i] = -v[i];
    }

}

int main() {
    int i = 0, v[TAM_MAX], tam_vector = 5;
    for (i; i < tam_vector; ++i) {
        cout << "Introduzca el valor de la posicion " << i + 1 << ": ";
        cin >> v[i];
    }

    signoVector(v, tam_vector);

    for (int j = 0; j < tam_vector; ++j) {
        cout << v[j] << ", ";
    }
}

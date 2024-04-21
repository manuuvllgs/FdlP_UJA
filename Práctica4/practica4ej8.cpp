// @author Manuel Villegas Aceituno
// @file practica4ej8.cpp - PRÁCTICA VECTORES Y MATRICES
// @date 23-oct-2023
// @desc Realiza  un  programa  que  defina  una  matriz  de  3x3  y  escriba  un  ciclo  para  que  muestre
// la diagonal principal de la matriz.

#include <iostream>

using namespace std;

const int FILAS_COLUMNAS = 3;

int main() {

    float v[FILAS_COLUMNAS][FILAS_COLUMNAS];
    int i, j;

    for (i = 0; i < FILAS_COLUMNAS; ++i) {
        for (j = 0; j < FILAS_COLUMNAS; ++j) {
            cout << "Introduzca el valor que ocupara la posicion " << j + 1 << ", " << i + 1 << ": ";
            cin >> v[j][i];
        }
    }

    cout << "La diagonal principal de la matriz es: " << v[0][0] << ", " << v[1][1] << ", " << v[2][2];


    return 0;
}
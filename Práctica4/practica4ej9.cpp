// @author Manuel Villegas Aceituno
// @file practica4ej9.cpp - PRÁCTICA VECTORES Y MATRICES
// @date 23-oct-2023
// @desc Realiza un programa que lea una matriz de 3x3 y cree su matriz traspuesta.  Nota:  La  matriz  traspuesta
// es  aquella  en  la  que  la  columna  i  era  la  fila  i  de  la  matriz  original.

#include <iostream>

using namespace std;

const int FILAS_COLUMNAS = 3;

int main() {

    float v[FILAS_COLUMNAS][FILAS_COLUMNAS],w[FILAS_COLUMNAS][FILAS_COLUMNAS];
    int i, j,n,l;

    for (i = 0; i < FILAS_COLUMNAS; ++i) {
        for (j = 0; j < FILAS_COLUMNAS; ++j) {
            cout << "Introduzca el valor que ocupara la posicion " << j + 1 << ", " << i + 1 << ": ";
            cin >> v[j][i];
        }
    }
    cout<<endl <<"Matriz introducida: " <<endl;

    cout<<v[0][0] <<" " <<v[0][1] <<" " <<v[0][2] <<endl;
    cout<<v[1][0] <<" " <<v[1][1] <<" " <<v[1][2] <<endl;
    cout<<v[2][0] <<" " <<v[2][1] <<" " <<v[2][2] <<endl;

    for (n = 0; n < FILAS_COLUMNAS; ++n) {
        for (l = 0; l < FILAS_COLUMNAS; ++l) {
            w[l][n]=v[n][l];
        }
    }

    cout<<endl <<"La matriz traspuesta de la introducida es: " <<endl;
    cout<<w[0][0] <<" " <<w[0][1] <<" " <<w[0][2] <<endl;
    cout<<w[1][0] <<" " <<w[1][1] <<" " <<w[1][2] <<endl;
    cout<<w[2][0] <<" " <<w[2][1] <<" " <<w[2][2] <<endl;

    return 0;
}
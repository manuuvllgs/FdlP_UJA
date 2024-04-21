// @author Manuel Villegas Aceituno
// @file practica4ej10.cpp - PRÁCTICA VECTORES Y MATRICES
// @date 23-oct-2023
// @desc   Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.

#include <iostream>

using namespace std;

const int FILAS_COLUMNAS = 3;

int main() {

    float v[FILAS_COLUMNAS][FILAS_COLUMNAS],w[FILAS_COLUMNAS][FILAS_COLUMNAS], p[FILAS_COLUMNAS][FILAS_COLUMNAS];
    int i, j,n,l;

    cout<<"Introduzca la primera matriz: " <<endl;
    for (i = 0; i < FILAS_COLUMNAS; ++i) {
        for (j = 0; j < FILAS_COLUMNAS; ++j) {
            cout << "Introduzca el valor que ocupara la posicion " << j + 1 << ", " << i + 1 << ": ";
            cin >> v[i][j];
        }
    }

    cout<<"Introduzca la segunda matriz: " <<endl;
    for (n = 0; n < FILAS_COLUMNAS; ++n) {
        for (l = 0; l < FILAS_COLUMNAS; ++l) {
            cout << "Introduzca el valor que ocupara la posicion " << l + 1 << ", " << n + 1 << ": ";
            cin >> w[n][l];
        }
    }

    for (i=0;i<FILAS_COLUMNAS;++i) {
        for (j=0;j<FILAS_COLUMNAS;++j){
            p[j][i]=v[j][i]+w[j][i];

        }

    }

    cout<<"La suma de las dos matrices es: " <<endl;

    cout<<endl <<"La suma de las dos matrices introducidas anteriormente es: " <<endl;
    cout<<"{" <<p[0][0] <<" " <<p[0][1] <<" " <<p[0][2] <<"}" <<endl;
    cout<<"{" <<p[1][0] <<" " <<p[1][1] <<" " <<p[1][2] <<"}" <<endl;
    cout<<"{" <<p[2][0] <<" " <<p[2][1] <<" " <<p[2][2] <<"}" <<endl;


    return 0;
}
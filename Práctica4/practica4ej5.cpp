// @author Manuel Villegas Aceituno
// @file practica4ej4.cpp - PRÁCTICA VECTORES Y MATRICES
// @date 16-oct-2023
// @desc Desarrolla  un  programa  que  inicie  un  vector  de  enteros  con  valores  leídos  de  la  entrada
// estándar y, a continuación, calcule el mayor elemento del vector.

#include <iostream>

using namespace std;

const int VALOR_MAX = 150;

int main() {

    float v[VALOR_MAX];
    float m[VALOR_MAX];
    int i, valor, l;
    float numero_mayor;

    cout << "¿Cuantos valores desea que formen el vector? (valor maximo 150): ";
    cin >> valor; cout<<endl;

    for (i = 0; i < valor; ++i) {
        cout << "Introduzca el valor de la posición " << i + 1 << ":";
        cin >> v[i];
        if (v[i]>v[i-1])
            numero_mayor = v[i];
    }
    cout<<endl <<"El numero mayor introducido es: " << numero_mayor;

    cout<<endl;

    return 0;
}
// @author Manuel Villegas Aceituno
// @file practica8ej3.cpp
// @date 14-nov-2023
// @desc Realiza  una  función  que  tome  como  parámetros  un  vector  de  enteros  y  su  tamaño  y  devuelva un
// vector con los elementos impares del vector recibido.

#include <iostream>

using namespace std;
const int TAM_MAX = 100;

void imparesVector(int v[TAM_MAX], int m[TAM_MAX], int tam_vector) {
    int j = 0,tam_vector2;

    for (int i = 0; i < tam_vector; ++i) {
        if (v[i] % 2 != 0) {
            m[j] = v[i];
            ++j;
        }
    }
}

int contadorImpares (int v [TAM_MAX],int tam_vector, int tam_vector2=0){
    for (int i=0; i <tam_vector; ++i){
        if (v[i]%2!=0){
            ++tam_vector2;
        }
    }
    return tam_vector2;
}

int main() {
    int i = 0, v[TAM_MAX], m[TAM_MAX], tam_vector = 6, tam_vector2;
    for (i; i < tam_vector; ++i) {
        cout << "Introduzca el valor de la posicion " << i + 1 << ": ";
        cin >> v[i];
    }

    imparesVector(v, m, tam_vector);
    tam_vector2 = contadorImpares(v,tam_vector,tam_vector2);


    for (int j = 0; j < tam_vector2 ; ++j) {
        cout << m[j] << ", ";
    }
}

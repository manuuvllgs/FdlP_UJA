// @author Manuel Villegas Aceituno
// @file practica8ej7.cpp
// @date 20-nov-2023
// @desc

#include <iostream>

using namespace std;

const int TAM_MAX=100;

/**
 * Descripción: ntercambia dos elementos de un vector.
 * @param num1
 * @param num2
 * Retorna el vector con los elementos cambiados.
 */

void intercambia(int &num1, int &num2) {
    int aux;
    aux = num1;
    num1 = num2;
    num2 = aux;
}

/* Descripción: Calcula la posición del menor elemento del vector entre dos posiciones
 Parámetros de entrada:
  - v: el vector
  - i: posición inicial
  - f: posición final
  Precondiciones: i <= f
  Valor de retorno: la posición del menor elemento del vector entre las posiciones [i,f]
  */

int minimo(int v[], int i, int f) {
    int pmin = i;
    for ( int j=i+1; i <= f; ++j) {
        if (v[j] < v[pmin]) {
            pmin = j;
        }
    }
    return pmin;
};

/**
 * Descripción: Función que ordena el vector.
 * @param v
 * @param tamv
 */

void seleccion(int v[], int tamv) {
    for (int i = 0; i < tamv - 1; ++i) {
        int posmin = minimo(v, i, tamv - 1);
        if (posmin != i)
            intercambia(v[i], v[posmin]);
    }
}

int main(){
    int v[TAM_MAX]={8,3,9,1,4,8,10};
    int tam_vector=7;

    seleccion(v,tam_vector);

    for (int i=0; i < tam_vector; ++i){
        cout<<v[i] <<", ";
    }
}



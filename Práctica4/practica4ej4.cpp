// @author Manuel Villegas Aceituno
// @file practica4ej4.cpp - PRÁCTICA VECTORES Y MATRICES
// @date 16-oct-2023
// @desc Escribe  un  programa  que  defina  un  vector  de  números  y  calcule  la  suma  acumulada  de  sus
// elementos.  Por  ejemplo,  si  el  vector  contiene  los  números  {1,3,2,7}  su  suma  acumulada  es
// {1,  1+3, 1+3+2, 1+3+2+7}, es decir, {1,4,6,13}.

#include <iostream>

using namespace std;

const int VALOR_MAX = 150;

int main() {

    float v[VALOR_MAX];
    float m[VALOR_MAX];
    int i, valor, l;
    float suma = 0;
    float acumulado = 0;

    cout << "¿Cuantos valores desea que formen el vector? (valor maximo 150): ";
    cin >> valor;

    for (i = 0; i < valor; ++i) {
        cout << "Introduzca el valor de la posición " << i + 1 << ":";
        cin >> v[i];
    }
    cout << endl;
    for (l = 0; l < valor; ++l) {
        for (i = 0; i <= l; ++i) {
            m[l] = m[l] + v[i];
        }
    }
    for (l = 0; l < valor; ++l) {
        cout << "El resultado es m[" << l+1 << "] = " << m[l] <<endl;
    }


    return 0;
}
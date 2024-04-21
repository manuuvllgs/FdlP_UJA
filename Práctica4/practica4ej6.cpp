// @author Manuel Villegas Aceituno
// @file practica4ej4.cpp - PRÁCTICA VECTORES Y MATRICES
// @date 16-oct-2023
// @desc Escribe  un  programa  que  defina  un  vector  de  números  enteros,  solicite  al  usuario  un  entero  y
// muestre  un  mensaje  en  la  salida  estándar  indicando  si  el  entero  introducido  por  el usuario se
// encuentra en el vector.

#include <iostream>

using namespace std;

const int VALOR_MAX = 150;

int main() {

    float v[VALOR_MAX];
    int i = 0;
    int num, pos, num2 = -1;

    for (i = 1; i < 150; ++i) {
        v[i] = rand() % 200;
    }
    cout << "Introduzca un numero entero para ver si se encuentra en el vector: ";
    cin >> num;

    for (i = 0; i < 150; ++i) {
        if (num - v[i] == 0) {
            pos = i;
            num2 = v[i];
        }
    }

    if (num2 != -1) {
        cout << "El numero introducido esta dentro del vector en la posicion v[" << pos << "] = " << num2;
    } else {
        cout << "El numero introducido no esta dentro del vector";
    }


    return 0;
}

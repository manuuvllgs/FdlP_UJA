// @author Manuel Villegas Aceituno
// @file practica5ej4.cpp - PRÁCTICA CADENAS DE CARACTERES
// @date 23-oct-2023
// @desc Escribe  un  programa  que  solicite  de  la  entrada  estándar  un  nombre  y  compruebe  si  el  nombre se
// encuentra o no en un vector iniciado con una serie de nombres.

#include <iostream>

using namespace std;

int main() {

    string nombres_incluidos = "Jose Manuel, Daniel, Víctor, Paco, Alberto";
    string nombre_solicitante;
    int j = 0, pos;

    cout << "Introduzca un nombre: ";
    cin >> nombre_solicitante;

    pos = nombres_incluidos.find(nombre_solicitante);

    if (pos != -1) {
        cout << "El nombre introducido se encuentra entre los usuarios permitidos.";
    } else {
        cout << "El nombre introducido no se encuentra entre los usuarios permitidos.";
    }


    return 0;
}
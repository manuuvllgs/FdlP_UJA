// @author Manuel Villegas Aceituno
// @file practica5ej3.cpp - PRÁCTICA CADENAS DE CARACTERES
// @date 23-oct-2023
// @desc Realiza  un  programa  igual  que  el  anterior,  pero  que  el  programa  muestre  la  línea  mayor  y
// menor en cuanto a su número de caracteres.

#include <iostream>

using namespace std;

int main() {

    string frase;
    string frase_mayor;
    string frase_menor;
    int i = 0;


    do {
        cout << "Introduzca una frase: ";
        getline(cin >> ws, frase);
        ++i;
        if (i == 1) {
            frase_mayor = frase;
            frase_menor = frase;
        }
        if (frase.length() > frase_mayor.length() && frase != "FIN") {
            frase_mayor = frase;
        }

        if (frase.length() <= frase_menor.length() && frase != "FIN") {
            frase_menor = frase;
        }
    } while (frase != "FIN");

    cout << "La frase con mayor numero de caracteres es: " << frase_mayor <<
         endl;
    cout << "La frase con menor numero de caracteres es: " << frase_menor <<
         endl;


    return 0;
}
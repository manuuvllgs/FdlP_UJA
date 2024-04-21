// @author Manuel Villegas Aceituno
// @file practica5ej6.cpp - PRÁCTICA CADENAS DE CARACTERES
// @date 23-oct-2023
// @desc Realiza  un  programa  como  el  del  ejercicio  anterior  pero  en  el  que  se  permitan  espacios
// en  blanco.  Este  programa  debe  reconocer  como  palíndromos  las  frases:  “  dabale  arroz  a  la zorra el
// abad'  ' y “l  a ruta nos aporto otro paso natural  '.


#include <iostream>

using namespace std;

int main() {

    string palabra, palabra_sin_espacios;
    int i = 0, validar = 0, j = 0;

    cout
            << "Introduzca una frase o palabra (sin mayúsculas,  ni  signos  de  puntuación ni tilde)";
    getline(cin >> ws, palabra);
    cout << endl;

    for (j; j < palabra.length(); ++j) {
        if (palabra[j] != ' ') {
            palabra_sin_espacios = palabra_sin_espacios + palabra[j];
        }

    }

    for (i = 0; i < palabra_sin_espacios.length(); ++i) {
        if (palabra_sin_espacios[i] == palabra_sin_espacios[palabra_sin_espacios.length() - 1 - i]) {
            ++validar;
        }
    }

    if (validar == palabra_sin_espacios.length()) {
        cout << "La palabra o frase introducida es un palíndromo";
    } else {
        cout << "La palabra o frase introducida no es un palíndromo";
    }

    cout<<endl;
    return 0;
}
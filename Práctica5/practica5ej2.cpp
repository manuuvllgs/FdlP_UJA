// @author Manuel Villegas Aceituno
// @file practica5ej2.cpp - PRÁCTICA CADENAS DE CARACTERES
// @date 23-oct-2023
// @desc Realiza  un  programa  que  lea  líneas  de  la  entrada  estándar  hasta  que  se  lea  una  línea
// cuyo  contenido  sea  la  cadena  FIN  .  El  programa  debe  mostrar  en  la  salida  estándar  la  línea mayor
// de las leídas y también la menor desde un punto de vista lexicográfico.

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
        if (frase > frase_mayor && frase != "FIN") {
            frase_mayor = frase;
        }

        if (frase <= frase_menor && frase != "FIN") {
            frase_menor = frase;
        }
    } while (frase != "FIN");

    cout << "La frase mayor lexicograficamente es: " << frase_mayor <<
         endl;
    cout << "La frase menor lexicograficamente es: " << frase_menor <<
         endl;


    return 0;
}

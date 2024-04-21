// @author Manuel Villegas Aceituno
// @file practica5ej5.cpp - PRÁCTICA CADENAS DE CARACTERES
// @date 23-oct-2023
// @desc Realiza  un  programa  que  lea  una  cadena  de  caracteres  e  indique  si  es  un  palíndromo.
// Un  palíndromo  es  una  frase  o  palabra  que  se  lee  igual  de  delante  hacia  atrás  que  de  atrás  hacia
// delante,  por  ejemplo:  reconocer  o  anilina.  Para  simplificar  se  supone  que  la  cadena  leída  no  contiene
// ni  mayúsculas,  ni  signos  de  puntuación,  ni  espacios  en  blanco  ni tildes.

#include <iostream>

using namespace std;

int main() {

    string palabra;
    int i = 0, validar = 0;

    cout
            << "Introduzca una frase o palabra (sin mayúsculas,  ni  signos  de  puntuación,  ni  espacios  en  blanco  ni tilde)";
    getline(cin >> ws, palabra);
    cout << endl;

    for (i = 0; i < palabra.length(); ++i) {
        if (palabra[i] == palabra[palabra.length()-1-i]) {
            ++validar;
        }
    }

    if (validar==palabra.length()) {
        cout << "La palabra o frase introducida es un palíndromo";
    } else {
        cout << "La palabra o frase introducida no es un palíndromo";
    }
    return 0;
}
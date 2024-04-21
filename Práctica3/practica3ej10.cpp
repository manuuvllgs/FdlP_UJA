// @author Manuel Villegas Aceituno
// @file practica3ej10.cpp - PRÁCTICA ESTRUCTURAS DE CONTROL
//CÍCLICAS
// @date 6-oct-2023
// @desc   Realiza  un  programa  que  lea  caracteres  desde  el  teclado  hasta  que  se  introduzca
// el  carácter  +  ó  -.  El  programa  debe  indicar  si  todos  los  caracteres  leídos,  excepto
// el  de  fin,  han sido vocales minúsculas o no.

#include <iostream>

using namespace std;

int main() {
    char a;
    int cont_letras = 0;

    do {
        cout << "Introduzca un caracter: ";
        cin >> a;
        if (!(a == 'a' || a == 'e' || a == 'o' || a == 'i' || a == 'u')) {
            ++cont_letras;
        }
    } while (!(a == '+' || a == '-'));

    if (cont_letras > 1) {
        cout << "Todos los caracteres introducidos no son vocales minusculas.";
    } else {
        cout << "Todos los caracteres introducidos son vocales minusculas.";
    }


    return 0;
}
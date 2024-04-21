// @file practica2ej7.cpp
// @author Manuel Villegas Aceituno
// @date 25-sep-2023
// @desc Ejercicio 7 de la relacion PRACTICA ESTRUCTURAS DE CONTROL CONDICIONALES

#include <iostream>
using namespace std;

int main (){

    // Le pedimos al usuario que introduzca un caracter

    char a;
    cout<< "Introduzca una letra: "; cin>>a;

    // Hacemos el bloque de codigo que determine si el caracter introducido es una vocal minuscula

    switch (a) {
    case 'a': case 'e': case 'i':case'o':case'u'
            :cout << "la letra " << a << " es una vocal minuscula"; break;

        case 'A': case 'E': case 'I':case'O':case'U'
            :cout << "la letra " << a << " es una vocal mayuscula"; break;

        default:
            cout << "La letra " << a << " no es una vocal"; break;
    }
    return 0;
}
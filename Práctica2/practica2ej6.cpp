// @file practica2ej6.cpp
// @author Manuel Villegas Aceituno
// @date 25-sep-2023
// @desc Ejercicio 6 de la relacion PRACTICA ESTRUCTURAS DE CONTROL CONDICIONALES


#include <iostream>
using namespace std;

int main (){

    // Le pedimos al usuario que introduzca un caracter

    char a;
    cout<< "Introduzca una letra: "; cin>>a;

    // Hacemos el bloque de codigo que determine si el caracter introducido es una vocal minuscula

    if (a == 'a'||a=='e'||a=='i'||a=='o'||a=='u'){
        cout<< "La letra " <<a << " es una vocal minuscula";
    }
    else {
        cout << "la letra " << a << " es una consonante o vocal mayuscula";
    }
    return 0;
}
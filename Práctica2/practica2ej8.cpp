// @file practica2ej8.cpp
// @author Manuel Villegas Aceituno
// @date 25-sep-2023
// @desc Ejercicio 8 de la relacion PRACTICA ESTRUCTURAS DE CONTROL CONDICIONALES

#include <iostream>
using namespace std;

int main(){

    // Le pedimos al usuario que introduzca una edad

    int a;
    cout<< "Introduzca la edad para saber si esta comprendida entre el rango de 18 y 25: "; cin>>a;

    // Hacemos el bloque de codigo para comprobar si esta en el rango comprendido entre 18 y 25

    if(a>=18 && a<=25) {
        cout << "La edad " << a << " esta comprendida entre el rango de 18 y 25";
    }
    else
        cout<< "La edad " <<a << " no esta comprendida en el rango de 18 y 25";

    return 0;
}
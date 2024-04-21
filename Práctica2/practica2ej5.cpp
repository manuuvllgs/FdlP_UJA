// @file practica2ej5.cpp
// @author Manuel Villegas Aceituno
// @date 25-sep-2023
// @desc Ejercicio 5 de la relacion PRACTICA ESTRUCTURAS DE CONTROL CONDICIONALES

#include <iostream>
using namespace std;

int main() {

    // Le pedimos al usuario que introduzca dos numeros enteros para ver si el primero divide al segundo

    int a, b;
    cout << "Introduzca el divisor: ";
    cin >> a;
    cout << "Introduzca el dividendo: ";
    cin >> b;

    // Hacemos el bloque de codigo para determinar si a puede dividir a b

    if (b % a == 0) {
        cout << "El numero " << b << " es divisible por el numero " << a << " y su resultado es " << b / a;
    } else {
        cout << "El numero " << b << " no es divisible por el numero " << a;
    }
    return 0;
}
// @file practica2ej3.cpp
// @author Manuel Villegas Aceituno
// @date 25-sep-2023
// @desc Ejercicio 3 de la relacion PRACTICA ESTRUCTURAS DE CONTROL CONDICIONALES

#include <iostream>
using namespace std;

int main(){

    // Pedimos al usuario que introduzca los 3 numeros a comparar

    double a,b,c;
    cout<< "Introduzca el primer nuimero de los tres a comparar: "; cin>> a;
    cout<< "Introduzca el segundo nuimero de los tres a comparar: "; cin>> b;
    cout<< "Introduzca el tercer nuimero de los tres a comparar: "; cin>> c;

    // Realizamos el bloque de codigo que determine que numero es mayor de los 3

    if (a>b)
        if (a>c)
            cout << "El numero " << a << " es mayor que el numero " << b << " y el numero " <<c ;
        else
            cout << "El numero " << c << " es mayor que el numero " << b << " y el numero " <<a ;
    else
    if (b>c)
        cout << "El numero " << b << " es mayor que el numero " << a << " y el numero " <<c ;
    else
        cout << "El numero " << c << " es mayor que el numero " << b << " y el numero " <<a ;


    return 0;
}
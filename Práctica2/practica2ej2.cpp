// @file practica2ej2.cpp
// @author Manuel Villegas Aceituno
// @date 25-sep-2023
// @desc Ejercicio 2 de la relacion PRACTICA ESTRUCTURAS DE CONTROL CONDICIONALES

#include <iostream>
using namespace std;

int main (){

    // Pedimos al usuario que introduzca dos numeros
    double a,b;
    cout<< "Introduzca el primer numero de los dos a comparar: ";
    cin>> a;
    cout<< "Introduzca el segundo numero de los dos a comparar: ";
    cin>> b;

    // Realizamos la estructura condicional para que el programa diga cual de los dos numeros es mayor

    if (a<b)
        {cout<< "El numero " <<b << " es mayor que el numero " <<a;}
    else
    {cout<< "El numero " <<a << " es mayor que el numero " <<b;}

    return 0;
}
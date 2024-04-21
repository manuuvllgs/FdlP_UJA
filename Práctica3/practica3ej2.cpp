// @author Manuel Villegas Aceituno
// @file practica3ej2.cpp - PRÁCTICA ESTRUCTURAS DE CONTROL
//CÍCLICAS
// @date 2-oct-2023
// @desc Realiza un programa que solicite de la entrada estándar un entero del 1 al 10 y muestre
//en la salida estándar su tabla de multiplicar.

#include <iostream>
using namespace std;

int main() {
    // Le pedimos al usuario que introduzca un numero del 1 al 10 y declaramos la variable
    int num, num1;


    // Hacemos el codigo para que se realice su tabla de multiplicar
    do {
        cout<< "Introduzca un numero entero entre 1 y 10: "; cin>> num;
        }
        while (!(num > 0 && num <= 10));

    for (num1 = -1; ++num1, num1 <= 10;)
        cout << num << " * " << num1 <<" = " << num * num1 << endl;
return 0;
    }
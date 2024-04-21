// @author Manuel Villegas Aceituno
// @file practica3ej7.cpp - PRÁCTICA ESTRUCTURAS DE CONTROL
//CÍCLICAS
// @date 2-oct-2023
// @desc El  algoritmo  de  Euclides  es  un  procedimiento  para  calcular  el  máximo  común  divisor
// de  dos números naturales. Escribe un programa que implemente este algoritmo.

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int num1, num2;
    int dividendo=num1/num2;
    int divisor=num1%num2;
    int division;


    do {
        cout << "Introduzca los numeros cuyo mcd quiere conocer." << endl;
        cout << "Primer numero, este sera el mayor:" << endl;
        cin >> num1;
        cout << "Segundo numero, este sera el menor:" << endl;
        cin >> num2;
    } while (!(num1 > num2));

    if (num1 % num2 == 0) {
        cout << "El mcd(" << num1 << "," << num2 << ") = " << num2;
    } else {
do{
    dividendo=dividendo/divisor;
    divisor=dividendo%divisor;
} while (dividendo%divisor!=0);

    }
    cout << "El mcd(" << num1 << "," << num2 << ") = " << dividendo;


    return 0;
}

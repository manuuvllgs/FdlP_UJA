// @author Manuel Villegas Aceituno
// @file practica7ej1.cpp
// @date 8-nov-2023
// @desc Implementa  una  función  que  tome  como  parámetro  un  número  real  y  devuelva  su  valor  absoluto.

#include <iostream>
using namespace std;

double valor_abs (double num){
    if (num<0){
        num = -num;
    }
    return num;
}

int main() {
    double num1;
    cout << "Introduzca un valor para saber su valor absoluto: ";
    cin >> num1;


    cout << valor_abs(num1);

    return 0;
}
// @author Manuel Villegas Aceituno
// @file practica3ej7.cpp - PRÁCTICA ESTRUCTURAS DE CONTROL
//CÍCLICAS
// @date 2-oct-2023
// @desc Escribe un programa que calcule x^y , donde tanto x como y son enteros positivos, sin
//utilizar la función pow.

#include <iostream>

using namespace std;

int main() {
    float base, exponente, y, resultado;

    do {
        cout << "Calcular una potencia de una base x y exponente y siendo ambos positivos." << endl;
        cout << "Introduzca la base (x): ";
        cin >> base;
        cout << "Introduzca el exponente (y): ";
        cin >> exponente;
        resultado = base * base; //Esto ya corresponde a x^2, por lo tanto y contará desde 3.

        if (base >= 0 && exponente >= 0) {
            for (y = 3; y <= exponente; ++y)
                resultado = resultado * base;
            cout << "El resultado es: " << resultado;
        } else cout << "Datos introducidos no coinciden con los requisitos" << endl;
    } while (base < 0 || exponente < 0);

    return 0;
}

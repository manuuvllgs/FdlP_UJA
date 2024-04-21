// @author Manuel Villegas Aceituno
// @file practica3ej3.cpp - PRÁCTICA ESTRUCTURAS DE CONTROL
//CÍCLICAS
// @date 2-oct-2023
// @desc Realiza un programa que lea de la entrada estándar números hasta que se introduzca
//un cero (es decir, es una lectura con centinela donde el centinela es el valor 0). En ese
//momento el programa debe terminar y mostrar en la salida estándar la cantidad de
//valores mayores que cero leídos.

#include <iostream>

using namespace std;

int main() {
    int num, num1 = 0, num2;
    cout << "Introduzca tantos numeros como desee distintos de 0, cuando introduzca el mismo, se "
            "le indicara cuantos de ellos son mayores de 0" << endl;

    do {
        cout << "Introduzca el numero " << ++num1 << ": ";
        cin >> num;
        if (num > 0) {
            ++num2;
        }
    } while (num != 0);

    cout << "La cantidad de numeros introducidos mayores que 0 es " << num2;


    return 0;
}
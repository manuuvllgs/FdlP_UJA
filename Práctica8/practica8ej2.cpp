// @author Manuel Villegas Aceituno
// @file practica8ej1.cpp
// @date 14-nov-2023
// @desc Escribe una función que intercambie el valor de sus dos parámetros.

#include <iostream>

using namespace std;

void intercambio(int &num1, int &num2) {
    int aux;
    aux = num1;
    num1 = num2;
    num2 = aux;
}


int main() {
    int num1, num2;
    cout << "Introduce dos valores: ";
    cout << "Valor 1: ";
    cin >> num1;
    cout << "Valor 2: ";
    cin >> num2;

    intercambio(num1, num2);

    cout << "Valor 1: " << num1 <<endl;
    cout << "Valor 2: " << num2;

}
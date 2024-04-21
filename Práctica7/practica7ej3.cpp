// @author Manuel Villegas Aceituno
// @file practica7ej3.cpp
// @date 8-nov-2023
// @desc Realiza  una  función  que  tome  como  parámetros  dos  cadenas  de  caracteres  y  usando  la  función
// anterior  devuelva  la  cadena  mayor  (en  númeroro  de  caracteres)  o  la  primera  si  ambas tienen
// la misma longitud.

#include <iostream>

using namespace std;

int num_caracteres(string frase) {
    int num_car;
    num_car = frase.length();
    return num_car;
}

string frase_mayor(string frase1, string frase2) {
    if (frase1.length() >= frase2.length()) {
        return frase1;
    } else {
        return frase2;
    }
}

int main() {
    string fr1, fr2;
    cout << "Introduzca la frase 1: ";
    getline(cin >> ws, fr1);
    cout << "Introduzca la frase 2: ";
    getline(cin >> ws, fr2);
    cout << "La frase con mayor numero de caracteres es " << frase_mayor(fr1, fr2);
    return 0;
}
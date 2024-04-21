// @author Manuel Villegas Aceituno
// @file practica7ej6.cpp
// @date 13-nov-2023
// @desc Implementa una función que, dado un carácter, devuelva si es un dígito.

#include <iostream>

using namespace std;

/**
 * Esta funcion sirve para contar el numero de digitos que contiene un string.
 * @param frase string al que le vamos a contar el numero de digitos.
 * @return el numero de digitos que contiene
 */

int numCaracteres(string frase) {
    int cont_digitos = 0;
    for (int i = 0; i < frase.length(); ++i) {
        if (frase[i] >= '0' && frase[i] <= '9') {
            ++cont_digitos;
        }
    }
    return cont_digitos;
}

int main(){
    string frase1;

    cout<<"Introduzca una frase para saber el numero de digitos que contiene: "; getline(cin>>ws, frase1);
    cout<<"La frase contiene " <<numCaracteres(frase1) <<" digitos";



    return 0;
}
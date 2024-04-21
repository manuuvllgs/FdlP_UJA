// @author Manuel Villegas Aceituno
// @file practica7ej5.cpp
// @date 13-nov-2023
// @desc Implementa una función que, dado un carácter, devuelva si es un dígito.

#include <iostream>

using namespace std;

/**
 * Esta funcion determina si un char introducido es un digito o no.
 * @param caracter char que vamos a comprobar.
 * @return true si es un digito y false si no lo es.
 */

bool isDigito(char caracter){

    if (caracter>='0' && caracter<='9'){
        return true;
    } else {
        return false;
    }
}

int main(){
    char caracter;
    cout<<"Introduce un caracter para saber si es un digito: "; cin>>caracter;

    if (isDigito(caracter)){
     cout<<"Es un digito";
    } else {
        cout<<"No es un digito";
    }


    return 0;
}
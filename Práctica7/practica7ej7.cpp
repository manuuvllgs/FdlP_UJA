// @author Manuel Villegas Aceituno
// @file practica7ej7.cpp
// @date 13-nov-2023
// @desc Realiza una función que determine si un entero positivo es primo.

#include <iostream>

using namespace std;

bool esPrimo(int num){
    for (int i=2; i<num;++i){
        if (num%i==0){
            return false;
        }
    }
}

int main(){
    int num;

    cout<<"Introduzca un numero para saber si es primo: "; cin>>num;
    if (esPrimo(num)){
        cout<<"Es un numero primo";
    } else {
        cout<<"No es un numero primo";
    }
}
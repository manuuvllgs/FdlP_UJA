// @author Manuel Villegas Aceituno
// @file practica7ej2.cpp
// @date 8-nov-2023
// @desc Realiza  una  función  que  dada  una  cadena  devuelva  el  número  de  caracteres  que  contiene.

#include <iostream>
using namespace std;

int num_caracteres(string frase){
    int num_car;
    num_car=frase.length();
    return num_car;
}

int main(){
    string frase;
    cout<<"Introduzca una frase para ver de del numero de caracteres que esta compuesta: "; getline(cin>>ws, frase);
    cout<<"La frase esta compuesta por " <<num_caracteres(frase) << " palabras";

    return 0;
}
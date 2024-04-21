// @author Manuel Villegas Aceituno
// @file practica5ej7.cpp - PRÁCTICA CADENAS DE CARACTERES
// @date 23-oct-2023
// @desc Realiza  un  programa  que  lea  una  cadena  de  caracteres  e  indique  cuántas  palabras  tiene.
// Una  palabra  puede  venir  separada  de  otra  por  uno  o  más  caracteres  de  espacio  en  blanco.

#include <iostream>

using namespace std;

int main(){

    string frase;
    int i,palabras=0,palabras_ins, pos;

    cout<<"Por favor introduzca una frase para conocer la cantidad de palabras que contiene: "; getline(cin>>ws, frase);

    for (i=1;i<frase.length();++i)
        if (frase[i-1]==' ' && frase[i]!=' '){
            ++palabras;
        }

    if (frase[0]!=' ') {
        cout << "La frase esta compuesta por " << palabras + 1 << " palabras.";
    } else {
        cout << "La frase esta compuesta por " << palabras << " palabras.";
    }



    return 0;
}
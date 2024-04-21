// @author Manuel Villegas Aceituno
// @file practica8ej1.cpp
// @date 14-nov-2023
// @desc Realiza  una  función  que  tome  como  parámetros  dos  cadenas  de  caracteres  y  devuelva
// la  cadena más larga y la más corta.

#include <iostream>

using namespace std;

string frasemaslarga(string frase1,string frase2){
    string frasemaslarga;
    if (frase1.length()>frase2.length()){
        frasemaslarga=frase1;
    } else {
        frasemaslarga=frase2;
    }
    return frasemaslarga;
}

string frasemenoslarga(string frase1,string frase2){
    string frasemenoslarga;
    if (frase1.length()<frase2.length()){
        frasemenoslarga=frase1;
    } else {
        frasemenoslarga=frase2;
    }
    return frasemenoslarga;
}

int main() {
    string frase1, frase2;
    cout << "Introduzca la frase 1: ";
    getline(cin >> ws, frase1);
    cout << "Introduzca la frase 2: ";
    getline(cin >> ws, frase2);


    cout <<"La frase mas larga es: " <<frasemaslarga(frase1,frase2) <<endl;
    cout <<"La frase mas corta es: " <<frasemenoslarga(frase1,frase2);


    return 0;
}
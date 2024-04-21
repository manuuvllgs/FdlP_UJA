// @author Manuel Villegas Aceituno
// @file practica3ej6.cpp - PRÁCTICA ESTRUCTURAS DE CONTROL
//CÍCLICAS
// @date 2-oct-2023
// @desc Escribe un programa que lea valores enteros hasta que se introduzca un valor en el
//rango [20,30] o se introduzca el valor 0.

#include <iostream>
using namespace std;

int main(){
    double num;
    do{
        cout<< "Introduzca un numero que sea distinto de 0 y no esté en el rango comprendido entre el 20 y el 30: "; cin>>num;
    } while ((num!=0 || num>20 && num<30));



    return 0;
}
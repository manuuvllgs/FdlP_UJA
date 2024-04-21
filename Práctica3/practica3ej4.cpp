// @author Manuel Villegas Aceituno
// @file practica3ej4.cpp - PRÁCTICA ESTRUCTURAS DE CONTROL
//CÍCLICAS
// @date 2-oct-2023
// @desc Realiza un programa que calcule y muestre en la salida estándar la suma de los
//cuadrados de los números enteros del 1 al 10.
//Nota: la solución es 385

#include <iostream>
using namespace std;

int main(){
    int num,res;
    cout<< "La suma de los cuadrados de lo 10 primeros numeros enteros es: " <<endl;

    for (num=0;num<=10;++num)
        res= res + num*num;

    cout<<res;

    return 0;
}

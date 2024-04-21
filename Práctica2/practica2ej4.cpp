// @file practica2ej4.cpp
// @author Manuel Villegas Aceituno
// @date 25-sep-2023
// @desc Ejercicio 4 de la relacion PRACTICA ESTRUCTURAS DE CONTROL CONDICIONALES

#include <iostream>
using namespace std;

int main(){

    // Pedimos al usuario que introduzca el numero que quiere comprobar si es par

    int a;
    cout<< "Introduzca el numero del que quiere conocer si es par o impar: "; cin>>a;

    // Hacemos el bloque de codigo para determinar si es par o impar

    if(a%2==0){
        cout<< "El numero " <<a << " es par";
    }
    else{
        cout<< "El numero " <<a << " es impar";
    }

    return 0;
}
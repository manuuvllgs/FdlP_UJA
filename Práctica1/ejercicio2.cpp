// @file ejercicio2.cpp
// @author Manuel Villegas Aceituno
// @date 18-sep-2023
// @desc Ejercicio 2 de la relacion PRACTICA ESTRUCTURAS SECUENCIALES

#include <iostream>
using namespace std;

int main(){

    // Pedimos que introduzcan el precio que desean conocer con el IVA aplicado
    int precio;
    cout <<"Introduzca el percio al que desea aplicar el IVA del 21%: "; cin>>precio;

    //Aplicamos el 21% e imprimimos en pantalla el resultado
    cout<< precio*0.21+precio;

    return 0;
}



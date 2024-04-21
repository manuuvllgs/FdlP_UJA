// @file ejercicio1.cpp
// @author Manuel Villegas Aceituno
// @date 18-sep-2023
// @desc Ejercicio 1 de la relacion PRACTICA ESTRUCTURAS SECUENCIALES

#include <iostream>
using namespace std;
int main (){

    // Declaramos las variables y se las pedimos al usuario
    int numero1;
    int numero2;
    cout<< "Introduzca el primer numero: "; cin>>numero1;
    cout<< "Introduzca el segundo numero: "; cin>>numero2;

    // Realizamos las cuentas
    int suma;
    suma = numero1 + numero2;
    int resta;
    resta = numero1 - numero2;
    int producto;
    producto = numero1 * numero2;
    int division;
    division = numero1 / numero2;

    // Imprimimos en pantalla los resultados

        cout << "Suma: "; cout<<suma <<endl;
        cout << "Resta "; cout<<resta <<endl;
        cout << "Producto: "; cout<<producto <<endl;
        cout << "Division: "; cout<<division <<endl;

    return 0;
}
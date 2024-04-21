// @file practica2ej9.cpp
// @author Manuel Villegas Aceituno
// @date 25-sep-2023
// @desc Ejercicio 9 de la relacion PRACTICA ESTRUCTURAS DE CONTROL CONDICIONALES

#include <iostream>
using namespace std;

int main() {

    // Le pedimos al usuario que introduzca una letra

    char a,b,c,d;
    cout<< "Introduzca la primera letra: "; cin>>a;
    cout<< "Introduzca la segunda letra: "; cin>>b;
    cout<< "Introduzca la tercera letra: "; cin>>c;
    cout<< "introduce la cuarta letra para ver si coincide con alguna de las introducidas anteriormente: "; cin>>d;

    // Hacemos el bloque de codigo para ver si la cuarta letra introducida coincide con alguna de las anteriores

    if (d==a)
        cout<< "La letra introducida coincide con la primera letra";
    if (d==b)
        cout<< "La letra introducida coincide con la segunda letra";
    if (d==c)
        cout<< "La letra introducida coincide con la tercera letra";
    if (d!=a||d!=b||d!=c)
        cout<<"La letra introducida no coincide con ninguna de las anteriores";

    return 0;
}
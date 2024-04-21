// @file ejercicio3.cpp
// @author Manuel Villegas Aceituno
// @date 18-sep-2023
// @desc Ejercicio 3 de la relacion PRACTICA ESTRUCTURAS SECUENCIALES

#include <iostream>
using namespace std;
int main(){

    // Pedir los datos al usuario de la edad, grupo y altura

    int edad;
    char grupo;
    float altura;
    cout <<"Introduzca su edad: "; cin>>edad;
    cout <<"Introduzca su altura: "; cin>>altura;
    cout <<"Introduzca su grupo: "; cin>>grupo; cout<<endl;

    // Imprimimos en pantalla los datos introducidos por el usuario

    cout<< "Ha indicado que su edad es " <<edad <<" años" <<endl;
    cout<< "Ha indicado que su altura es " <<altura <<" metros" <<endl;
    cout<< "Ha indicado que su grupo es el " <<grupo <<endl;



    return 0;
}
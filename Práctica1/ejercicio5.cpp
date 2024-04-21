// @file ejercicio5.cpp
// @author Manuel Villegas Aceituno
// @date 18-sep-2023
// @desc Ejercicio 5 de la relacion PRACTICA ESTRUCTURAS SECUENCIALES

#include <iostream>
using namespace std;

int main(){

    // Le pedimos al usuario que introduzca las 4 notas con las que se realizará la media y las declaramos

    float nota1;
    float nota2;
    float nota3;
    float nota4;
    cout<<"Introduzca la nota obtenida por el primer alumno: "; cin>>nota1; cout<<endl;
    cout<<"Introduzca la nota obtenida por el segundo alumno: "; cin>>nota2; cout<<endl;
    cout<<"Introduzca la nota obtenida por el tercer alumno: "; cin>>nota3; cout<<endl;
    cout<<"Introduzca la nota obtenida por el cuarto alumno: "; cin>>nota4; cout<<endl;

    // Hacemos las cuentas pertinentes para calcular la nota media de los 4 alumnos y la imprimimos en la pantalla

    cout<< "La nota media de los 4 alumnos es: " <<(nota1+nota2+nota3+nota4)/4 <<endl;


    return 0;
}
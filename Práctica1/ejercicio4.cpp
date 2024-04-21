// @file ejercicio4.cpp
// @author Manuel Villegas Aceituno
// @date 18-sep-2023
// @desc Ejercicio 4 de la relacion PRACTICA ESTRUCTURAS SECUENCIALES

#include <iostream>
using namespace std;

int main(){

    // Le pedimos al usuario que introduzca las 3 notas con las que se realizará la media y las declaramos

    float nota1;
    float nota2;
    float nota3;
    cout<<"Introduzca la nota obtenida en el apartado de practicas: "; cin>>nota1;
    cout<<"Introduzca la nota obtenida en el apartado de teoria: "; cin>>nota2; cout<<endl;
    cout<<"Introduzca la nota obtenida en el apartado de participacion: "; cin>>nota3; cout<<endl;

    // Hacemos las cuentas pertinentes para asignar a cada nota su valor en la media final.

    float practicas;
    float teorica;
    float participacion;
    practicas = nota1*0.3;
    teorica = nota2*0.6;
    participacion = nota3*0.1;

     // Declaramos la media y la imprimimos en la pantalla

     float media;
     media = practicas+teorica+participacion;
     cout<< "La media obtenida es: " <<media <<endl;



    return 0;
}
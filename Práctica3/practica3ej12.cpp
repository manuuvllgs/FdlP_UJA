// @author Manuel Villegas Aceituno
// @file practica3ej12.cpp - PRÁCTICA ESTRUCTURAS DE CONTROL
//CÍCLICAS
// @date 7-oct-2023
// @desc   Escribe  un  programa  que  lea  un  número  entero  no  negativo  n  y  dibuje  un  triángulo  rectángulo
// con  base  y  altura  n  como  el  que  se  muestra  a  continuación  para  n  =  4.  Observa que debe aparecer un
// espacio entre cada asterisco situado en la misma línea:
#include <iostream>

using namespace std;

int main() {
    int i,n=0;
    char m;
    do {
        cout << "Introduzca un numero no negativo que sera la medida de la base y la altura de un triangulo rectangulo: " <<endl;
        cin>>i;
    }while (!(i>0));

    for (i;n<i;++n) {
        m = '*';
        cout<<m <<endl;
    }

    return 0;
}
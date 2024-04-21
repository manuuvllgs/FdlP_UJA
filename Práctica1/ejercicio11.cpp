// @file ejercicio11.cpp
// @author Manuel Villegas Aceituno
// @date 18-sep-2023
// @desc Ejercicio 11 de la relacion PRACTICA ESTRUCTURAS SECUENCIALES

#include <iostream>
using namespace std;

int main(){

    //Le pedimos al usuario que nos de los datos de su factura y la cantidad de años que quiere calcular

    float factura, anhos;
    cout<< "Introduzca el precio de su factura actualmente: "; cin>>factura;
    cout<< "Introduzca en cuantos anhos quiere saber el precio de "
           "su factura (siendo el encarecimiento de la factura un 3% anual): "; cin>>anhos;
    cout<<endl;

    // Hacemos las cuentas para calcular el coste de la futura factura

    float factura2;
    factura2 = factura + (0.03*anhos*factura);

    // Imprimimos en la pantalla el coste de la futura factura

    cout<< "El coste de su factura dentro de " <<anhos <<" anhos sera de " <<factura2 <<" euros." <<endl;

    return 0;
}
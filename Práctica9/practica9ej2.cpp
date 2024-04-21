// @author Manuel Villegas Aceituno
// @file practica9ej2.cpp
// @date 28-nov-2023
// @desc Un  año  es  bisiesto  si  es  divisible  por  4,  excepto  el  último  de  cada  siglo
// (aquel  divisible  por  100),  salvo  que  este  último  sea  divisible  por  400.  De  este  modo  2004,  2008
// o  2012  son  bisiestos,  pero  no  lo  son  2100,  2200  o  2300,  y  sí  lo  es  2400.  Realiza  una  función
// que  dado un año devuelva si es bisiesto.

#include <iostream>

using namespace std;

/**
 * Descripcion: Funcion que dado un año devuelve si es bisiesto o no.
 * @param anio año a comprobar si es bisisesto.
 * @return un bool con true si es bisiesto y false si no lo es.
 */

bool esBisiesto(int anio) {
    bool bisiesto;
    if (anio % 100 == 0 && anio % 400 != 0) {
        bisiesto = false;
    }
    if (anio % 4 == 0 && anio % 100 != 0) {
        bisiesto = true;
    }
    if (anio % 400 == 0) {
        bisiesto = true;
    }
    return bisiesto;
}

int main() {

    int anio_bisiesto;
    cout << "Introduce un año para saber si es bisiesto: ";
    cin >> anio_bisiesto;

    if (esBisiesto(anio_bisiesto)) {
        cout << "El año es bisiesto.";
    } else {
        cout << "El año no es bisiesto.";
    }
    return 0;
}
// @author Manuel Villegas Aceituno
// @file practica10ej1.cpp
// @date 4-dic-2023
// @desc Define  una  estructura  fecha  que  almacene  el  día,  mes  y  año  como  enteros.  Realice
// las  siguientes funciones:

#include <iostream>
#include <sstream>

using namespace std;

struct Fecha {
    int dia, mes, anio;
};

void leerFecha(Fecha *fecha) {
    cout << "Introduzca la fecha: " << endl << "Dia: ";
    cin >> fecha->dia;
    cout << "Mes: ";
    cin >> fecha->mes;
    cout << "Anio: ";
    cin >> fecha->anio;
}

string toRetFecha(Fecha *fecha) {
    stringstream fecha2;
    fecha2 << fecha->dia << "/" << fecha->mes << "/" << fecha->anio;
    return fecha2.str();
}

bool fecha1Anterior(Fecha *fecha1, Fecha *fecha2) {
    bool validar;
    if (fecha1->anio < fecha2->anio) {
        validar = true;
    }
    if (fecha1->anio == fecha2->anio && fecha1->mes < fecha2->mes) {
        validar = true;
    }
    if (fecha1->anio == fecha2->anio && fecha1->mes == fecha2->mes && fecha1->dia < fecha2->dia) {
        validar = true;
    }
    return validar;
}

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

void sumarAnio(Fecha *fecha1) {
    if (esBisiesto(fecha1->anio)) {
        fecha1->anio = ++fecha1->anio;
        fecha1->dia = --fecha1->dia;
    } else {
        fecha1->anio = ++fecha1->anio;
    }
}


int main() {

    Fecha *fecha1 = new Fecha;
    Fecha *fecha2 = new Fecha;
    leerFecha(fecha1);
    leerFecha(fecha2);

/*
    fecha1->dia = 17;
    fecha1->mes = 4;
    fecha1->anio = 2009;
*/

    cout << toRetFecha(fecha1) <<endl;
    cout << toRetFecha(fecha2) <<endl;

    if (fecha1Anterior(fecha1, fecha2)) {
        cout << "La primera fecha es anterior a la segunda.";
    } else { cout << "La segunda fecha es anterior a la primera.";}

    sumarAnio(fecha1);
    cout <<endl << toRetFecha(fecha1) <<endl;


    delete fecha1;
    delete fecha2;
    return 0;
}

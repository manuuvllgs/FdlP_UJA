// @author Manuel Villegas Aceituno
// @file practica9ej3.cpp
// @date 28-nov-2023
// @desc Define  una  estructura  fecha  que  almacene  el  día,  mes  y  año  como  enteros.
// Implementa  funciones que permitan:

#include <iostream>
#include <sstream>

using namespace std;

struct Fecha {
    int dia, mes, anio;
};

/**
 * Descirpcion: Funcion que pide los datos de una fecha.
 * @param fecha1 variable donde se guarda la fecha.
 */

void pedirFecha(Fecha &fecha1) {
    do {
        cout << "Introduzca el día (1-31): ";
        cin >> fecha1.dia;
    } while (!(fecha1.dia <= 31 && fecha1.dia > 0));
    do {
        cout << "Introduzca el mes (1-12): ";
        cin >> fecha1.mes;
    } while (!(fecha1.mes > 0 && fecha1.mes <= 12));
    do {
        cout << "Introduzca el año (>0): ";
        cin >> fecha1.anio;
    } while (!(fecha1.anio > 0));
}

/**
 * Descripcion: Funcion que muestra la fecha.
 * @param fecha variable donde se almacena la fecha.
 * @return salida de la fecha.
 */

string mostrarFecha(const Fecha &fecha) {
    stringstream salidafecha;
    salidafecha << fecha.dia << "/" << fecha.mes << "/" << fecha.anio;
    return salidafecha.str();
}

/**
 * Descripcion: Funcion que comprueba si la primera fecha introducida es anterior a la segunda.
 * @param fecha1 variable que almacena la primera fecha.
 * @param fecha2 variable que almacena la segunda fecha.
 * @return bool que es true si la primer fexha es anterior y false si es posterior.
 */

bool fecha1Mayor(const Fecha &fecha1, const Fecha &fecha2) {
    bool validar;
    if (fecha1.anio < fecha2.anio) {
        validar = true;
    }
    if (fecha1.anio == fecha2.anio && fecha1.mes < fecha2.mes) {
        validar = true;
    }
    if (fecha1.anio == fecha2.anio && fecha1.mes == fecha2.mes && fecha1.dia < fecha2.dia) {
        validar = true;
    }
    return validar;
}

/**
 * Descripcion: Funcion que comprueba si un año es bisiesto.
 * @param anio variable que almacena el año a comprobar.
 * @return bool que es true si es bisiesto y false si no lo es.
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

/**
 * Descricion: Funcion que suma un año.
 * @param fecha1 variable a la que se le suma el año.
 */

void sumarAnio(Fecha &fecha1) {
    if (esBisiesto(fecha1.anio)) {
        fecha1.anio = ++fecha1.anio;
        fecha1.dia = --fecha1.dia;
    } else {
        fecha1.anio = ++fecha1.anio;
    }
}

int main() {
    Fecha fecha, fecha2;

    pedirFecha(fecha);
    cout << endl;
    pedirFecha(fecha2);

    cout << mostrarFecha(fecha);
    cout << endl;
    cout << mostrarFecha(fecha2);
    cout << endl;

    if (fecha1Mayor(fecha, fecha2)) {
        cout << "La primera fecha (" << mostrarFecha(fecha) << ") es anterior que la segunda fecha ("
             << mostrarFecha(fecha2) << ")";
    } else {
        cout << "La segunda fecha (" << mostrarFecha(fecha2) << ") es anterior que la primera fecha ("
             << mostrarFecha(fecha) << ")";
    }

    cout << endl;
    sumarAnio(fecha);
    cout << mostrarFecha(fecha);


    return 0;
}


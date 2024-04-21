// @author Manuel Villegas Aceituno
// @file practica10ej4.cpp
// @date 4-dic-2023
// @desc Utilizando  una  estructura  fecha  como  la  del  ejercicio  anterior  realiza  las  siguientes  funciones:

#include <iostream>
#include <sstream>

using namespace std;

const int TAM_MAX = 100;

struct Fecha {
    int dia, mes, anio;
};

int *posicionMemoria(Fecha pfechas[], Fecha fecha_dada, const int tam, bool &validar) {
    int posMemoria;
    validar = 0;
    for (int i = &pfechas[0]; i < &pfechas[tam]; ++i){
        if (pfechas[i].dia == fecha_dada.dia && pfechas[i].mes == fecha_dada.mes &&
            pfechas[i].anio == fecha_dada.anio) {
            posMemoria = pfechas;
            validar = 1;
        }
    }
    return posMemoria;
}

int recurrenciaFecha(Fecha *pFechas, Fecha fecha_dada, const int tam, bool &validar) {
    int contador_recurrencias = 0;

}

int main() {
    bool fecha_encontrada;
    Fecha *fechas = new Fecha[TAM_MAX];
    Fecha fecha_a_buscar = {3, 10, 2001};
    int cont_fechas = 0;
    fechas[cont_fechas].dia = 12;
    fechas[cont_fechas].mes = 4;
    fechas[cont_fechas].anio = 2001;
    fechas[++cont_fechas].dia = 12;
    fechas[cont_fechas].mes = 4;
    fechas[cont_fechas].anio = 2001;
    fechas[++cont_fechas].dia = 17;
    fechas[cont_fechas].mes = 1;
    fechas[cont_fechas].anio = 1993;
    fechas[++cont_fechas].dia = 30;
    fechas[cont_fechas].mes = 3;
    fechas[cont_fechas].anio = 2005;
    fechas[++cont_fechas].dia = 1;
    fechas[cont_fechas].mes = 1;
    fechas[cont_fechas].anio = 2024;
    fechas[++cont_fechas].dia = 16;
    fechas[cont_fechas].mes = 5;
    fechas[cont_fechas].anio = 1948;


    posicionMemoria(fechas, fecha_a_buscar, cont_fechas, fecha_encontrada);
    if (fecha_encontrada) {
        cout << posicionMemoria(fechas, fecha_a_buscar, cont_fechas, fecha_encontrada);
    } else {
        cout << "0";
    }


    delete[]fechas;

    return 0;
}

// @author Manuel Villegas Aceituno
// @file practica6ej1.cpp
// @date 24-oct-2023
// @desc Define  una  estructura  que  indique  el  tiempo  empleado  por  un  ciclista  en  una  etapa.
// La  estructura  debe  tener  tres  campos:  horas,  minutos  y  segundos.  Escribe  un  programa  que  dado
// un  vector  con  los  tiempos  que  un  ciclista  ha  empleado  en  cada  etapa  calcule  el  tiempo total
// empleado en correr todas las etapas.

#include <iostream>

using namespace std;

struct Etapa {
    int horas, minutos, segundos;
};

const int NUM_MAX = 100;

int main() {

    Etapa etapas[NUM_MAX];
    int i = 0, num_etapas, horas_extra, minutos_extra, total_h = 0, total_m = 0, total_s = 0;

    cout << "¿Cuantas etapas ha corrido el ciclista?";
    cin >> num_etapas;

    for (i = 0; i < num_etapas; ++i) {
        cout << "Introduza cuantas horas corrió durante la etapa " << i + 1 << " (solo las horas): ";
        cin >> etapas[i].horas;

        cout << "Introduza cuantos minutos corrió durante la etapa " << i + 1 << " (solo los minutos): ";
        cin >> etapas[i].minutos;

        cout << "Introduza cuantos segundos corrió durante la etapa " << i + 1 << " (solo los segundos): " << endl;
        cin >> etapas[i].segundos;
    }

    for (i = 0; i < num_etapas; ++i) {
        total_h = total_h + etapas[i].horas;
        total_m = total_m + etapas[i].minutos;
        total_s = total_s + etapas[i].segundos;
    }

    if (total_s >= 60) {
        minutos_extra = total_s / 60;
        total_s = total_s % 60;
        total_m = total_m + minutos_extra;
    }
    if (total_m >= 60) {
        horas_extra = total_m / 60;
        total_m = total_m % 60;
        total_h = total_h + horas_extra;
    }

    cout << "El tiempo total del ciclista en correr todas las etapas ha sido de " << total_h << " horas, "
         << total_m << " minutos y " << total_s << " segundos";


    return 0;
}
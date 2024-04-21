// @author Manuel Villegas Aceituno
// @file practica10ej5.cpp
// @date 11-dic-2023
// @desc Define  una  estructura  persona  que  conste  de  los  campos  nombre  y  edad.  Define  también  un  vector
// de  personas.  Crea  un  vector  de  punteros  que  mantenga  el  vector  de  personas  ordenado  por  el  nombre
// y  otro  vector  de  punteros  que  mantenga  el  vector  de  personas  ordenado  por  la  edad
// (observar  la  figura).  Muestra  en  la  salida  estándar  el  vector  ordenado  por  nombre  y  luego  el
// vector  ordenado  por  edad  apoyándose  en  los  vectores  de punteros.

#include <iostream>

using namespace std;

const int TAM_MAX = 100;

struct Persona {
    string nombre;
    int edad;
};

void ordenarEdad(Persona personas[], Persona *pEdad, int tamanio) {
    int pmin;
    for (int i=0; i < tamanio; ++i){
        pmin=i;
        for (int j=i+1; j < tamanio; ++j){
            if (personas[j].edad < personas[pmin].edad){
                pmin = j;
                pEdad[i]=personas[pmin];
            }
        }
    }
}

void ordenarNombre(Persona personas[], Persona *pNombre, int tamanio) {
    int pmin;
    for (int i = 0; i < tamanio; ++i) {
        pmin = i;
        for (int j = i; j < tamanio; ++j) {
            if (personas[j].nombre < personas[pmin].nombre) {
                pNombre[j] = personas[pmin];
            }
        }
    }
}


int main() {


    int tam = 6;

    Persona personas[TAM_MAX] = {
            {"Vicente", 23},
            {"Pedro",   61},
            {"Maria",   12},
            {"Rodrigo", 34},
            {"Jimena",  98},
            {"Marta",   41}
    };

    Persona *pPersonasEdad = new Persona [TAM_MAX];
    Persona *pPersonasNombre = new Persona [TAM_MAX];

    ordenarEdad(personas, pPersonasEdad,tam);
    ordenarNombre(personas, pPersonasNombre, tam);

    for (int i=0 ; i < tam; ++i){
        cout<<pPersonasNombre[i].nombre <<pPersonasNombre[i].edad <<endl;
    }

    cout<<"//";

    for (int i=0 ; i < tam; ++i){
        cout<<pPersonasEdad[i].edad <<pPersonasEdad[i].nombre <<endl;
    }




    delete []pPersonasNombre;
    delete []pPersonasEdad;

    return 0;
}
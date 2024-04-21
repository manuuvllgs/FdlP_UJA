// @author Manuel Villegas Aceituno
// @file practica11ej3.cpp
// @date 14-dic-2023
// @desc Se  almacena  en  una  estructura  la  siguiente  información  sobre  una  persona:  nombre,  edad  y
// localidad  de  nacimiento.  Realiza  una  función  que  tome  como  parámetros  de  entrada  un  vector  de
// personas,  su  longitud  y  una  localidad  y  devuelva  como  salida  un  vector  con  los  datos  de  las
// personas  cuya  localidad  de  nacimiento  coincide  con  la  localidad  recibida  como  parámetro.  El  vector
// devuelto  debe  albergarse  en  memoria  dinámica. Realiza también una función  main  que permita  probar la función.

#include <iostream>

using namespace std;

struct Persona {
    string nombre;
    int edad;
    string localidad_nacimiento;
};

void
buscaPersonas_localidad(Persona personas[], int num_personas, string localidad_a_buscar, Persona nuevoVectorPersonas[],
                        int &nuevo_tam_personas) {
    for (int i = 0; i < num_personas; ++i) {
        if (personas[i].localidad_nacimiento == localidad_a_buscar) {
            nuevoVectorPersonas[i] = personas[i];
            ++nuevo_tam_personas;
        }
    }
}

void dibujaVector (Persona personas[], int tam_vector){
    for (int i=0; i < tam_vector ; ++i){
        cout<< personas[i].nombre <<", ";
    }
}


int main() {

    int numero_personas = 5, nuevo_num_personas;

    Persona *datos_personas = new Persona[numero_personas];

    Persona *nuevo_vector_de_personas = new Persona[numero_personas];

    datos_personas[0].nombre = "Pablo";
    datos_personas[0].edad = 45;
    datos_personas[0].localidad_nacimiento = "Jaen";
    datos_personas[1].nombre = "Dani";
    datos_personas[1].edad = 67;
    datos_personas[1].localidad_nacimiento = "Lleida";
    datos_personas[2].nombre = "Julio";
    datos_personas[2].edad = 31;
    datos_personas[2].localidad_nacimiento = "Jaen";
    datos_personas[3].nombre = "Manu";
    datos_personas[3].edad = 23;
    datos_personas[3].localidad_nacimiento = "Malaga";
    datos_personas[4].nombre = "Fran";
    datos_personas[4].edad = 4;
    datos_personas[4].localidad_nacimiento = "Pontevedra";

    buscaPersonas_localidad(datos_personas, numero_personas, "Jaen", nuevo_vector_de_personas, nuevo_num_personas);
    dibujaVector(nuevo_vector_de_personas,nuevo_num_personas);

    delete []datos_personas;
    delete []nuevo_vector_de_personas;

    return 0;
}
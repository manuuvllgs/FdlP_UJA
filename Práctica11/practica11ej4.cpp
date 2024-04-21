// @author Manuel Villegas Aceituno
// @file practica11ej4.cpp
// @date 14-dic-2023
// @desc Realiza las siguientes funciones para el trabajo con vectores de  string  :
// ○  Función  que  recibe  como  entrada  un  tamaño  y  devuelve  un  vector  ubicado  en memoria dinámica
// de ese tamaño.
// ○  Función  que  recibe  como  entrada  un  vector  de  strings  y  su  tamaño  y  muestre  en  la  salida
// estándar  los  strings  .  Cada  string  debe  aparecer  en  una  línea  distinta.
// ○  Función  que  recibe  un  vector  de  strings  ubicado  en  memoria  dinámica,  su  tamaño  y  un  nuevo  tamaño.
// La  función  debe  trasladar  el  vector  original  a  otro  vector  en  memoria  dinámica  que  tenga
// el  nuevo  tamaño. El  nuevo  tamaño  puede  ser  menor  o  mayor  que  el  tamaño  previo.  Se  debe  liberar  la  memoria
// ocupada  por  el  vector  original  y  se  debe  devolver  la  dirección  de  inicio  en  memoria dinámica del
// nuevo vector.
// ○  Función que reciba un vector de  strings  y devuelva  una copia del vector.
// ○  Función  main  que permita probar las funciones anteriores.

#include <iostream>
#include <sstream>

using namespace std;
const int TAMAX = 10;

void crearEspacioVector(string *pVectorDeString, const int tamanio_vector) {
    pVectorDeString = new string[tamanio_vector];
}

void toRetVectorDeStrings(string *VectorStrings, const int tamanio_vector) {
    for (int i = 0; i < tamanio_vector; ++i) {
        cout << VectorStrings[i] << endl;
    }
}

void cambiarVector(string *pVectorDeString, const int tam_antiguo, const int nuevo_tam, string *&nuevoVector) {
    for (int i = 0; i < nuevo_tam; ++i) {
        nuevoVector[i] = pVectorDeString[i];
    }
    delete[]pVectorDeString;
}

int main() {
    string vectorStrings[TAMAX];
    string *NuevoVectorDeString;
    int tam_v = 7, nuevo_tam_v = 9;

    crearEspacioVector(vectorStrings, tam_v);

    vectorStrings[0] = "Hola";
    vectorStrings[1] = "ayer";
    vectorStrings[2] = "me hize";
    vectorStrings[3] = "danio";
    vectorStrings[4] = "jugando";
    vectorStrings[5] = "solo";
    vectorStrings[6] = "al futbol";

    toRetVectorDeStrings(vectorStrings, tam_v);
    crearEspacioVector(NuevoVectorDeString, nuevo_tam_v);

    cambiarVector(vectorStrings, tam_v, nuevo_tam_v, NuevoVectorDeString);

    toRetVectorDeStrings(NuevoVectorDeString, nuevo_tam_v);


    return 0;
}
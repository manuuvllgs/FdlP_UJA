// @author Manuel Villegas Aceituno
// @file practica5ej7.cpp - PRÁCTICA CADENAS DE CARACTERES
// @date 23-oct-2023
// @desc Desarrolla  un  programa  en  C++  que  trabaje  con  un  vector  de  personas.  Cada  persona  se
// almacena  en  una  estructura  con  los  siguiente  campos:  nombre,  peso  en  kilos  y  altura  en  metros.
// El  programa  debe  comenzar  leyendo  de  la  entrada  estándar  los  datos  de  varias  personas. A continuación
// debe hacer lo siguiente:  ○  Mostrar  en  la  salida  estándar  un  listado  con  los  datos  de  las  personas
// introducidas.  El  listado  debe  incluir  el  índice  de  masa  corporal  de  cada  persona, éste se calcula
// como:  𝐼𝑀𝐶    =    𝑝𝑒𝑠𝑜  𝑎𝑙𝑡𝑢𝑟𝑎  2  ○  Mostrar en la salida estándar el nombre de la persona con mayor IMC.  ○  Un
// listado  con  los  nombres  de  las  personas  cuya  altura  supera  una  introducida por el usuario.  ○
// Indicar si la persona con menor IMC es también la más baja.

#include <iostream>

using namespace std;

struct Persona {
    string nombre;
    float peso, altura;
};

const int PERSONAS_MAX = 100;

int main() {
    Persona personas[PERSONAS_MAX];
    int num_pers = 0, i = 0, pos_menor_imc, pos_menor_altura;
    float mayor_imc = 0, menor_imc = 100, imc, altura_comp, altura1 = 1000;
    string nombre_mayor_imc, nombre_menor_imc, nombre_menor_altura;

    cout << "Introduzca el numero de personas que van a conformar la lista: ";
    cin >> num_pers;

    for (i = 0; i < num_pers; ++i) {
        cout << "Introduzca el nombre de la persona " << i + 1 << ": ";
        getline(cin >> ws, personas[i].nombre);
        cout << "Introduzca el peso de la persona (en kg)" << ": ";
        cin >> personas[i].peso;
        cout << "Introduzca la altura de la persona (en metros) " << ": ";
        cin >> personas[i].altura;
        cout << endl;
    }

    for (i = 0; i < num_pers; ++i) {
        imc = personas[i].peso / (personas[i].altura * personas[i].altura);
        if (imc > mayor_imc) {
            mayor_imc = imc;
            nombre_mayor_imc = personas[i].nombre;
        }
        if (imc < menor_imc) {
            menor_imc = imc;
            nombre_menor_imc = personas[i].nombre;
            pos_menor_imc = i;
        }
    }

    cout << "La lista de personas con sus correspondientes datos es la siguiente:" << endl;
    for (i = 0; i < num_pers; ++i) {
        cout << "Los datos de la persona " << i + 1 << " son: " << endl;
        cout << "Nombre: " << personas[i].nombre << endl;
        cout << "Peso: " << personas[i].peso << " kg" << endl;
        cout << "Altura: " << personas[i].altura << " metros" << endl;
        cout << "IMC: " << personas[i].peso / (personas[i].altura * personas[i].altura) << endl;
        cout << endl;
    }

    cout << "La persona con mayor numero de IMC es " << nombre_mayor_imc << ", que tiene " << mayor_imc << endl;

    cout << endl
         << "Introduzca la altura de la que quiere encontrar personas en la lista cuya altura sea mayor a la introducida: ";
    cin >> altura_comp;

    for (i = 0; i < num_pers; ++i) {
        if (personas[i].altura > altura_comp) {
            cout << personas[i].nombre << endl;
        }
    }

    for (i = 0; i < num_pers; ++i) {
        if (personas[i].altura < altura1) {
            pos_menor_altura = i;
            nombre_menor_altura = personas[i].nombre;
        }
    }

    if (pos_menor_altura == pos_menor_imc) {
        cout << "La persona con menor altura, " << nombre_menor_altura << ", coincide con el menor IMC";
    } else {
        cout<<"La persona con menor altura no coincide con la persona con mayor numero de IMC";
    }


    return 0;
}
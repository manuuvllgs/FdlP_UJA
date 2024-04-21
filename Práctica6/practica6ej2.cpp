// @author Manuel Villegas Aceituno
// @file practica6ej2.cpp
// @date 24-oct-2023
// @desc Define  una  estructura  que  sirva  para  representar  a  una  persona.  La  estructura  debe  contener
// dos  campos:  el  nombre  de  la  persona  y  un  valor  de  tipo  lógico  que  indica  si  la  persona  tiene
// algún  tipo  de  alergia.  Realiza  un  programa  que  dado  un  vector  de  personas  rellene  dos  nuevos
// vectores:  uno  que  contenga  las  personas  que  no  tienen  ningún tipo de alergia y otro que contenga las
// personas con alergia.

#include <iostream>

using namespace std;

struct Persona {
    string nombre;
    bool alergia;
};

const int PERSONAS = 10;

Persona personas[PERSONAS] = {
        {"Jose",   true},
        {"Maria",  false},
        {"Pedro",  true},
        {"Belen",  false},
        {"Alex",   true},
        {"Pablo",  false},
        {"Victor", true},
        {"Irene",  false},
        {"Zulema", true},
        {"Manuel", false},
};

int main() {

    int i = 0;

    string t[PERSONAS], f[PERSONAS];

    for (i = 0; i < PERSONAS; ++i) {
        if (personas[i].alergia) {
            t[i] = personas[i].nombre;
        } else {
            f[i] = personas[i].nombre;
        }
    }


    cout << "La lista de las personas con algún tipo de alergia es: " <<endl;
    for (i = 0; i < PERSONAS; ++i) {
        cout << t[i] <<endl;
    }

    cout << "La lista de las personas sin ningun tipo de alergia es: " <<endl;
    for (i = 0; i < PERSONAS; ++i) {
        cout << f[i] <<endl;
    }

    return 0;
}




// @author Manuel Villegas Aceituno
// @file practica6ej3.cpp
// @date 30-oct-2023
// @desc Modifica  el  programa  sobre  personas  con  posible  alergia  para  que  los  datos
// se  lean  de  la  entrada estándar.

#include <iostream>

using namespace std;

struct Persona {
    string nombre;
    bool alergia;
};

const int PERSONAS = 1000;

/*
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
*/

int main() {

    int i = 0;
    string alergia;
    int num_personas=0;
    Persona personas[PERSONAS];

    cout<<"Introduzca el numero de personas que van a conformar la lista: "; cin>>num_personas;

    for (i=0;i<num_personas;++i){
        cout<<"Introduzca el nombre de la persona " <<i+1 <<": "; getline(cin>>ws, personas[i].nombre);
        cout<<"Introduzca SI si tiene alguna alergia y NO si no tiene ningun tipo de alergia: "; getline(cin>>ws, alergia);cout<<endl;
        if (alergia=="SI"){
            personas[i].alergia=true;
        } else if (alergia=="NO")
            personas[i].alergia=false;
    }

    string t[PERSONAS], f[PERSONAS];

    for (i = 0; i < num_personas; ++i) {
        if (personas[i].alergia) {
            t[i] = personas[i].nombre;
        } else {
            f[i] = personas[i].nombre;
        }
    }


    cout << "La lista de las personas con algún tipo de alergia es: " <<endl;
    for (i = 0; i < num_personas; ++i) {
        cout << t[i] <<endl;
    }

    cout << "La lista de las personas sin ningun tipo de alergia es: " <<endl;
    for (i = 0; i < num_personas; ++i) {
        cout << f[i] <<endl;
    }

    return 0;
}



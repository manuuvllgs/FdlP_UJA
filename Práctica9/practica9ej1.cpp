// @author Manuel Villegas Aceituno
// @file practica9ej1.cpp
// @date 22-nov-2023
// @desc Una  aplicación  almacena  la  siguiente  información  sobre  cada  persona:  nombre,  número  del  DNI  y
// edad.  Las  personas  se  almacenan  en  un  vector  ordenado  según  el  DNI.  Realiza las siguientes funciones:

#include <iostream>
#include <sstream>

using namespace std;

const int TAM_MAX = 100;

struct Persona {
    string nombre;
    string num_dni;
    int edad;
};

/**
 * Descripcion: Funcion que busca en un vector de struct si existe algun dni mayor que otro intriducido y
 * en tal caso muestra la posicion en la que se encuentra.
 * @param personas vector de struct que almacena las personas
 * @param dni numero del dni a comparar con los del vector
 * @param pos posicion donde se encuentra el dni superior encontrado
 * @param cant_personas tamaño del vector
 * @return posicion donde se encuentra el dni superior encontrado
 */

int posDNIsuperior(Persona personas[TAM_MAX], const string dni, int &pos, const int cant_personas) {
    for (int i = 0; i < cant_personas; ++i) {
        if (personas[i].num_dni >= dni) {
            pos = i;
            return pos;
        };
    }
};

/**
 * Descripcion: funcion que desplaza una posicion a la derecha todos los que estan en una posicion p o p+n
 * @param personas vector de struct que almacena las personas
 * @param p entero que indica la posicion a partir de la que se deben mover
 * @param cant_personas tamaño del vector.
 */

void mueveDerecha(Persona personas[TAM_MAX], int p, int &cant_personas) {
    int posreal = p - 1;
    for (int i = cant_personas - 1; i >= posreal; --i) {
        personas[i + 1] = personas[i];
    }
    ++cant_personas;
    personas[posreal] = Persona();
}

/**
 * Descripcion: funcion que desplaza una posicion a la izquierda todos los que estan en una posicion p o p+n
 * @param personas vector de struct que almacena las personas
 * @param p entero que indica la posicion a partir de la que se deben mover
 * @param cant_personas tamaño del vector.
 */


void mueveIzquierda(Persona personas[TAM_MAX], int p, int &cant_personas) {
    for (int i = p; i < cant_personas; ++i) {
        personas[i - 1] = personas[i];
    }
    --cant_personas;
}


/**
 * Descripcion: Funcion que devuelve todos los datos de un vector de struct que almacena personas cuyos datos son el nombre, el dni y la edad.
 * @param peronas vector de struct que almacena las personas
 * @param persona1 string donde se va a retornar los datos
 * @param cant_personas tamaño del vector
 * @return todos los datos de un vector de struct que almacena personas cuyos datos son el nombre, el dni y la edad.
 */

string returnPersonas(Persona personas[TAM_MAX], int cant_personas, int i) {
    stringstream persona1;
    persona1 << "Nombre: ";
    persona1 << personas[i].nombre;
    persona1 << " / DNI: ";
    persona1 << personas[i].num_dni;
    persona1 << " / Edad: ";
    persona1 << personas[i].edad;

    return persona1.str();
}

/**
 *  Descricpion: funcion que buysca dentro de un vector de personas si alguna de ellas coincide con la edad dada y muestra sus datos
 * @param personas vector de personas (struct) que almacena la info
 * @param cant_personas tamaño del vector
 * @param edad edad buscada dentro del vector
 * @return los datos de la persona cuya edad coincide con la indicada
 */

string encontrarEdad(Persona personas[TAM_MAX], int cant_personas, int edad) {
    stringstream persona;
    for (int i = 0; i < cant_personas; ++i) {
        if (personas[i].edad == edad) {
            persona << "Nombre: " << personas[i].nombre << " / DNI: " << personas[i].num_dni << " / Edad: "
                    << personas[i].edad;
        }
    }
    return persona.str();
}

int main() {
    Persona personas[TAM_MAX] = {
            {"Luis",    "11111111", 39},
            {"Paco",    "22222222", 19},
            {"Maria",   "33333333", 52},
            {"Alberto", "44444444", 71},
            {"Alba",    "55555555", 14},
            {"Julia",   "66666666", 24},
            {"Lola",    "77777777", 31},
            {"Miguel",  "88888888", 94}
    };

    int pos, cant_pers = 8;
    stringstream datos;
/*
    cout << "DNI mayor que el introduido encontrado en la posicion " << posDNIsuperior(personas, "88888888", pos, 8) + 1;
    cout << endl;


    for (int j = 0; j < cant_pers; ++j) {
        cout << "Persona " << j + 1 << ": " << endl << returnPersonas(personas, cant_pers, j) << endl;
    }

    cout<<encontrarEdad(personas, cant_pers, 31);

*/

    char eleccion;

    do {

        cout << endl;
        cout << "Menu de gestion." << endl;
        cout << "Introduzca el 1 para introducir una nueva persona." << endl;
        cout << "Introduzca el 2 para eliminar una persona." << endl;
        cout << "Introduzca el 3 para mostrar el contenido del vector." << endl;
        cout << "Introduzca el 0 para salir del programa." << endl;

        cin >> eleccion;


        switch (eleccion) {
            case '1': {
                string nueva_pers_nombre, nueva_pers_dni;
                int nueva_pers_edad, nueva_pos;
                bool repetida;

                cout << "Ha escogido añadir una nueva persona." << endl;
                cout << "Introduzca el nombre: ";
                getline(cin >> ws, nueva_pers_nombre);
                cout << "Introduzca el numero del DNI (sin letra): ";
                getline(cin >> ws, nueva_pers_dni);
                cout << "Introduzca la edad: ";
                cin >> nueva_pers_edad;
                for (int i = 0; i < cant_pers; ++i) {
                    if (nueva_pers_nombre == personas[i].nombre && nueva_pers_dni == personas[i].num_dni &&
                        nueva_pers_edad == personas[i].edad) {
                        repetida = true;
                    }
                }
                if (repetida) {
                    cout << "La persona que esta intentando introducir ya esta almacenada en el vector.";
                } else {
                    cout << "¿En que posicion quiere añadirla?";
                    cin >> nueva_pos;
                    mueveDerecha(personas, nueva_pos, cant_pers);
                    personas[nueva_pos - 1].nombre = nueva_pers_nombre;
                    personas[nueva_pos - 1].num_dni = nueva_pers_dni;
                    personas[nueva_pos - 1].edad = nueva_pers_edad;
                    cout << "Se ha añadido correctamente.";
                }
            }
                break;

            case '2': {
                int pos;
                string dni_delete;
                bool encontrado;
                cout << "Introduzca el DNI de la persona que quiere eliminar: ";
                getline(cin >> ws, dni_delete);
                for (int i = 0; i < cant_pers; ++i) {
                    if (dni_delete == personas[i].num_dni) {
                        encontrado = true;
                        pos = i + 1;
                    }
                }
                if (encontrado) {
                    mueveIzquierda(personas, pos, cant_pers);
                    cout << "La persona con DNI " << dni_delete << " ha sido eliminada.";
                } else {
                    cout << "No se ha encontrado ninguna persona con ese DNI en el vector.";
                }
            }
                break;

            case '3': {
                for (int j = 0; j < cant_pers; ++j) {
                    cout << "Persona " << j + 1 << endl;
                    cout << returnPersonas(personas, cant_pers, j) << endl;
                }
            }
                break;

            case '0':
                cout << "Ha salido correctamente, se da por terminada la ejecucion del programa.";
        }

    } while (eleccion != 0);

    return 0;
}



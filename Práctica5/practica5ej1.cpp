// @author Manuel Villegas Aceituno
// @file practica5ej1.cpp - PRÁCTICA CADENAS DE CARACTERES
// @date 23-oct-2023
// @desc Realiza  un  programa  que  lea  una  cadena  de  caracteres  de  la  entrada  estándar  y
// muestre  en la salida estándar cuántas ocurrencias de cada vocal existen en la cadena.

#include <iostream>

using namespace std;

int main() {

    string frase;
    int i, cont_a = 0, cont_e = 0, cont_i = 0, cont_o = 0, cont_u = 0;

    cout << "Introduzca una frase: ";
    getline(cin >> ws, frase);

    for (i = 0; i < frase.length(); ++i)
        switch (frase[i]) {
            case 'a':
                ++cont_a;
                break;
            case 'e':
                ++cont_e;
                break;
            case 'i':
                ++cont_i;
                break;
            case 'o':
                ++cont_o;
                break;
            case 'u':
                ++cont_u;
                break;
        }
    cout << "La vocal a se encuentra en " << cont_a << " ocasiones" << endl;
    cout << "La vocal e se encuentra en " << cont_e << " ocasiones" << endl;
    cout << "La vocal i se encuentra en " << cont_i << " ocasiones" << endl;
    cout << "La vocal o se encuentra en " << cont_o << " ocasiones" << endl;
    cout << "La vocal u se encuentra en " << cont_u << " ocasiones" << endl;

    return 0;
}

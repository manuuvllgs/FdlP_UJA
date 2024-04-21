// @file ptactica10ej10.cpp
// @author Manuel Villegas Aceituno
// @date 9-oct-2023
// @desc Realiza un programa que lea caracteres desde el teclado hasta que se introduzca el
//carácter + ó -. El programa debe indicar si todos los caracteres leídos, excepto el de fin,
//han sido vocales minúsculas o no.

#include <iostream>
using namespace std;

int main(){
    char car;
    int contador_letras =0 ;
    int contador_minusculas = 0;
    do{
        cout<<"Introduza un caracter: "; cin>>car;
        ++contador_letras;
        if (car=='a'||car=='e'||car=='i'||car=='o'||car=='u')
            ++contador_minusculas;
    } while (!(car=='+'||car=='-'));

    if (contador_letras=contador_minusculas+1) {
        cout << "Todos los caracteres introducidos son vocales minusculas";
    }
    else {
        cout << "Todos los caracteres introducidos no son vocales minusculas";
    }

    return 0;
}
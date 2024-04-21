// @file ejercicio6.cpp
// @author Manuel Villegas Aceituno
// @date 18-sep-2023
// @desc Ejercicio 6 de la relacion PRACTICA ESTRUCTURAS SECUENCIALES

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // Declaramos las variables y le pedimos al usuario que introduzca una ecuacion cuadratica

    float a, b, c, x1, raiz, x2;
    cout << "Introduzca una ecuacion de segundo grado (ax^2+bx+c=0)" << endl;
    cout << "Introduzca el valor de la variable a que acompaña al x^2: ";
    cin >> a;
    cout << "Introduzca el valor de la variable a que acompaña al x: ";
    cin >> b;
    cout << "Introduzca el valor de la variable c (termino independiente): ";
    cin >> c;
    cout << endl;


    // Hacemos las cuentas para encontrar las raices y soluciones de la ecuacion cuadratica

    raiz = sqrt((b * b) - 4 * a * c);
    x1 = (-b + raiz) / (2 * a);
    x2 = (-b - raiz) / (2 * a);

    //Imprimimos en la pantalla las dos soluciones obtenidas

    cout << "la primera raiz hallada es x= " << x1;
    cout << "la segunda raiz hallada es x= " << x2 << endl;

    return 0;
}

// Ejercicio 10: para a=0 puesto que no sería una funcion cuadratica y para el ejercicio 5 si las notas fuesen negativas.
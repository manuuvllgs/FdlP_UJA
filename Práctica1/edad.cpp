// @file edad.cpp
// @author Manuel Villegas Aceituno
// @date 18-sep-2023
// @desc Calcula la edad del usuario

#include <iostream>
using namespace std;
int main() {
    int anio_de_nacimiento;

    // Pido el año de nacimiento del usuario

    cout << "Indique su año de nacimiento: ";
    cin >> anio_de_nacimiento;

    // Calculo cuantos años tiene

    int edad;
    edad = 2023 - anio_de_nacimiento;

    // Imprimo los años en pantalla

    cout <<"Su edad es: "  <<edad <<" años" <<endl;



    return 0;
}
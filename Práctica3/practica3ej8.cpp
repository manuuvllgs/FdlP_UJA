// @file ptactica10ej8.cpp
// @author Manuel Villegas Aceituno
// @date 9-oct-2023
// @desc Existen muchos métodos numéricos capaces de proporcionar aproximaciones al
//número 𝝿. Uno de ellos es el siguiente:
//Crea un programa que lea el grado de aproximación (es decir, número de términos
//de la sumatoria) y devuelva un valor aproximado de 𝝿.


#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double num, i, sum, res;
    cout << "Introduzca la cantidad de terminos con las que quiera calcular el termino Pi: ";
    cin >> num;

    for (i = 1; i < num; ++i)
        sum = sum + 6 / (i * i);

    cout << sqrt(sum);

    return 0;
}

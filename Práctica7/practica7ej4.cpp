// @author Manuel Villegas Aceituno
// @file practica7ej4.cpp
// @date 8-nov-2023
// @desc Realiza  una  función  que  tome  como  parámetros  los  extremos  de  un  intervalo  y  un  valor  y
// devuelva  un  valor  lógico  que  indique  si  el  valor  pertenece  al  intervalo  cerrado  formado  por
// los  extremos.  Por  ejemplo,  si  los  extremos  son  a  y  b  ,  con  a<=b  ,  y  el  valor  es  x  ,
// entonces debe devolver si  x  [a,b]  .

#include <iostream>

using namespace std;

/**
 * 
 * @param int1
 * @param int2
 * @param num
 * @return
 */

bool perteneciente(double int1, double int2, double num) {
    bool validar;
    if (num >= int1 && num <= int2) {
        validar = true;
    } else {
        validar = false;
    }
    return validar;
}

int main() {
    double int1, int2, num;

    cout << "Introduzca el primer numero del intervalo: ";
    cin >> int1;
    do {
        cout << "Introduzca el segundo numero del intervalo: ";
        cin >> int2;
    } while (!(int2 > int1));
    cout << "Introduzca el numero a comprobar si pertenece al intervalo: ";
    cin >> num;

    cout << perteneciente(int1, int2, num);

    return 0;


}
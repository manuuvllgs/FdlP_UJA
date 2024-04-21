// @author Manuel Villegas Aceituno
// @file practica7ej8.cpp
// @date 13-nov-2023
// @desc Implementa  una  función  que  calcule  la  suma  de  los  dígitos  de  un  número  entero  positivo.
// Por ejemplo, dado  3452  la suma de sus dígitos es  3+4+5+2=14  .

#include <iostream>

using namespace std;

int suma(int numero){
    int suma=0;
    do {
        suma=suma+numero%10;
        numero=numero/10;

    } while (!(numero%10==0));
    return suma;
}

int main(){
    int num;
    cout<<"Introduzca un numero: "; cin>>num;
    cout<<suma(num);

    return 0;
}
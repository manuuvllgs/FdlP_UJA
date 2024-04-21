// @author Manuel Villegas Aceituno
// @file practica11ej2.cpp
// @date 14-dic-2023
// @desc La  serie  de  Fibonacci  está  formada  por  la  secuencia  de
// números:  0,  1,  1,  2,  3,  5,  8,  13,  21,  34,  ...  Por  definición,  los  dos  primeros  números  de  la
// serie  son  0  y  1  y  los  números  siguientes  se  calculan  como  la  suma  de  los  dos  números  previos
// de  la  secuencia.  Realiza  un  programa  que  solicite  al  usuario  un  número  n  y  calcule  y  muestre  en
// la  pantalla  los  primeros  n  números  de  la  serie  de  Fibonacci.  Almacena  los  números  de  la  serie en
// un vector dinámico.

#include <iostream>
using namespace std;

void hacerSucesion (int *vector_sucesion, int numero){
    vector_sucesion[0] = 0; vector_sucesion[1] = 1;
    for (int i=2; i < numero; ++i){
        vector_sucesion[i] = vector_sucesion[i-2] + vector_sucesion[i-1];
    }
}

void muestraSucesion (int *vector_sucesion, int numero){
    cout<<"La sucesion hasta el numero " <<numero <<" es: " <<endl;

    for (int i=0; i < numero; ++i){
        cout<<vector_sucesion[i] <<", ";
    }
}



int main(){
    int numero_sucesion;

    cout<<"Introduce hasta que numero deseas conocer de la sucesion de Fibonacci: "; cin>>numero_sucesion;

    int *sucesionFibonacci = new int[numero_sucesion];


    hacerSucesion(sucesionFibonacci,numero_sucesion);
    muestraSucesion(sucesionFibonacci,numero_sucesion);



return 0;
}

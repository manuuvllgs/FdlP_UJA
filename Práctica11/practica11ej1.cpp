// @author Manuel Villegas Aceituno
// @file practica11ej1.cpp
// @date 14-dic-2023
// @desc Realiza  un  programa  que  solicite  al  usuario  un  tamaño  de  vector  y  reserve  memoria  dinámica
// para  un  vector  de  enteros  con  el  tamaño  indicado.  A  continuación  rellene  el  vector  con  valores
// solicitados  al  usuario.  Realiza  también  una  función  que  muestre  el  contenido  de  un  vector  y
// utilízala  para  comprobar  que  los  valores  solicitados  al  usuario  se han leído correctamente.

#include <iostream>
using namespace std;


void rellenaVector (int *vectorDeEnteros, const int tamanio_vector) {
    for (int i = 0; i < tamanio_vector; ++i) {
        cout << "Introduzca el numero que quiere introducir en la posicion " << i << ":";
        cin >> vectorDeEnteros[i];
    }
}

void devuelveVector (int *vectorDeEnteros, const int tamanio_vector){
    for (int i=0; i < tamanio_vector ; ++i){
        cout << vectorDeEnteros[i] << ", ";
    }
}

int main(){
    int tam_vector;
    cout<<"¿Cual va a ser el tamanio del vector?"; cin>>tam_vector;

    int *p_vector_original = new int[tam_vector];

    rellenaVector(p_vector_original,tam_vector);
    devuelveVector(p_vector_original,tam_vector);


    delete []p_vector_original;

    return 0;
}

// @author Manuel Villegas Aceituno
// @file practica8ej3.cpp
// @date 14-nov-2023
// @desc Escribe una función que intercambie el valor de sus dos parámetros.

#include <iostream>
using namespace std;

const int TAM_MAX=100;

int sumaVector(int v[TAM_MAX], int tam_vector){
    int suma=0;
    for (int i=0; i<tam_vector; ++i){
        suma=suma+v[i];
    }
    return suma;
}

int main(){
    int i=0, v[TAM_MAX], tam_vector=5;
    for (i;i<tam_vector;++i){
        cout<<"Introduzca el valor de la posicion " <<i+1 <<": "; cin>>v[i];
    }

    cout<<sumaVector(v, tam_vector);
}

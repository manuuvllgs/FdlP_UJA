// @author Manuel Villegas Aceituno
// @file practica10ej1.cpp
// @date 4-dic-2023
// @desc Escribe  una  función  que  tome  como  parámetro  un  vector  y  su  tamaño  y  devuelva  el  máximo  y
// el  mínimo  de  sus  elementos.  Utilice  parámetros  de  tipo  puntero  para  especificar el vector y los
// parámetros de salida de la función.

#include <iostream>
using namespace std;

const int TAM_MAX = 100;

int* toRetmayor ( int *p, int tam_vector){
    int *pNumeroMayor;
    pNumeroMayor = p;
    for (int i=1; i < tam_vector; ++i){
        if (p[i] > *pNumeroMayor){
            pNumeroMayor = p+i;
        }
    }
    return pNumeroMayor;
}

int* toRetmenor (int *p, int tam_vector){
    int *pNumeroMenor;
    pNumeroMenor = p;
    for (int i=1; i < tam_vector; ++i){
        if (p[i] < *pNumeroMenor){
            pNumeroMenor = p+i;
        }
    }
    return pNumeroMenor;
}

int main (){

    int *p = new int [TAM_MAX] ;
    int contP=0;
    p[contP]=4;
    p[contP++]=7;
    p[contP++]=1;
    p[contP++]=19;
    p[contP++]=21;
    p[contP++]=2;
    p[contP++]=44;
    p[contP++]=4;

    cout<<"El numero mayor es " <<*(toRetmayor(p,contP)) <<endl;
    cout<<"El numero menor es " <<*(toRetmenor(p,contP));

    delete []p;

    return 0;
}
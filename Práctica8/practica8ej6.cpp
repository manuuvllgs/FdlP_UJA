// @author Manuel Villegas Aceituno
// @file practica8ej3.cpp
// @date 14-nov-2023
// @desc Realiza  una  función  que  dada  una  matriz  y  un  número  de  fila  de  la  matriz  devuelva  el
// mínimo de los elementos almacenados en dicha fila.

#include <iostream>

using namespace std;
const int TAM_MAX = 100;

int menorMatriz(int v[TAM_MAX][TAM_MAX], int num_f, int num_c){
    int num_menor=1000;
    for (int i=0; i<num_c;++i){
        if (v[num_f][i]<num_menor){
            num_menor = v[num_f][i];
        }
    }
    return num_menor;
}

int main(){
    int num_f, num_c,numero_f, v[TAM_MAX][TAM_MAX];
    cout<<"Introduczca la matriz." <<endl;
    cout<<"Numero de filas: "; cin>>num_f;
    cout<<"Numero de columnas: "; cin>>num_c;
    for (int i=0; i < num_f ; ++i){
        for (int j=0; j < num_c ; ++j){
            cout<<"Introduce el valor de la posicion " <<i+1 <<"." <<j+1 <<": "; cin>>v[i][j];
        }
    }

    cout<<"Introduce el numero de fila del que quieres saber el menor elemento: "; cin>>numero_f;

    cout<<"El menor elemento de la fila " <<numero_f <<" es " <<menorMatriz(v,numero_f-1,num_c);


return 0;
}

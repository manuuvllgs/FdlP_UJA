// @author Manuel Villegas Aceituno
// @file practica10ej1.cpp
// @date 4-dic-2023
// @desc Escribe  una  función  que  tome  como  parámetros  dos  punteros  a  datos  del  mismo  tipo  e
// intercambie  el  contenido  de  las  zonas  de  memoria  a  las  que  apuntan  los  punteros.  Es  decir,
// la  función  debe  intercambiar  a  sus  dos  parámetros---recibidos  por  referencia  mediante sintaxis
// de paso de punteros.

#include <iostream>
#include <sstream>

using namespace std;

struct Pijama {
    string talla;
    int codigo_de_barras;
    bool estrenado;
};

string pijamatoString(const Pijama &pijama) {
    stringstream toRet;
    toRet << pijama.talla << ", " << pijama.codigo_de_barras << ", " << pijama.estrenado;
    return toRet.str();
}

void intercambiarPunteros ( Pijama *p1,  Pijama *p2){
    Pijama *p3;
    p3 = p1;
    p1 = p2;
    p2 = p3;
}


int main() {

    int numPijamas;

    Pijama pijama1 = {"XS", 737373, false};

    Pijama *pUnPijama = &pijama1;

    Pijama *pOtroPijama = new Pijama;

    (*pOtroPijama).talla = "L";
    pOtroPijama->estrenado = 1;

    intercambiarPunteros(pUnPijama, pOtroPijama);

    cout <<endl << pijamatoString (*pOtroPijama) <<endl;
    cout <<endl << pijamatoString (*pUnPijama);

    cout << "Cuantos pijamas tienes?";

    cin >> numPijamas;

    Pijama *pMuchosPijamas = new Pijama [numPijamas];

    pMuchosPijamas[0] = *pUnPijama;

    pijamatoString(pMuchosPijamas[0]);

    if (!pMuchosPijamas) return -1;

    delete []pMuchosPijamas;


    return 0;
}
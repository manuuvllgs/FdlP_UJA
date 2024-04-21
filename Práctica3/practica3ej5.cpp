// @author Manuel Villegas Aceituno
// @file practica3ej5.cpp - PRÁCTICA ESTRUCTURAS DE CONTROL
//CÍCLICAS
// @date 2-oct-2023
// @desc Escribe un programa que tome cada 4 horas la temperatura exterior, leyéndola durante
//un período de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura
//media del día, la temperatura más alta y la más baja.

#include <iostream>
using namespace std;

int main(){
    double temperatura1, temperatura2, temperatura3, temperatura4, temperatura5, temperatura6;
    cout << "Introduce la temperatura a las 00 horas" << endl;
    cin >> temperatura1;
    cout << "Introduce la temperatura a las 4 horas" << endl;
    cin >> temperatura2;
    cout << "Introduce la temperatura 8 horas" << endl;
    cin >> temperatura3;
    cout << "Introduce la temperatura 12 horas" << endl;
    cin >> temperatura4;
    cout << "Introduce la temperatura 16 horas  " << endl;
    cin >> temperatura5;
    cout << "Introduce la temperatura 20 horas" << endl;
    cin >> temperatura6;
    cout << "La temperatura media es " << (temperatura1+temperatura2+temperatura3+temperatura4+temperatura5+temperatura6)/6 <<endl;
    if(temperatura1>=temperatura2 and temperatura1>=temperatura3 and temperatura1>=temperatura4 and temperatura1>=temperatura5 and temperatura1>=temperatura6){
        cout << "La temperatura maxima es " << temperatura1 <<endl;
    }
    if(temperatura2>=temperatura1 and temperatura2>=temperatura3 and temperatura2>=temperatura4 and temperatura2>=temperatura5 and temperatura2>=temperatura6){
        cout << "La temperatura maxima es " << temperatura2 <<endl;
    }
    if(temperatura3>=temperatura2 and temperatura3>=temperatura1 and temperatura3>=temperatura4 and temperatura3>=temperatura5 and temperatura3>=temperatura6){
        cout << "La temperatura maxima es " << temperatura3<<endl;
    }
    if(temperatura4>=temperatura2 and temperatura4>=temperatura3 and temperatura4>=temperatura1 and temperatura4>=temperatura5 and temperatura4>=temperatura6){
        cout << "La temperatura maxima es " << temperatura4<<endl;
    }
    if(temperatura5>=temperatura2 and temperatura5>=temperatura3 and temperatura5>=temperatura4 and temperatura5>=temperatura1 and temperatura5>=temperatura6){
        cout << "La temperatura maxima es " << temperatura5<<endl;
    }
    if(temperatura6>=temperatura2 and temperatura6>=temperatura3 and temperatura6>=temperatura4 and temperatura6>=temperatura5 and temperatura6>=temperatura1){
        cout << "La temperatura maxima es " << temperatura6<<endl;
    }
    if(temperatura1<=temperatura2 and temperatura1<=temperatura3 and temperatura1<=temperatura4 and temperatura1<=temperatura5 and temperatura1<=temperatura6){
        cout << "La temperatura minima es " << temperatura1<<endl;
    }
    if(temperatura2<=temperatura1 and temperatura2<=temperatura3 and temperatura2<=temperatura4 and temperatura2<=temperatura5 and temperatura2<=temperatura6){
        cout << "La temperatura minima es " << temperatura2<<endl;
    }
    if(temperatura3<=temperatura2 and temperatura3<=temperatura1 and temperatura3<=temperatura4 and temperatura3<=temperatura5 and temperatura3<=temperatura6){
        cout << "La temperatura minima es " << temperatura3<<endl;
    }
    if(temperatura4<=temperatura2 and temperatura4<=temperatura3 and temperatura4<=temperatura1 and temperatura4<=temperatura5 and temperatura4<=temperatura6){
        cout << "La temperatura minima es " << temperatura4<<endl;
    }
    if(temperatura5<=temperatura2 and temperatura5<=temperatura3 and temperatura5<=temperatura4 and temperatura5<=temperatura1 and temperatura5<=temperatura6){
        cout << "La temperatura minima es " << temperatura5<<endl;
    }
    if(temperatura6<=temperatura2 and temperatura6<=temperatura3 and temperatura6<=temperatura4 and temperatura6<=temperatura5 and temperatura6<=temperatura1){
        cout << "La temperatura minima es " << temperatura6<<endl;
    }
}


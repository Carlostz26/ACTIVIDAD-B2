/**
* Nombre del archivo: ZambranoCarlos-SumaN.cpp
* Autor: Carlos Trejo
* Fecha: 01/06/2022
* Descripcion: Suma de Valores
*/

#include<iostream>
#include <stdio.h>

using namespace std;

int main(){

    //Declaracion de variables

    /*Numero de valores a sumar*/
    int NumValores;

    /*Valores*/
    int nun;

    /*Resultado de la suma*/
    int Resultado = 0;

    //Entrada de datos
    cout << "Ingrese el Numero de Valores a Sumar: ";
    cin >> NumValores;

    for(int i = 0; i < NumValores; i++){
        cout <<"Ingrese el valor "<<i+1<<": ";
        cin >> nun;
        Resultado+=nun;
    }
    //Salida de datos
    cout<<"La Suma Total de Numeros es: "<<Resultado;

}

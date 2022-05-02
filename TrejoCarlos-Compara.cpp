/**
* Nombre del archivo: ZambranoCarlos-Compara.cpp
* Autor: Carlos Trejo
* Fecha: 01/06/2022
* Descripcion: Comparar valores
*/

#include<iostream>
#include <stdio.h>

using namespace std;

int main(){
    //Declaracion de variables
    int Valor1,Valor2;

    //Entrada de datos
    cout << "Ingrese el Primmer Valor: ";
    cin >> Valor1;
    cout << "Ingrese el Segundo Valor: ";
    cin >> Valor2;

    //Comparacion de los valores
    if(Valor1 > Valor2){
        cout<<"El valor "<<Valor1<<" es mayor "<<Valor2<<endl;
    }else if(Valor1 < Valor2){
        cout<<"El valor "<<Valor2<<" es mayor "<<Valor1<<endl;
    }else{
        cout<<"---Los valores son iguales---"<<endl;
    }

}


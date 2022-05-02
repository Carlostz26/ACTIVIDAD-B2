/**
* Nombre del archivo: ZambranoCarlos-CuentaMoneda.cpp
* Autor: Carlos Trejo
* Fecha: 01/06/2022
* Descripcion: Contar la cantidad de monedas de cada
*  denominacion ingresadas por el usuario
*/

#include<iostream>
#include <stdio.h>
using namespace std;

int main(){

    //Declaracion de las Variables
    int Total = 0,numMonedas = 0;
    int Denominacion = 0;
    int Contador_10 = 0,Contador_25 = 0,Contador_50 = 0;
    int total_10 = 0,total_25 = 0,total_50= 0;
    int op;
    do
    {
        cout<< "Ingrese la Denominacion de la Moneda: ";
        cin >> Denominacion;

        /*Segun la Denominacion Ingresada se aumenta el contador
        Correspondiente*/
        switch (Denominacion)
        {
           case 10:
              Contador_10++;
              total_10 = Contador_10*10;
            break;

           case 25:
              Contador_25++;
              total_25 = Contador_25*25;
            break;

           case 50:
              Contador_50++;
              total_50 = Contador_50*50;
            break;

           default:
              cout<<"Denominacion no valida"<<endl;
        }

        numMonedas++;
        cout<< "Desea Agregar Otra Moneda \n (1)si (0)no: ";
        cin >> op;

    } while (op != 0);

    Total = total_10+total_25+total_50;

    cout<<"\n***Total de Monedas "<<numMonedas<<"****"<<endl;
    cout<<"->Numeros de Monedas de Deominacion 10ctv: "<<Contador_10<<endl;
    cout<<"->Cantidad de Dinero: "<<total_10<<endl;;
    cout<<"->Numeros de Monedas de Deominacion 25ctv: "<<Contador_25<<endl;
    cout<<"->Cantidad de Dinero: "<<total_25<<endl;;
    cout<<"->Numeros de Monedas de Deominacion 50ctv: "<<Contador_50<<endl;
    cout<<"->Cantidad de Dinero: "<<total_50<<endl;
    cout<<"->Cantidad de Dinero Total: "<<Total<<endl;


}


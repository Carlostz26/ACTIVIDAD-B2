/**
* Nombre del archivo: ZambranoCarlos-PuntoVenta.cpp
* Autor: Carlos Trejo
* Fecha: 01/06/2022
* Descripcion: Calculo del precio de productos
*/
#include<iostream>
#include<conio.h>
#include <stdio.h>

using namespace std;

int main(){

    //Declaracion de variables
    double MontoProducto,MontoBruto,MontoPagar;
    double Descuento,ValorDescuento;
    double IVA;
    int op;
    int i = 0;

    //Entrada de datos
    cout<<"Ingrese El Valor del Descuento: ";
    cin >> Descuento;
     do
    {
        cout<< "Ingrese El Monto del Producto "<<i+1<<": ";
        cin >> MontoProducto;
        MontoBruto += MontoProducto;
        cout<< "Desea Agregar Otro Producto \n (1)si (0)no: ";
        cin >> op;
        i++;
    } while (op != 0);

    //Calculo de los Valores
    ValorDescuento = (MontoBruto*Descuento)/100;
    IVA = MontoBruto * 0.12;
    MontoPagar = MontoBruto-ValorDescuento+IVA;

    //Salida de Datos
    cout<<"\n****FACTURA*****"<<endl;
    cout<<"Monto Bruto: "<<MontoBruto<<endl;
    cout<<"IVA: "<< IVA<<endl;
    cout<<"Descuento: "<<ValorDescuento<<endl;
    cout<<"Monto Pagar: "<<MontoPagar<<endl;

    return 0;
}



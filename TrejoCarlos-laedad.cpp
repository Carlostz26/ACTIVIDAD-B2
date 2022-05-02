/**
* Nombre del archivo: ZambranoCarlos-laedad.cpp
* Autor: Carlos Trejo
* Fecha: 01/06/2022
* Descripcion: Calculo de la edad de un usuario
*/
#include<iostream>
#include <stdio.h>

using namespace std;

// funcion para calcular la edad actual
void encontrarEdad(int dia_actual, int mes_actual,
             int ano_actual, int dia_nacimiento,
             int mes_nacimiento, int ano_nacimiento)
{
    // dias de cada mes
    int Meses[] = { 31, 28, 31, 30, 31, 30, 31,
                          31, 30, 31, 30, 31 };

     /*si la fecha de nacimiento es mayor que el mes
     de nacimiento actual, entonces no cuente este mes
     y agregue 30 a la fecha para restar la fecha y obtener
     los días restantes*/
    if (dia_nacimiento > dia_actual) {
        dia_actual = dia_actual + Meses[mes_nacimiento - 1];
        mes_actual = mes_actual - 1;
    }

    /*si el mes de nacimiento excede el mes actual,
    entonces no cuente este año y agregue 12 al mes
    para que podamos restar y encontrar la diferencia*/
    if (mes_nacimiento > mes_actual) {
        ano_actual = ano_actual - 1;
        mes_actual = mes_actual + 12;
    }

    // calcular dis, mes, año
    int dia_calculada = dia_actual - dia_nacimiento;
    int mes_calculado = mes_actual - mes_nacimiento;
    int ano_calculado = ano_actual - ano_nacimiento;

    // imprimir la edad actual
    cout<<"Edad actual:"<<endl;
    cout<<"Anos:"<<ano_calculado<<" Meses:"<<mes_calculado<<" Dias:"<<dia_calculada<<endl;
}

// código del controlador para verificar la función anterior
int main()
{
    //Declaracion de las Variables

    // actual dd// mm/yyyy
    int dia_actual;
    int mes_actual;
    int ano_actual;

    // naciemiento dd// mm// yyyy
    int dia_nacimiento;
    int mes_nacimiento;
    int ano_nacimiento;

    cout << "Introduzca la fecha actual en el formato dd mm yyyy : ";
    cin >> dia_actual >> mes_actual >> ano_actual;
    cout << "Introduzca la fecha de nacimiento en el formato dd mm yyyy : ";
    cin >> dia_nacimiento >> mes_nacimiento >> ano_nacimiento;

    //llamada de funcion para imprimir edad
    encontrarEdad(dia_actual, mes_actual, ano_actual,
            dia_nacimiento, mes_nacimiento, ano_nacimiento);
    return 0;
}

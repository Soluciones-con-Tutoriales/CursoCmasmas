#include "pch.h"
#include<iostream>
#include<conio.h>
using namespace System;
using namespace std;

int main()
{
/*
Escribir un programa que ejecute con una sola sentencia 
lo indicado en cada literal.Suponiendo que han sido declaradas las variables
enteras largas valor1 y valor2, 
y que valor1 se inicialice a 200000.
a) Declarar la variable Ptr que sea un puntero a una variable de tipo long.
b) Asignar la dirección de la variable valor1 a la variable puntero Ptr.
c) Imprimir el valor de la variable apuntada por Ptr.
d) Asignar el valor de la variable apuntada por Ptr a la variable valor2.
e) Imprimir el valor de valor2.
f) Imprimir la dirección de valor1.
g) Imprimir la dirección almacenada en Ptr.
*/
    long Valor1 = 200000;
    long Valor2 = 0;
    long* Ptr = &Valor1;
    cout << "Valor Ptr " << *Ptr << endl;
    Valor2 = *Ptr;
    cout << "Valor2: " << Valor2 << endl;
    cout << "Dir Valor1 " << &Valor1<<endl;
    cout << "Dir Ptr " << Ptr;

    return 0;
}

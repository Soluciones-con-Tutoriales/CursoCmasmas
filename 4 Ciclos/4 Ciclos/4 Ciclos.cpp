#include "pch.h"

using namespace System;
using namespace System::Collections::Generic;
/*/
    for(int x = 0; x<=10;x++){(x++: suma, x--, resta)
        (Inicio; fin ; avance)
        ...
    }
    while(Condición){
        ...
    }
    do{
        ...
    } while(Condición);

*/
int main(array<System::String^>^ args)
{
    ////factorial
    //Console::WriteLine("Ejercicio Factorial");
    //int NF = Convert::ToInt32(Console::ReadLine());
    //int Factorial = 1;
    //for (int x = 1; x <= NF; x++) {
    //    //Factirial = Factorial *x
    //    Factorial *= x;
    //}
    //Console::WriteLine("El resultado del factorial es: " + Convert::ToString(Factorial));
    //Divisores /Numeros primos
    //Console::WriteLine("Ingrese un número para conocer sus divisores");
    //int N = Convert::ToInt32(Console::ReadLine());
    //int contadorDiv = 0;
    //String^ Divisores = "";
    //int contador = 1;
    //do {
    //    if ((N % contador) == 0) {
    //        Divisores += " " + contador.ToString() + ",";
    //        contadorDiv++;
    //    }
    //    contador++;
    //} while (contador <= N);
    //Console::WriteLine("Divisores: " + Divisores->ToString());
    //if (contadorDiv > 2) {
    //    Console::WriteLine("El número ingresado no es primo");
    //}
    //else {
    //    Console::WriteLine("El número ingresado es primo");

    //}
    List<String^>^ Lista = gcnew List<String^>();
    for (int x = 0; x <= 5; x++) {
        Lista->Add(x.ToString());
    }
    for each (String^ Numero in Lista)
    {
        Console::WriteLine(Numero->ToString());
    }
}

#include "pch.h"

using namespace System;
/*int Resultado = 1;
int Suma(int Final,int Contador) {
    if (Contador <= Final) {
        Resultado += Contador;
        Contador++;
        return Suma(Final, Contador);
    }
    else {
        return Resultado;
    }
}
*/
//Potencia con multiplicaciones
int Resultado = 1;
int PotenciaConMultiplicacion(int Base, int Exponenete, int Contador) {
    if (Contador < Exponenete) {
        Resultado *= Base;
        Contador++;
        return PotenciaConMultiplicacion(Base, Exponenete, Contador);
    }
    else {
        return Resultado;
    }
}
//Potencia con sumas
int Auxiliar = 0, Auxiliar2 = 1;
int Suma(int Contador, int Limite) {
    if (Contador < Limite) {
        Auxiliar += Auxiliar2;
        Contador++;
        return Suma(Contador, Limite);
    }
    else {
        return Auxiliar;
    }
}
int Potencia(int Base, int Exponente, int Contador) {
    if (Contador < Base) {
        Auxiliar = 0;
        Auxiliar2 = Suma(0, Base);
        Contador++;
        return Potencia(Base, Exponente, Contador);
    }
    else
    {
        return Auxiliar2;
    }
}
int main(array<System::String ^> ^args)
{
    /*Console::WriteLine("Ingresar un número");
    int N = Convert::ToInt32(Console::ReadLine());
    Console::WriteLine("El resultado es: " + Suma(N, 0).ToString());
    */
    Console::WriteLine("Ingrese la base");
    int Base = Convert::ToInt32(Console::ReadLine());
    Console::WriteLine("Ingrese Exponente");
    int Exponente = Convert::ToInt32(Console::ReadLine());
    Console::WriteLine("El Resultado de la potencia a travéz de multiplicaciones en serie de {0}^{1}: es {2}", Base.ToString(), Exponente.ToString(), PotenciaConMultiplicacion(Base, Exponente, 0));
    Console::WriteLine("El Resultado de la potencia a travéz de sumas en serie de {0}^{1}: es {2}", Base.ToString(), Exponente.ToString(), Potencia(Base, Exponente, 0));
    return 0;

}

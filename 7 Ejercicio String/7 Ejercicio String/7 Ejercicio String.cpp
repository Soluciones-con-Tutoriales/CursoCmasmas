#include "pch.h"

using namespace System;

int main(array<System::String^>^ args)
{
    String^ dicho = "Aunque se vista, ";
    String^ cadena_1 = " la mona";
    String^ cadena_2 = " de seda";
    String^ cadena_3 = "lejos se queda.";
    //Aunque la mona se vista de seda, mona se queda.
    dicho = dicho->Insert(6, cadena_1);
    dicho = dicho->Insert(dicho->Length - 2, cadena_2);
    cadena_3 = cadena_3->Remove(0, 5);
    cadena_3 = cadena_3->Insert(0, "mona");
    dicho += cadena_3;
    Console::WriteLine(dicho);

    return 0;
}

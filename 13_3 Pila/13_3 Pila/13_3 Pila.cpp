 #include "pch.h"
#include "Pila.h"
using namespace System;

int main(array<System::String ^> ^args)
{
	Pila^ pila = gcnew Pila();
	for (int i = 1; i < 10; i++)
	{
		pila->add("Pedido #" + i.ToString());
	}
	Console::WriteLine("Limpiando pila");
	for (int i = 1; i < 10; i++)
	{
		Console::WriteLine(pila->Remove());
	}

    return 0;
}

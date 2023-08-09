#include "pch.h"
#include "Lista.h";
using namespace System;

int main(array<System::String^>^ args)
{

	Lista^ lista = gcnew Lista();
	Random^ rnd = gcnew Random();
	for (int i = 1; i < 11; i++)
	{
		lista->add(rnd->Next(0, 101));
	}

	array<int, 1>^ Data = lista->GetData();
	for each (int var in Data)
	{
		Console::WriteLine(var);
	}
	lista->add(500);
	Console::WriteLine("Ordenando");
	lista->Sort();
	Data = lista->GetData();
	for each (int var in Data)
	{
		Console::WriteLine(var);
	}

	Console::WriteLine("Elemento: " + lista->GetElement(1));
	Console::WriteLine("Elemento: " + lista->IndexOf(500));
    return 0;
}

#include "pch.h"
#include "Cola.h"
#include "Carro.h"
#include <string>
using namespace System;

int main(array<System::String ^> ^args)
{
    Cola^ _Cola = gcnew Cola();
	for (int i = 1; i < 11; i++)
	{
		Carro^ _Carro = gcnew Carro();
		_Carro->Placa = "P " + Convert::ToString(i);
		_Carro->Marca = "Toyota";
		_Carro->Modelo = Convert::ToInt32("202" + Convert::ToString(i));
		_Cola->add(_Carro);
	}
	array<Carro^, 1>^ Data = _Cola->GetData();
	for each (Carro^ var in Data)
	{
		Console::WriteLine(var->Placa);
	}
	Carro^ Carro_O = _Cola->Remove();

	Console::WriteLine("Placa: {0}", Carro_O->Placa);
	Console::WriteLine("Marca: {0}", Carro_O->Marca);
	Console::WriteLine("Modelo: {0}", Carro_O->Modelo);
	Data = _Cola->GetData();
	for each (Carro ^ var in Data)
	{
		Console::WriteLine(var->Placa);
	}

    return 0;
}

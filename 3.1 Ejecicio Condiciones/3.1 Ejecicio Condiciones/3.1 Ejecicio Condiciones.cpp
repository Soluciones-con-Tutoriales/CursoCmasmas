#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	try
	{
		Console::WriteLine("Men�");
		Console::WriteLine("1) Meses");
		Console::WriteLine("2) Salir");
		int Opcion = Convert::ToInt32(Console::ReadLine());
		switch (Opcion)
		{
		case 1: {
			Console::WriteLine("Ingrese un N�mero para conocer su mes");
			int Mes = Convert::ToInt32(Console::ReadLine());
			switch (Mes)
			{
			case 1:
			{
				Console::WriteLine("Enero");
				break;
			}
			case 2:
			{
				Console::WriteLine("Febrero");
				break;
			}
			case 3:
			{
				Console::WriteLine("Marzo");
				break;
			}
			case 4:
			{
				Console::WriteLine("Abril");
				break;
			}
			case 5:
			{
				Console::WriteLine("Mayo");
				break;
			}case 6:
			{
				Console::WriteLine("Junio");
				break;
			}
			case 7:
			{
				Console::WriteLine("Julio");
				break;
			}case 8:
			{
				Console::WriteLine("Agosto");
				break;
			}case 9:
			{
				Console::WriteLine("Septiembre");
				break;
			}case 10:
			{
				Console::WriteLine("Octubre");
				break;
			}case 11:
			{
				Console::WriteLine("Noviembre");
				break;
			}case 12:
			{
				Console::WriteLine("Diciembre");
				break;
			}
			default:
			{
				Console::WriteLine("N�mero invalido los meses solo son de 1 (Enero) hasta 12 (Diciembre)");

				break;
			}
			}
			break;
		}case 2:
		{
			Console::WriteLine("Saliendo...");
			Environment::Exit(0);
		}
		default:
			Console::WriteLine("Opcion Invalida");

			break;
		}

	}
	catch (Exception^ ex)
	{
		Console::WriteLine(ex->Message);
	}
    return 0;
}

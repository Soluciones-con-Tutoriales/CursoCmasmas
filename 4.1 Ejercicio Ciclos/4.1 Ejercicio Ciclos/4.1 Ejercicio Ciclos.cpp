#include "pch.h"
using namespace System;
using namespace System::Threading;
int main(array<System::String^>^ args)
{
	int Opcion = 0;
	int N1 = 0;
	int N2 = 0;

	while(Opcion != 5) {
		try
		{
			Console::WriteLine("Menú---Seleccione una opción");
			Console::WriteLine("1) Sumar");
			Console::WriteLine("2) Restar");
			Console::WriteLine("3) Multiplicar");
			Console::WriteLine("4) Dividir");
			Console::WriteLine("5) Salir");
			Opcion = Convert::ToInt32(Console::ReadLine());
			Console::Clear();
			switch (Opcion)
			{
			case 1: {
				Console::WriteLine("Ingrese un número");
				N1 = Convert::ToInt32(Console::ReadLine());
				Console::WriteLine("Ingrese un número");
				N2 = Convert::ToInt32(Console::ReadLine());
				Console::WriteLine("El resultado de la suma es: " + Convert::ToString(N1 + N2));
				Thread::Sleep(2000);
				Console::Clear();
				break;
			}
			case 2: {
				Console::WriteLine("Ingrese un número");
				N1 = Convert::ToInt32(Console::ReadLine());
				Console::WriteLine("Ingrese un número");
				N2 = Convert::ToInt32(Console::ReadLine());
				Console::WriteLine("El resultado de la Resta es: " + Convert::ToString(N1 - N2));
				Thread::Sleep(2000);
				Console::Clear();
				break;
			}
			case 3: {
				Console::WriteLine("Ingrese un número");
				N1 = Convert::ToInt32(Console::ReadLine());
				Console::WriteLine("Ingrese un número");
				N2 = Convert::ToInt32(Console::ReadLine());
				Console::WriteLine("El resultado de la multiplicacion es: " + Convert::ToString(N1 * N2));
				Thread::Sleep(2000);
				Console::Clear();
				break;
			}
			case 4: {
				Console::WriteLine("Ingrese un número");
				N1 = Convert::ToInt32(Console::ReadLine());
				Console::WriteLine("Ingrese un número");
				N2 = Convert::ToInt32(Console::ReadLine());
				Console::WriteLine("El resultado de dividir es: " + Convert::ToString(N1 / N2));
				Thread::Sleep(2000);
				Console::Clear();
				break;
			}
			case 5: {
				Console::WriteLine("Saliendo del sistema");
				N1 = 0;
				N2 = 0;
				Thread::Sleep(2000);
				Console::Clear();
				break;
			}
			default:
				Console::WriteLine("Opción invalida");
				Thread::Sleep(2000);
				Console::Clear();
				break;
			}
			Console::Clear();
			Console::WriteLine("Ejecución terminada");
		}
		catch (Exception^ ex)
		{
			Console::WriteLine("Error: " + ex->Message);
			Thread::Sleep(2000);
			Console::Clear();
		}
	}
	return 0;
}
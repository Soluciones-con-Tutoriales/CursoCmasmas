#include "pch.h"
using namespace System;
struct Fechas
{
	int Dia;
	int Mes;
}Fecha_Actual,Fecha_De_Nacimiento;
void ValidarMes(int mes) {
	if (mes < 0 || mes > 12) {
		//Nos redirecciona a un error en especifico
		throw(gcnew Exception("El mes debe ser un numero entre 1 y 12"));
	}
}
int main(array<System::String ^> ^args)
{
	try
	{
		Console::WriteLine("Ingrese la fecha Actual");
		Console::WriteLine("Ingrese el dia");
		Fecha_Actual.Dia = Convert::ToInt32(Console::ReadLine());
		Console::WriteLine("Ingrese el Mes");
		Fecha_Actual.Mes = Convert::ToInt32(Console::ReadLine());
		ValidarMes(Fecha_Actual.Mes);
		Console::WriteLine("Ingrese la fecha de su cumpleaños");
		Console::WriteLine("Ingrese el dia");
		Fecha_De_Nacimiento.Dia = Convert::ToInt32(Console::ReadLine());
		Console::WriteLine("Ingrese el Mes");
		Fecha_De_Nacimiento.Mes = Convert::ToInt32(Console::ReadLine());
		ValidarMes(Fecha_De_Nacimiento.Mes);
		if (Fecha_Actual.Dia == Fecha_De_Nacimiento.Dia && Fecha_Actual.Mes == Fecha_De_Nacimiento.Mes) {
			Console::WriteLine("Feliz Cumpleaños!");
		}
		else {
			Console::WriteLine("No es tu cumpleaños :(");
		}
	}
	catch (Exception^ ex)
	{
		Console::WriteLine("ERROR: " + ex->Message);
	}
}

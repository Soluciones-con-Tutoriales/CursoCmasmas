#pragma once
using namespace System;
using namespace System::Windows::Forms;
ref class LogicaVector
{
private:
	//array<tipo_dato,Columnas> nombre=gcnew array<tipo_dato,Columnas>(tamaño);
	array<int>^ VectorNumeros = gcnew array<int>(10);
	bool VerificarRepetido(int n) {
		for (int i = 0; i < VectorNumeros->Length; i++) {
			if (VectorNumeros[i] == n) {
				return true;
			}
		}
		return false;
	}
	void LlenarVector() {
		int contador = 0;
		Random^ rnd = gcnew Random();

		while (contador< VectorNumeros->Length) {
			int n = rnd->Next(0, 11);
			//nombre[casilla]= dato;
			//dato = nombre[casilla];
			if (!VerificarRepetido(n)) {
				VectorNumeros[contador] = n;
				contador++;
			}
		
		}
	}
public:
	void listarVector(ListBox^ lb) {
		LlenarVector();
		lb->Items->Clear();
		for (int x = 0; x < VectorNumeros->Length; x++) {
			lb->Items->Add(VectorNumeros[x]);
		}
	}
};


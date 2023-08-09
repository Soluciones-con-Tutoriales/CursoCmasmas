#pragma once
#include <iostream>
#include "Carro.h"
#include <msclr\gcroot.h>
using namespace System;
using namespace msclr;
using namespace System::Collections;
struct Nodo {
	gcroot<Carro^> Valor;
	Nodo* Siguiente;
};
ref class Cola
{
private: 
	int _Count = 0;
	Nodo* _cola = nullptr;
public:
	void add(Carro^ valor) {
		try
		{
			Nodo* Nuevo = new Nodo();
			Nuevo->Valor = valor;
			Nuevo->Siguiente = nullptr;
			if (_cola == nullptr) { 
				_cola = Nuevo; 
			}
			else {
				Nodo* temp = _cola;
				while (temp->Siguiente != nullptr) {
					temp = temp->Siguiente;
				}
				temp->Siguiente = Nuevo;
			}
			_Count++;

		}
		catch(Exception^ ex)
		{
			throw(ex);
		}
	}
	Carro^ Remove() {
		try
		{
			if (_cola == nullptr) {
				throw gcnew Exception("La cola esta vacía");
			}
			Carro^ temp_val = _cola->Valor;
			Nodo* temp = _cola->Siguiente;
			delete _cola;
			_cola = temp;
			_Count--;
			return temp_val;
		}
		catch (Exception^ ex)
		{
			throw(ex);
		}

	}
	Carro^ Peek() {
		try
		{
			if (_cola == nullptr) {
				throw gcnew Exception("La cola esta vacía");
			}
			return _cola->Valor;
		}
		catch (Exception^ ex)
		{
			throw(ex);
		}

	}
	int Count() {
		return this->_Count;
	}
	array<Carro^, 1>^ GetData() {
		Nodo* temp = _cola;
		array<Carro^, 1>^ Data = gcnew array<Carro^, 1>(_Count);
		for (int i = 0;  i < _Count; i++)
		{
			Data[i] = temp->Valor;
			if (temp->Siguiente != nullptr) {
				temp = temp->Siguiente;
			}
		}
		return Data;
	}
};


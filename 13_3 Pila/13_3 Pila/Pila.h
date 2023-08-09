#pragma once
#include <iostream>
#include <msclr\gcroot.h>
using namespace System;
using namespace msclr;
using namespace System::Collections;
struct Nodo {
	gcroot<String^> Texto;
	Nodo* Next;
};
ref class Pila
{
private: 
	Nodo* pila = nullptr;
	int _count = 0;
public:
	void add(String^ Dato) {
		try
		{
			if (pila == nullptr) { pila = new Nodo(); }
			Nodo* Nuevo = new Nodo();
			Nuevo->Texto = Dato;
			Nuevo->Next = pila;
			pila = Nuevo;
			_count++;
		}
		catch (Exception^ ex)
		{
			throw(ex);
		}
	}

	String^ Remove() {
		try
		{
			if (_count == 0) { throw gcnew Exception("La pila esta vacia!!"); }
			String^ out = pila->Texto;
			Nodo* temp = pila->Next;
			delete pila;
			pila = temp;
			_count--;
			return out;
		}
		catch (Exception^ ex)
		{
			throw(ex);
		}
	}

	String^ Peek() {
		try
		{
			if (_count == 0) { throw gcnew Exception("La pila esta vacia!!"); }
			return pila->Texto;
		}
		catch (Exception^ ex)
		{
			throw(ex);
		}
	}

	array<String^, 1>^ GetData() {
		try
		{
			Nodo* aux = pila;
			array<String^, 1>^ Data = gcnew array<String^, 1>(_count);
			for (int i = 0; i < _count; i++)
			{
				Data[i] = aux->Texto;
				if (aux->Next != nullptr) {
					aux = aux->Next;
				}
			}
			return Data;
		}
		catch (Exception^ ex)
		{
			throw(ex);
		}
	}

	int Count() {
		return _count;
	}
};


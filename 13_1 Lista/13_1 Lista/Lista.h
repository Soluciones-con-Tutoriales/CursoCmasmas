#pragma once
using namespace System;
using namespace System::Collections;
#include <iostream>
#include <stdexcept>
struct Nodo
{
	Nodo* Siguiente;
	int valor;
};
ref class Lista
{
private:
	Nodo* Raiz;
	int _Count = 0;
public:
	void add(int numero) {
		try
		{
			Nodo* nuevo = new Nodo();
			nuevo->valor = numero;
			nuevo->Siguiente = nullptr;
			if (Raiz == nullptr) {
				Raiz = nuevo;
			}
			else {
				Nodo* temp = Raiz;
				while (temp->Siguiente != nullptr) {
					temp = temp->Siguiente;
				}
				temp->Siguiente = nuevo;
			}
			_Count++;
		}
		catch (Exception^ ex)
		{
			throw(ex);
		}
	}
	array<int, 1>^ GetData() {
		try
		{
			Nodo* aux = Raiz;
			array<int, 1>^ Data = gcnew array<int, 1>(_Count);
			for (int i = 0; i < _Count; i++)
			{
				Data[i] = aux->valor;
				if (aux->Siguiente != nullptr) {
					aux = aux->Siguiente;
				}
			}
			return Data;
		}
		catch (Exception^ ex)
		{
			throw(ex);
		}
	}
	void remove(int numero) {
		try
		{
			Nodo* temp = Raiz;
			Nodo* prev = nullptr;
			while (temp != nullptr && temp->valor != numero) {
				prev = temp;
				temp = temp->Siguiente;
			}
			if (temp == nullptr) {
				throw gcnew Exception("El valor a eliminar no se encuentra");
			}
			if (prev == nullptr) {
				Raiz = temp->Siguiente;
			}
			else {
				prev->Siguiente = temp->Siguiente;
			}
			_Count--;
			delete temp;
		}
		catch (Exception^ ex)
		{
			throw(ex);
		}
	}
	int Count() {
		return this->_Count;
	}
	void Sort() {
		try
		{
			Nodo* Inicio = Raiz;
			Nodo* Next = nullptr;
			for (int i = 0; i < _Count; i++)
			{
				if (Inicio->Siguiente != nullptr) {
					Next = Inicio->Siguiente;
				}
				for (int j = i+1; j < _Count; j++)
				{
					if (Inicio->valor > Next->valor) {
						int temp = Inicio->valor;
						Inicio->valor = Next->valor;
						Next->valor = temp;
					}
					if (Next->Siguiente != nullptr) {
						Next = Next->Siguiente;
					}
				}
				if (Inicio->Siguiente != nullptr) {
					Inicio = Inicio->Siguiente;
				}
			}
		}
		catch (Exception^ex)
		{
			throw(ex);
		}
	}
	int GetElement(int Index) {
		try
		{
			Nodo* temp = Raiz;
			if (Index<0 || Index> _Count-1) {
				throw(gcnew IndexOutOfRangeException());
			}
			int countaux = 0;
			while (countaux < Index) {
				temp = temp->Siguiente;
				countaux++;
			}
			return temp->valor;
		}
		catch (Exception^ ex)
		{
			throw(ex);
		}
	}
	int IndexOf(int value) {
		try
		{
			int index = 0;
			Nodo* temp = Raiz;
			while (temp->Siguiente!=nullptr) {
				if (temp->valor == value) {
					break;
					return index;
				}
				temp = temp->Siguiente;
				index++;
			}
			return index == _Count + 1 ? -1: index;
		}
		catch (Exception^ ex)
		{
			throw(ex);
		}
	}
};


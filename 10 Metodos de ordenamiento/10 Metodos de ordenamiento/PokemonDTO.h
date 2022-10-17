#pragma once
using namespace System;
ref class PokemonDTO
{
public:
	property String^ Tipo {
		String^ get() { return this->_Tipo; }
		void set(String^ value) { this->_Tipo = value; }
	}
	property String^ Nombre {
		String^ get() { return this->_Nombre; }
		void set(String^ value) { this->_Nombre = value; }
	}
	property int Ndex {
		int get() { return this->_Ndex; }
		void set(int value) { this->_Ndex = value; }
	}




private:
	int _Ndex;
	String^ _Nombre;
	String^ _Tipo;


};


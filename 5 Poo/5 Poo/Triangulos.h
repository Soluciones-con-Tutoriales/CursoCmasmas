#pragma once
using namespace System;
ref class Triangulos
{
private:
	double Hipotenusa;
	double CatOpuesto;
	double CatAdyacente;
	double AnguloOpuesto;
	double AnguloAdyacente;
	double Area;
	double Perimetro;
	//SohCahToa
	/*
	Sen(0) = Op/Hip
	Cos(0) = Ady/Hip
	Tan(0) = Op/Ady
	c^2 = a^2+b^2
	*/
	/*
		void Nombre(Parametros opcionales){
			...
		}
	*/
	void CalcularAdyacente() {
		//ady= op/Tan(0)
		CatAdyacente = CatOpuesto / Math::Tan(AnguloOpuesto);

	}
	 void CalcularHipotenusa() {
//		 c ^ 2 = a ^ 2 + b ^ 2

		 double Potencias = Math::Pow(CatOpuesto, 2)+Math::Pow(CatAdyacente,2);
		 Hipotenusa = Math::Sqrt(Potencias);
	
	}
	 void CalcularAnguloAdyacente() {
		double A_Opuesto =  AnguloOpuesto * ( 180/ Math::PI);
		 AnguloAdyacente=180-(90+A_Opuesto);
	 }
	 void CalcularArea() {
		//(b*h)/2
		 Area = (CatOpuesto * CatAdyacente) / 2;
	 }
	 void CalcularPerimetro() {
		 Perimetro = CatOpuesto + CatAdyacente + Hipotenusa;
	 }
public:
	Triangulos(double Cateto_Opuesto,double Angulo_Opuesto) {
		CatOpuesto = Cateto_Opuesto;
		//rad = angulo * (pi/180)
		AnguloOpuesto = Angulo_Opuesto*(Math::PI/180);
	}
	/*
	<tipo de dato a retornar> Nombre(Parametros opcionales){
		...
		Return Variable(Tipo dato);
	}
	*/
	String^ ObtenerDatos() {
		CalcularAdyacente();
		CalcularHipotenusa();
		CalcularAnguloAdyacente();
		CalcularArea();
		CalcularPerimetro();
		String^ Info = "Hipotenusa: " + Convert::ToString(Hipotenusa) + Environment::NewLine + "Opuesto: " + Convert::ToString(CatOpuesto) + Environment::NewLine + " Adyacente: " + Convert::ToString(CatAdyacente)+Environment::NewLine;
		Info += "Angulo Opuesto: " + Convert::ToString(AnguloOpuesto*(180/Math::PI)) + Environment::NewLine + " Angulo Adyacente: " + Convert::ToString(AnguloAdyacente) + Environment::NewLine;
		Info += "Area: " + Convert::ToString(Area) + Environment::NewLine + "Perimetro: " + Convert::ToString(Perimetro);
		return Info;
	}
};


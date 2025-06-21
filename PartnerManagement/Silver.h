#pragma once

#include<iostream>
#include<string> 
#include "Partner.h"

using namespace std;

class Plata :public Socio {
protected:
	double souvenir; //descuento por sourvenirs
public:

	Plata(double souvenir, string nombre, string fechaIngreso, char estado) :Socio(nombre, fechaIngreso, estado)
	{
		this->souvenir = souvenir;
	}
	~Plata() {}

	double getSouvenir()
	{
		return souvenir;
	}



	//comportamientos
	void imprimeFila()
	{
		cout << "Nombre: " << getNombre() << " Descuento: " << getSouvenir() << " Fecha ingreso: " << getFechaIngreso() << " Estado: " << getEstado() << endl;
	}
};

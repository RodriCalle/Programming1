#pragma once

#include<iostream>
#include<string> 
#include "Partner.h"

using namespace std;

class Oro :public Socio {
protected:
	double estacionamiento = 50;
	double concierto; //descuento pot concierto
public:

	Oro(double concierto, string nombre, string fechaIngreso, char estado) :Socio(nombre, fechaIngreso, estado)
	{
		this->concierto = concierto;
	}

	~Oro() {}

	double getConcierto()
	{
		return concierto;
	}

	double getEstacionamiento()
	{
		return estacionamiento;
	}

	//comportamientos
	void imprimeFila()
	{
		cout << "Nombre: " << getNombre() << " Descuento: " << getConcierto() << " Fecha ingreso: " << getFechaIngreso() << " Estado: " << getEstado() << endl;
	}
};

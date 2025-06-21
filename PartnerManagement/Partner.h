#pragma once

#include<iostream>
#include<string>

using namespace std;

class Socio {

protected:
	double aporte = 20;
	string nombre;
	string fechaIngreso;
	char estado;

public:
	Socio(string nombre, string fechaIngreso, char estado)
	{
		this->nombre = nombre;
		this->fechaIngreso = fechaIngreso;
		this->estado = estado;
	}

	~Socio() {}
	//seters y geters
	double	getAporte()
	{
		return aporte;
	}

	string	getNombre()
	{
		return nombre;
	}

	string	getFechaIngreso() {

		return fechaIngreso;
	}

	char	getEstado()
	{
		return estado;
	}
};

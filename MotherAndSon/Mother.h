#pragma once

#include <iostream>
#include "Son.h"

class Madre {
private:
	//atributos
	char* nombre;
	Hijo** hijos;
	int numeroHijos;
public:
	//constructor
	Madre() {
		nombre = NULL;
		numeroHijos = 0;
		hijos = new Hijo * [numeroHijos];
	}
	//destructor
	~Madre() {
		if (hijos != NULL)
			delete[] hijos;
	}
	//métodos
	void setNombre(char* nombre) {
		this->nombre = nombre;
	}
	void agregarHijo(Hijo* nuevoHijo) {
		Hijo** hj = new Hijo * [numeroHijos + 1];
		for (int i = 0; i < numeroHijos; i++) {
			hj[i + 1] = hijos[i];
		}
		hj[0] = nuevoHijo;
		numeroHijos++;
		//validación
		if (hijos != NULL)
			delete[] hijos;
		hijos = hj;
	}
	string getInfo() {
		string res = "Información de la Madre \n";
		res += "Nombre: " + (string)(nombre);
		res += "\n";
		string r;
		for (int i = 0; i < numeroHijos; i++) {
			r += "\n" + (string)(hijos[i]->getinfo());
		}
		return (res + r);
	}
};
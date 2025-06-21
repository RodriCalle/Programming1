#pragma once

#include "conio.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Hijo {

private:
	//atributos
	char* nombre;
	int edad;
	//constructor
public:
	Hijo(char* n = NULL, int a = 0) :nombre(n), edad(a) {}
	//destructor
	~Hijo() {}
	//métodos
	string getinfo() {

		string res = "Hijo: ";
		res += "\t Nombre: " + (string)(nombre);
		res += "\t Edad: " + to_string(edad);
		//char *r = &*res.begin();
		return res;
	}
};

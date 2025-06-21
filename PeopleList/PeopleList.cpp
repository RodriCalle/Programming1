#include "pch.h"

using namespace System;

#include "Person.h"
#include "PeopleList.h"

int main() {
	// Instancia de la clase ListaPersonas
	ListaPersonas* listaPersonas = new ListaPersonas();

	// Variable de tipo Persona
	Persona* persona;

	int e;
	long long dni;
	char s;
	double p;
	double a;
	int op;

	do {
		cout << "[1]Insertar Datos al inicio: " << endl;
		cout << "[2]Salir" << endl;
		cin >> op;
		if (op == 1) {
			char* nombre = new char[20];
			cin.ignore();
			cout << "Ingrese su nombre: ";
			cin.getline(nombre, 20);
			cout << "Ingrese su edad: ";
			cin >> e;
			cout << "Ingrese su sexo (M o F): ";
			cin >> s;
			s = toupper(s);
			s = persona->compararSexo(s);
			cout << "Ingrese su peso: ";
			cin >> p;
			cout << "Ingrese su altura: ";
			cin >> a;
			dni = persona->generarDNI();
			persona = new Persona(nombre, e, dni, s, p, a);
			listaPersonas->insertarAlInicio(persona);
		}

	} while (op != 2);

	if (listaPersonas->getnumPersonas() != 0) {
		cout << "==================DATOS ============== " << endl;
		for (int i = 0; i < listaPersonas->getnumPersonas(); i++)
		{
			cout << "---------------------------------------------" << endl;
			cout << "NOMBRE		: " << listaPersonas->getElemento(i)->getnombre() << endl;
			cout << "EDAD		: " << listaPersonas->getElemento(i)->getedad() << endl;
			bool m = listaPersonas->getElemento(i)->esMayorEdad();
			if (m)
				cout << "Es mayor de edad" << endl;
			else
				cout << "NO es mayor de edad" << endl;
			cout << "SEXO:		: " << listaPersonas->getElemento(i)->getsexo() << endl;
			cout << "PESO		: " << listaPersonas->getElemento(i)->getpeso() << endl;
			cout << "ALTURA		: " << listaPersonas->getElemento(i)->getaltura() << endl;
			cout << "IMC		: " << listaPersonas->getElemento(i)->calcularIMC() << endl;
			cout << "---------------------------------------------" << endl;
		}
	}
	else
		cout << "Lista vacio" << endl;
	//System("pause");
}
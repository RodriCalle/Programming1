#pragma once

#include "Person.h"

class ListaPersonas {
private:
	Persona** lista;
	int numPersonas;
public:
	ListaPersonas();
	~ListaPersonas();
	int getnumPersonas(); // retorna la numPersonasidad de elementos
	//obtener el objeto o elemento en una posicion
	Persona* getElemento(int pos);
	void insertarAlInicio(Persona* nuevo);
};

//------
ListaPersonas::ListaPersonas() {
	numPersonas = 0;
	lista = new Persona * [numPersonas];
}
//------
ListaPersonas::~ListaPersonas() {
	if (lista != NULL)
		delete[] lista;
}
//------
int ListaPersonas::getnumPersonas() { return numPersonas; }
//------
Persona* ListaPersonas::getElemento(int pos) {
	if (pos < numPersonas)
		return lista[pos];
}
//------

void ListaPersonas::insertarAlInicio(Persona* nuevo) {
	//1. Crear una lista auxiliar
	Persona** aux = new Persona * [numPersonas + 1];
	//2. copiar los elementos del lista a la lista aux
	//dejando la posicion o vacia
	for (int i = 0; i < numPersonas; i++) {
		aux[i + 1] = lista[i];
	}
	//3. Insertar el nuevo elemento(objeto) en la posicion 0
	aux[0] = nuevo;
	//4. incrementamos 
	numPersonas++;
	//5to eliminamos al lista antigui
	if (lista != NULL)
		delete[] lista;
	//6to copiamos los elementos(objetos)del aux a la lista
	lista = aux;
}
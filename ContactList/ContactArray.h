#pragma once

#include "Contact.h"

class ArregloContacto
{
private:
	Contacto** arreglocontacto;
	int* N;
public:
	ArregloContacto(void);
	~ArregloContacto(void);
	void AgregarContacto(Contacto* dato);
	Contacto* GetContacto(int indice);
	int GetN();
};

//IMPLEMENTAR LA CLASE
ArregloContacto::ArregloContacto()
{
	arreglocontacto = NULL;
	N = new int;
	*N = 0;
}

ArregloContacto::~ArregloContacto()
{
	for (int i = 0; i < *N; i++)
		delete arreglocontacto[i];

	delete N;
}

void ArregloContacto::AgregarContacto(Contacto* dato)
{
	//arreglo temporal
	Contacto** Aux;
	Aux = new Contacto * [*N + 1];

	if (Aux != NULL)
	{
		for (int i = 0; i < *N; i++)
			Aux[i] = arreglocontacto[i];

		Aux[*N] = dato;
		*N = *N + 1;

		if (arreglocontacto != NULL)
			delete arreglocontacto;

		arreglocontacto = Aux;

	}
}

Contacto* ArregloContacto::GetContacto(int indice)
{
	return arreglocontacto[indice];
}

int ArregloContacto::GetN()
{
	return *N;
}
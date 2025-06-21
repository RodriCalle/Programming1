#pragma once

#include "string.h"

class Contacto
{
private:
	int Edad;
	char* Nombre;
public:
	Contacto(void);
	~Contacto(void);
	void SetEdad(int nueva_edad);
	int GetEdad();
	void SetNombre(char* nuevo_nombre);
	char* GetNombre();
};

//IMPLEMENTAR LA CLASE
Contacto::Contacto()
{
	Edad = 0;
	Nombre = new char[20];
}
Contacto::~Contacto()
{
	delete[]Nombre;
}

void Contacto::SetEdad(int nueva_edad)
{
	Edad = nueva_edad;
}

int Contacto::GetEdad()
{
	return Edad;
}

void Contacto::SetNombre(char* nuevo_nombre)
{
	//copiar cadenas
	//Nombre=nuevo_nombre; ---> No funciona
	strcpy(Nombre, nuevo_nombre);
}

char* Contacto::GetNombre()
{
	return Nombre;
}
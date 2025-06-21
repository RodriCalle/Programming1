#include "pch.h"
#include "StudentData.h"
#include <iostream>
#include "conio.h"

#define N 3

using namespace std;
using namespace System;

int main()
{
	//defino varible
	DATOS_ALUMNO* estudiantes;
	//crea el arreglo
	estudiantes = new DATOS_ALUMNO[N];

	//ingreso datos al arreglo
	for (int i = 0; i < N; i++)
	{
		cout << "ESTUDIANTE " << i + 1 << "\n";
		cout << " Ingrese codigo: "; cin >> estudiantes[i].codigo;
		cout << " Ingrese nombre: "; cin >> estudiantes[i].nombre;
		cout << " Ingrese carrera: "; cin >> estudiantes[i].carrera;
	}

	//imprime arreglo
	cout << "\nDATOS DEL ARREGLO\n";
	for (int i = 0; i < N; i++)
	{
		cout << " " << estudiantes[i].codigo << "\t" << estudiantes[i].nombre << "\t" << estudiantes[i].carrera;
		cout << endl;
	}

	_getch();
	return 0;
}

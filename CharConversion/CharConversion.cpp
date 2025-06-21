#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;

int main()
{
	char* a;
	a = new char;

	cout << "Ingrese un caracter: ";
	cin >> *a;

	cout << "El numero ingresado es " << (int)*a;
	getch();

	cout << "\n\n";

	int* valor = new int;

	cout << "Ingrese un numero: ";
	cin >> *valor;

	cout << "\n\t El caracter ingresado es: " << (char)*valor;


	getch();
	return 0;
}

#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;

int main()
{
	int* n1, * n2;
	n1 = new int;
	n2 = new int;

	//ENTRADA DE DATOS
	cout << "Ingrese el primer numero: ";
	cin >> *n1;
	cout << "Ingrese el segundo numero: ";
	cin >> *n2;

	//SALIDA DE DATOS
	cout << "\n \t La suma es: " << *n1 + *n2;
	cout << "\n \t La resta es: " << *n1 - *n2;
	cout << "\n \t El producto es: " << *n1 * *n2;
	cout << "\n \t La division es: " << *n1 / (*n2 * 1.0);
	cout << "\n \t El modulo es: " << *n1 % *n2;
	cout << "\n \t El cuadrado de n1: " << *n1 * *n1;
	cout << "\n \t El cubo de n2: " << *n2 * *n2 * *n2;
	getch();
	return 0;
}

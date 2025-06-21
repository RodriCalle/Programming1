#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

using namespace System;

int main()
{
	// For
	for (int i = 0; i < 10; i++)
	{
		cout << i;
		cout << "\n";
	}

	// While
	int* numero = new int;
	int* contar = new int;

	cout << "Ingrese el numero: ";
	cin >> *numero;

	*contar = 1;

	while (*contar <= *numero)
	{
		cout << *contar << endl;
		*contar = *contar + 1;
	}

	//Do While
	float* n = new float;

	do
	{
		cout << "Ingrese 1.5 <= *a <= 3.5: \n";
		cin >> *n;

	} while (*n < 1.5 || *n > 3.5);


	getch();

    return 0;
}

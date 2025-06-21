#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

using namespace System;

int main()
{
	//Establecer variables//
	Random r;
	int* numero = new int;
	int* contador = new int;
	int* guess = new int;
	*contador = 1;

	*numero = r.Next(1, 100);
	cout << "El numero aleatorio es: " << *numero << endl;

	while (1)
	{
		cout << "\nYo creo que el numero es: ";
		cin >> *guess;

		cout << "Intentos realizados: " << *contador;
		++*contador;

		if (*numero == *guess)
			break;

		getch();
		//Console::Clear();

	}
	return 0;
}

#pragma once


#include"iostream"

using namespace std;
using namespace System;

int menu()
{
	int opcion;

	do
	{
		Console::ForegroundColor = ConsoleColor::Red;
		cout << "       MENU" << endl << endl;
		Console::ForegroundColor = ConsoleColor::White;
		cout << "1. Mostrar Contactos" << endl;
		cout << "2. Agregar Contactos" << endl << endl;

		cout << "INGRESE UNA OPCION: "; cin >> opcion;
	} while (opcion < 1 || opcion >2);

	return opcion;
}

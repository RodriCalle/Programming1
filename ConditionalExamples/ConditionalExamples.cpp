#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;

int main()
{
	char* marca = new char;
	int* tipo = new int;
	char* modelo = new char;

	cout << "El fabricante (H: HP, D: Dell, A: Apple): ";
	cin >> *marca;


	if (*marca == 'H' || *marca == 'D' || *marca == 'A') {
		cout << "El tipo de Programa (1: Desktop, 2: Laptop): ";
		cin >> *tipo;

		if (*tipo == 1 || *tipo == 2) {

			cout << "Elija el modelo (T: Todo en uno, C: Clásica, S: Touch screen, O: otros): ";
			cin >> *modelo;

			if (*modelo == 'T' || *modelo == 'C' || *modelo == 'S' || *modelo == 'O') {

				if (*marca == 'H')
				{
					switch (*tipo)
					{
					case 1: if (*modelo == 'T') {
						cout << "EL PRECIO ES: 3500";
					}
						  else if (*modelo == 'C') {
						cout << "EL PRECIO ES: 2300";
					}
						  else { cout << "INCORRECTO"; }
						  break;
					case 2: if (*modelo == 'S') {
						cout << "EL PRECIO ES: 2500";
					}
						  else if (*modelo == 'O') {
						cout << "EL PRECIO ES: 2100";
					}
						  else { cout << "INCORRECTO"; }
						  break;
					}
				}
				else if (*marca == 'D')
				{
					switch (*tipo)
					{
					case 1: if (*modelo == 'T') {
						cout << "EL PRECIO ES: 3500";
					}
						  else if (*modelo == 'C') {
						cout << "EL PRECIO ES: 3200";
					}
						  else { cout << "INCORRECTO"; }
						  break;
					case 2: if (*modelo == 'S') {
						cout << "EL PRECIO A PAGAR ES: 3800";
					}
						  if (*modelo == 'O') {
							  cout << "EL PRECIO ES: 3000";
						  }
						  else { cout << "INCORRECTO"; }
						  break;
					}
				}

				else if (*marca == 'A')
				{
					switch (*tipo)
					{
					case 1: if (*modelo == 'T') {
						cout << "EL PRECIO ES: 4500";
					}
						  else if (*modelo == 'C') {
						cout << "EL PRECIO ES: 4800";
					}
						  else { cout << "INCORRECTO"; }
						  break;
					case 2: if (*modelo == 'S') {
						cout << "EL PRECIO ES: 5600";
					}
						  else
						if (*modelo == 'O') {
							cout << "EL PRECIO ES: 4400";
						}
						else { cout << "INCORRECTO"; }
						  break;
					}
				}
				else
				{
					cout << "INCORRECTO";
				}
			}
			else
			{
				cout << "INCORRECTO";
			}
		}
		else
		{
			cout << "INCORRECTO";
		}
	}
	else
	{
		cout << "INCORRECTO";
	}
	getch();
	return 0;
}

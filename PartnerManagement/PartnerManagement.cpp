#include "pch.h"
#include<iostream>
#include"Management.h"
#include<vector>
#include<string>
#include "Menu.h"

using namespace System;
using namespace std;

Gestion gestion;

int main()
{
	int opcion;
	while (true)
	{
		menu();
		cin >> opcion;
		if (opcion == 0) break;
		switch (opcion)
		{
		case 1:
			gestion.leerSocio();
			break;
		case 2:
			gestion.pintaDatoOro();
			gestion.pintaDatoPlata();
			break;
		case 3:
			gestion.leerSocio();
			break;
		case 4:
			gestion.eliminaSocio();
			break;
		default:
			break;
		}
	}
	cout << "RESUMEN DE DATOS" << endl;
	cout << "Cantidad de asociados ORO en estado Activo: " << gestion.hallaCantidadOroActivo() << endl;
	cout << "Mostrar el aporte total de los asociados incluido el pago adicional de los socios Oro: " << (gestion.tamanioListaOro() + gestion.tamanioListaPlata()) * 20 + gestion.tamanioListaOro() * 50 << endl;
	cout << "El descuento total realizado por conciertos: " << gestion.hallaDescuentoConcierto() << endl;
	cout << "El descuento total por compras de souvenirs: " << gestion.hallaDescuentoSouvenir() << endl;
	cout << "Lista de asociados ORO en estado Activo: " << endl;
	gestion.pintaDatoOroActivo();

	system("pause");
}

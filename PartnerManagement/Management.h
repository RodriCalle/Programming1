#pragma once

#include<iostream>
#include<string>
#include"Gold.h"
#include"Silver.h"
#include<vector>
#include<string>

using namespace std;
class Gestion {
protected:
	vector<Oro> listaOro;
	vector<Plata> listaPlata;
	int cantidad;
public:
	int tamanioListaOro()
	{
		return listaOro.size();
	}

	int tamanioListaPlata()
	{
		return listaPlata.size();
	}

	void leerSocio()
	{
		double tconcierto; string tnombre; string tfechaIngreso; char testado;
		int tipo; double tsourvenir;
		cout << "Nombre de socio   : ";
		cin >> tnombre;
		cout << "Fecha de ingreso : ";
		cin >> tfechaIngreso;
		cout << "Estado del socio A: Activo, I: Inactivo, S: Suspendido: ";
		cin >> testado;
		while (true)
		{
			cout << "Tipo de socio: (1)Oro  (2)Plata : ";
			cin >> tipo;
			if (tipo == 1 || tipo == 2) break;
		}
		if (tipo == 1)
		{
			cout << "Cantidad de boletos para el cocierto : ";
			cin >> cantidad;
			if (cantidad <= 3) tconcierto = 50 * cantidad;
			else tconcierto = 3 * 50 * +(cantidad - 3) * 30;
			Oro* oro = new Oro(tconcierto, tnombre, tfechaIngreso, testado);
			listaOro.push_back(*oro);
		}
		else
		{
			cout << "Cantidad de sourvenirs : ";
			cin >> cantidad;
			tsourvenir = 10 * cantidad;

			Plata* plata = new Plata(tsourvenir, tnombre, tfechaIngreso, testado);
			listaPlata.push_back(*plata);
		}
		cout << "\n -------------------------------------------------------------- " << endl;
	}

	void pintaDatoOro()
	{
		for (int i = 0; i < listaOro.size(); i++)
		{
			listaOro[0].imprimeFila();
		}
	}

	void pintaDatoPlata()
	{
		for (int i = 0; i < listaPlata.size(); i++)
		{
			listaPlata[0].imprimeFila();
		}
	}

	void eliminaSocio()
	{
		int pos;
		int tipo;
		while (true)
		{
			cout << "Tipo de socio cuyos datos va ha eliminar: (1)Oro  (2)Plata : ";
			cin >> tipo;
			if (tipo == 1 || tipo == 2) break;
		}

		if (tipo == 1)
		{
			while (true)
			{
				cout << "Posicion del socio la eliminar : ";
				cin >> pos;
				if (pos < listaOro.size())
				{
					for (int i = pos; i < listaOro.size() - 1; i++)
						listaOro[i] = listaOro[i + 1];
					listaOro.pop_back();  //elimina el ultimo elemento
					break;
				}
				else cout << pos << " es muy alto" << endl;
			}
		}
		else
		{
			while (true)
			{
				cout << "Posicion del socio la eliminar : ";
				cin >> pos;
				if (pos < listaPlata.size())
				{
					for (int i = pos; i < listaPlata.size() - 1; i++)
						listaPlata[i] = listaPlata[i + 1];
					listaPlata.pop_back(); //elimina el ultimo elemento
					break;
				}
				else cout << pos << " es muy alto" << endl;
			}
		}
	}

	void actualizaSocio()
	{
		int pos;
		int tipo;
		while (true)
		{
			cout << "Tipo de socio cuyos datos va han a actualizar: (1)Oro  (2)Plata : ";
			cin >> tipo;
			if (tipo == 1 || tipo == 2) break;
		}

		if (tipo == 1)
		{
			while (true)
			{
				cout << "Posicion del socio la actualizar : ";
				cin >> pos;
				if (pos < listaOro.size())
				{
					insertaEnPosicion(tipo, pos);
					break;
				}
				else cout << pos << " es muy alto" << endl;
			}
		}
		else
		{
			while (true)
			{
				cout << "Posicion del socio la eliminar : ";
				cin >> pos;
				if (pos < listaPlata.size())
				{
					insertaEnPosicion(tipo, pos);
					break;
				}
				else cout << pos << " es muy alto" << endl;
			}
		}
	}

	void insertaEnPosicion(int tipo, int pos)
	{
		double tconcierto; string tnombre; string tfechaIngreso; char testado;
		double tsourvenir;
		while (true)
		{
			cout << "Nombre de socio (N para salir)  : ";
			cin >> tnombre;
			if (tnombre == "N") break; //Terminando la lectura
			cout << "Fecha de ingreso : ";
			cin >> tfechaIngreso;
			cout << "Estado del socio: ";
			cin >> testado;
			if (tipo == 1)
			{
				cout << "Cantidad de boletos para el cocierto : ";
				cin >> cantidad;
				if (cantidad <= 3) tconcierto = 50 * cantidad;
				else tconcierto = 3 * 50 * +(cantidad - 3) * 30;
				Oro* oro = new Oro(tconcierto, tnombre, tfechaIngreso, testado);
				listaOro[pos] = *oro;
			}
			else
			{
				cout << "Cantidad de sourvenirs : ";
				cin >> cantidad;
				tsourvenir = 10 * cantidad;

				Plata* plata = new Plata(tsourvenir, tnombre, tfechaIngreso, testado);
				listaPlata[pos] = *plata;
			}
			cout << "\n -------------------------------------------------------------- " << endl;
		}
	}
	int hallaCantidadOroActivo()
	{
		int tmp = 0;
		for (int i = 0; i < listaOro.size(); i++)
		{
			if (listaOro[0].getEstado() == 'A')
			{
				tmp++;
			}
		}
		return tmp;
	}

	void pintaDatoOroActivo()
	{
		for (int i = 0; i < listaOro.size(); i++)
		{
			if (listaOro[0].getEstado() == 'A')
			{
				listaOro[i].imprimeFila();
			}
		}
	}

	double hallaDescuentoConcierto()
	{
		double tmp = 0;
		for (int i = 0; i < listaOro.size(); i++)
		{

			tmp += listaOro[i].getConcierto();
		}
		return tmp;
	}

	double hallaDescuentoSouvenir()
	{
		double tmp = 0;
		for (int i = 0; i < listaPlata.size(); i++)
		{
			tmp += listaPlata[i].getSouvenir();
		}
		return tmp;
	}
};

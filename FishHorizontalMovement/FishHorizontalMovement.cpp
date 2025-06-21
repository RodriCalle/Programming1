#include "pch.h"
#include "FishData.h"
#include <iostream>
#include "Functions.h"
using namespace std;
#define N 5

using namespace System;

int main()
{
	Console::SetWindowSize(80, 40);
	Console::CursorVisible = false;

	//define el puntero
	DATOS_PEZ* peces;
	//crea arreglo
	peces = new DATOS_PEZ[N];
	Random r;
	//defino los valores iniciales del arreglo
	for (int i = 0; i < N; i++)
	{
		peces[i].x = r.Next(20, 60);
		peces[i].y = r.Next(15, 30);
		peces[i].dx = 1;
	}

	//animacion
	int indice = 0;
	int ciclo = 1;
	while (1)
	{
		ciclo++;
		if (ciclo % 777777 == 0)
		{
			ciclo = 1;
			//borrar
			ubica(peces[indice].x, peces[indice].y); cout << " ";
			//mover
			if (peces[indice].x < 1 || peces[indice].x>78)
				peces[indice].dx = peces[indice].dx * -1;

			peces[indice].x = peces[indice].x + peces[indice].dx;
			//imprimir
			ubica(peces[indice].x, peces[indice].y); cout << "*";

			indice++;
			if (indice >= N) indice = 0;
		}



	}

	_getch();
	return 0;
}

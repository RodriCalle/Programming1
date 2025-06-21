#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

using namespace System;

int main()
{
	//Establecer variables//
	Random r1;
	int* numero1 = new int;
	int* numero2 = new int;
	int* contador1 = new int;
	*contador1 = 1;

	while (1)
	{
		*numero1 = r1.Next(1, 7);
		*numero2 = r1.Next(1, 7);

		if (*numero1 == 1)
		{
			cout << "\n|     |";
			cout << "\n|  .  |";
			cout << "\n|     |";
			++*contador1;
		}
		else if (*numero1 == 2)
		{
			cout << "\n|.    |";
			cout << "\n|    .|";
			cout << "\n|     |";
			++*contador1;
		}
		else if (*numero1 == 3)
		{
			cout << "\n|.    |";
			cout << "\n|  .  |";
			cout << "\n|    .|";
			++*contador1;
		}
		else if (*numero1 == 4)
		{
			cout << "\n|.   .|";
			cout << "\n|     |";
			cout << "\n|.   .|";
			++*contador1;
		}
		else if (*numero1 == 5)
		{
			cout << "\n|.   .|";
			cout << "\n|  .  |";
			cout << "\n|.   .|";
			++*contador1;
		}
		else if (*numero1 == 6)
		{
			cout << "\n|.   .|";
			cout << "\n|.   .|";
			cout << "\n|.   .|";
		}
		if (*numero2 == 1)
		{
			cout << "\n|     |";
			cout << "\n|  .  |";
			cout << "\n|     |";
			++*contador1;
		}
		else if (*numero2 == 2)
		{
			cout << "\n|.    |";
			cout << "\n|    .|";
			cout << "\n|     |";
			++*contador1;
		}
		else if (*numero2 == 3)
		{
			cout << "\n|.    |";
			cout << "\n|  .  |";
			cout << "\n|    .|";
			++*contador1;
		}
		else if (*numero2 == 4)
		{
			cout << "\n|.   .|";
			cout << "\n|     |";
			cout << "\n|.   .|";
			++*contador1;
		}
		else if (*numero2 == 5)
		{
			cout << "\n|.   .|";
			cout << "\n|  .  |";
			cout << "\n|.   .|";
			++*contador1;
		}
		else if (*numero2 == 6)
		{
			cout << "\n|.   .|";
			cout << "\n|.   .|";
			cout << "\n|.   .|";
		}

		if (*numero1 == 6 && *numero2 == 6)
		{
			cout << "Ganaste despues de: " << *contador1;
			cout << " intentos ";
			++*contador1;
			getch();
			break;
		}


		getch();
		Console::Clear();
	}


	return 0;
}

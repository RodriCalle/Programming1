#include "pch.h"
#include "Menu.h"
#include "ContactArray.h"
#include "conio.h"

using namespace System;

int main()
{
	int opcionMenu;

	//PARA EL CONTACTO
	char* NombreContacto = new char[20];
	int EdadContacto;

	//OBJETO PARA EL CONTACTO Y ARREGLOCONTACTO
	Contacto* objContacto;
	ArregloContacto* objArregloContacto;

	//SE INSTANCIA EL ARREGLO CONTACTO
	objArregloContacto = new ArregloContacto();

	while (1)
	{
		Console::Clear();
		opcionMenu = menu();

		if (opcionMenu == 1) //MOSTRAR ARREGLO
		{
			if (objArregloContacto->GetN() > 0)
			{
				cout << "\nNOMBRE \t\t EDAD \n";
				for (int i = 0; i < objArregloContacto->GetN(); i++)
				{
					objContacto = objArregloContacto->GetContacto(i);
					cout << objContacto->GetNombre();
					cout << "\t\t" << objContacto->GetEdad() << endl;
				}
			}
			else
				cout << "\nEl Arreglo no tiene datos...";

			_getch();

		}

		if (opcionMenu == 2) //AGREGAR CONTACTO
		{
			objContacto = new Contacto(); //SE INSTANCIA EL OBJCONTACTO
			cout << "\nNUEVO CONTACTO\n";
			cin.ignore();
			cout << "Ingrese nombre: "; cin.getline(NombreContacto, 20);
			cout << "Ingrese edad: "; cin >> EdadContacto;

			//ENVIAMOS LOS DATOS AL OBJCONTACTO
			objContacto->SetNombre(NombreContacto);
			objContacto->SetEdad(EdadContacto);

			//AGREGAMOS EL OBJCONTACTO AL ARREGLO
			objArregloContacto->AgregarContacto(objContacto);
			_getch();
		}
	}

	return 0;
}

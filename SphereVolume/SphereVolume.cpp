#include "pch.h"
#include "Sphere.h"
#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;

int main()
{
	Esfera* f1 = new Esfera(10);

	Esfera* f2 = new Esfera();
	f2->setRadio(10);

	cout << "Esfera 1:" << f1->area() << "\n";
	cout << "Esfera 2:" << f2->volumen() << "\n";

	_getch();
	return 0;

}

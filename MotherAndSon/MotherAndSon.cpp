#include "pch.h"
#include <clocale>
#include "Son.h"
#include "Mother.h"


using namespace System;
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	Hijo* c1 = new Hijo((char*)"Bart Simpson", 8);
	Hijo* c2 = new Hijo((char*)"Lisa Simpson", 7);
	Hijo* c3 = new Hijo((char*)"Maggie Simpson", 1);
	Madre* m = new Madre();

	m->setNombre("Marge Simpson");
	m->agregarHijo(c1);
	m->agregarHijo(c2);
	m->agregarHijo(c3);

	cout << m->getInfo();
	_getch();
	return (0);
}



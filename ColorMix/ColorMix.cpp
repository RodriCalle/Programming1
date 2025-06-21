#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;

int main()
{
	system("color 9B");
	Console::ForegroundColor = ConsoleColor::Red;
	Console::BackgroundColor = ConsoleColor::Green;

	cout << "hola mundo" << endl << endl << endl;

	Console::ForegroundColor = ConsoleColor::Black;
	Console::BackgroundColor = ConsoleColor::Yellow;

	cout << "adios mundo" << endl;

	_getch();

	return 0;
}

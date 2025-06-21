#pragma once

#include "conio.h"
#include "iostream"

using namespace System;
using namespace std;

void ubica(int& x, int& y)
{
	Console::SetCursorPosition(x, y);
}
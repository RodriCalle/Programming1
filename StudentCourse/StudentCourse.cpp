#include "pch.h"
#include "Course.h"

using namespace std;
using namespace System;
using namespace academico;

int main()
{
    Estudiante* e = new Estudiante("Alberto");
    e->matricular(5);
    cout << e->reporte();

    ///
    return(0);
}

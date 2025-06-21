#pragma once


#include<iostream>
#include<sstream>
#include<string>

using namespace std;

namespace academico {

    class Curso {
    private:
        string nombre;
        double nota1;
        double nota2;
        double nota3;
    public:
        ~Curso() {}
        Curso(string n, double n1, double n2, double n3) {
            nombre = n;
            nota1 = n1;
            nota2 = n2;
            nota3 = n3;
        }

        void setNota1(double n1) { nota1 = n1; }
        double getNota1() { return nota1; }
        void setNota2(double n2) { nota2 = n2; }
        double getNota2() { return nota2; }
        void setNota3(double n3) { nota3 = n3; }
        double getNota3() { return nota3; }
        //
        double promedio() {
            return nota1 * 0.30 + nota2 * 0.40 + nota3 * 0.30;
        }
        string toString() {
            return "nombre: " + nombre + "\n" +
                "nota1 : " + to_string(getNota1()) + "\n" +
                "nota2 : " + to_string(getNota2()) + "\n" +
                "nota3 : " + to_string(getNota3());
        }

        string reporte() {
            return toString() + "\n" + ">promedio: " + to_string(promedio()) + "\n";
        }

        string reporte1() {
            stringstream ss;//#include<sstream>
            ss << nombre << ", ";
            ss << "nota1: " << getNota1() << ", ";
            ss << "nota2: " << getNota2() << ", ";
            ss << "nota3: " << getNota3() << ", ";
            ss << "PROMEDIO: " << promedio();
            //
            return(ss.str());
        }
    };

    class Estudiante {
        //Curso* c; //un solo curso
        string nombre;
        //-------------------------------
        Curso** listaDeCursos; //varios cursos
        int numCurso;
        //------------------------------
    public:
        Estudiante(string nombre) {
            this->nombre = nombre;
            this->numCurso = 0;
        }
        //
        void matricular(int n) {
            listaDeCursos = new Curso * [n];
            this->numCurso = n;
            for (int i = 0; i < n; i++) {
                //Curso(string n, double n1, double n2, double n3){            
                string nom = "curso" + to_string(i + 1);
                Curso* c = new Curso(nom, 0, 0, 0);
                listaDeCursos[i] = c;
            }

        }

        string reporte() {
            string rep = "Nombre Estudiante: " + nombre + "\n";
            rep += "Cursos Matriculados:\n";
            for (int i = 0; i < numCurso; i++) {
                Curso* c = listaDeCursos[i];
                rep += to_string(i) + "->" + c->reporte1() + "\n";
            }
            return(rep);
        }

        string getNombre() { return nombre; }
        void setNombre(string n) { this->nombre = n; }

    };

}
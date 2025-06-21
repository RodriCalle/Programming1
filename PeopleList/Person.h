#pragma once

#include <iostream>
#include <cmath>
#include <random>

using namespace std;


class Persona {
	private:
		char* nombre;
		int edad;
		long long dni;
		char sexo;
		double peso;
		double altura;
	public:
		Persona();
		~Persona();
		Persona(char* nombre, int edad, long long dni, char sexo, double peso, double altura);
		char* getnombre();
		int			getedad();
		long long	getdni();
		char		getsexo();
		double		getpeso();
		double		getaltura();
		void	setnombre(char* nombre);
		void	setedad(int edad);
		void	setdni(long long dni);
		void	setsexo(char sexo);
		void	setpeso(double peso);
		void	setaltura(double altura);
		double	calcularIMC();
		bool	esMayorEdad();
		char	compararSexo(char sexo);
		long long generarDNI();
	
};

Persona::Persona() {}
Persona::~Persona() {}

Persona::Persona(char* nombre, int edad, long long dni, char sexo, double peso, double altura) {
	this->nombre = nombre;
	this->edad = edad;
	this->dni = dni;
	this->sexo = sexo;
	this->peso = peso;
	this->altura = altura;
}

char* Persona::getnombre() { return nombre; }
int			Persona::getedad() { return edad; }
long long	Persona::getdni() { return dni; }
char		Persona::getsexo() { return sexo; }
double		Persona::getpeso() { return peso; }
double		Persona::getaltura() { return altura; }

void		Persona::setnombre(char* nombre) { this->nombre = nombre; }
void		Persona::setedad(int edad) { this->edad = edad; }
void		Persona::setdni(long long dni) { this->dni = dni; }
void		Persona::setsexo(char sexo) { this->sexo = sexo; }
void		Persona::setpeso(double peso) { this->peso = peso; }
void		Persona::setaltura(double altura) { this->altura = altura; }
double		Persona::calcularIMC() { return peso / pow(altura, 2); }

bool		Persona::esMayorEdad() {
	if (edad >= 18)
		return true;
	else
		return false;
}

char Persona::compararSexo(char sexo) {
	while (sexo != 'M' && sexo != 'F') {
		cout << "Ingrese nuevamente el sexo(M o F): ";
		cin >> sexo;
		sexo = toupper(sexo);
	}
	return sexo;

}

long long	Persona::generarDNI() {
	//Random r;
	//return r.Next(10000000, 100000000);

	default_random_engine generator;
	uniform_int_distribution<int> distribution(100000000, 99999999);
	int dni = distribution(generator);
	return(dni);

}

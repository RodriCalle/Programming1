#pragma once
#include <corecrt_math.h>

class Esfera {
	int radio;

public:

	Esfera() { this->radio = 0; }
	Esfera(int radio) { this->radio = radio; }
	~Esfera() {}

	void setRadio(int radio)
	{
		this->radio = radio;
	}

	int getRadio()
	{
		return (this->radio);
	}

	double area()
	{
		double area = 4 * (3.1416) * pow(radio, 2);
		return area;
	}

	double volumen()
	{
		double volumen = (1.33333) * (3.1416) * pow(radio, 3);
		return volumen;
	}
};

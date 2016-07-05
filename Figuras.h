#include <iostream>
#include <cmath>
#include <string>
#pragma once

using namespace std;

class Figura {
public:
	float posx;
	float posy;
	string ID;
	bool Visible;
	virtual void Trasladar() = 0;
	virtual void Rotar() = 0;
};

class Poligono : public Figura {
public:
	int lados;
	float **vertices;
};

class Regular : public Poligono {
public:
	float radio;
	float ang_ini;
	float ang_fig;
	Regular(int l, float r, float x, float y);
	void Rotar(float a);
	void Trasladar(float x, float y);
};

class Irregular : public Poligono {
public:
	Irregular(int l, float **v);
};

class Conico : public Figura {

};

class Beizer : public Poligono, public Conico {

};
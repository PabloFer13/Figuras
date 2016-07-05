#include <iostream>
#include <cmath>
#include <string>
#include "Figuras.h"
const double PI = 3.141592653589793238463;

using namespace std;

Regular::Regular(int l, float r, float x, float y) {
	float temp;
	lados = l;
	radio = r;
	posx = x;
	posy = y;
	vertices = new float*[2];
	vertices[0] = new float[lados];
	vertices[1] = new float[lados];
	ang_fig = 360 / lados;
	if (lados == 4) {ang_ini = 45;}
	else { ang_ini = 0; }
	temp = ang_ini;
	for (int i = 0; i < lados; i++) {
		vertices[0][i] = (sin(temp*PI / 180)) * radio;
		vertices[1][i] = (cos(temp*PI / 180)) * radio;
		temp = temp + ang_fig;
	}
}

void Regular::Rotar(float a) {
	for (int i = 0; i < lados; i++) {
		vertices[0][i] = (sin(i*PI / 180)) * radio;
		vertices[1][i] = (cos(i*PI / 180)) * radio;
	}
}

void Regular::Trasladar(float x, float y) {
	for (int i = 0; i < lados; i++) {
		vertices[0][i] = vertices[0][i] + x;
		vertices[1][i] = vertices[1][i] + y;
	}
}

Irregular::Irregular(int l, float **v) {
	lados = l;

}
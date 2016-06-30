#include <iostream>
#include "Listas.h"
#pragma once

using namespace std;

template<class TipoHash> class Tabla {
private:
	Lista<TipoHash> *Lst;
	unsigned tam;
	int _Key(TipoHash ob);
public:
	void Busca(TipoHash ob);
	Tabla();
	void inserta(TipoHash ob);
	void borra(TipoHash ob);
	void borraTodo();
	void show_all();
};
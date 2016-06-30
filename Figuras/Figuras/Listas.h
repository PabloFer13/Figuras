#include <iostream>
#pragma once

using namespace std;

template<class TipoLista> class Lista {
private:
	Lista<TipoLista> *sig;
	Lista<TipoLista> *ant;
	TipoLista cont;
public:
	void _insert(TipoLista ob);
	int _search(TipoLista ob);
	void _delete(TipoLista ob);
	void recorre();
	void _initList();
	void _deleteall();
	Lista *getNext() { return sig; }
	void showCont() { cout << cont; };
};
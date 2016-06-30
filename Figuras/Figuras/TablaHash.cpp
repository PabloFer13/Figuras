#include <iostream>
#include "TablaHash.h"

using namespace std;

template<class TipoHash> void Tabla<TipoHash>::borra(TipoHash ob) {
	Lst[_Key(ob)]._delete(ob);
}

template<class TipoHash> void Tabla<TipoHash>::borraTodo() {
	Lista<TipoHash> aux;
	for (unsigned i = 0; i < tam; i++) {
		aux = Lst[i];
		aux._deleteall();
	}
	delete[] Lst;
	Lst = NULL;
}

template<class TipoHash> void Tabla<TipoHash>::Busca(TipoHash ob) {
	if (Lst[_Key(ob)]._search(ob) > -1) {
		cout << "Posicion en la tabla: " << _Key(ob) << endl;
		cout << "Posicion en la fila de la tabla: " << Lst[_Key(ob)]._search(ob) << endl;
	}
}

template<class TipoHash> void Tabla<TipoHash>::inserta(TipoHash ob) {
	Lst[_Key(ob)]._insert(ob);
}

template<class TipoHash> Tabla<TipoHash>::Tabla() {
	Lst = new Lista<TipoHash>[10];
	tam = 10;
	for (int i = 0; i < 10; i++) {
		Lst[i]._initList();
	}
}

template<class TipoHash> int Tabla<TipoHash>::_Key(TipoHash ob) {
	return ob % 10;
}

template<class TipoHash> void Tabla<TipoHash>::show_all() {
	Lista<TipoHash> *aux;
	if (Lst != NULL) {
		for (unsigned i = 0; i < tam; i++) {
			aux = Lst[i].getNext();
			while (aux != aux->getNext()) {
				aux->showCont();
				cout << endl;
				aux = aux->getNext();
			}
			cout << endl;
		}
	}
	else {
		cout << "No hay elementos en esta tabla" << endl;
	}
}

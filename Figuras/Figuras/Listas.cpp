#include <iostream>
#include "Listas.h"

using namespace std;

template<class TipoLista> void Lista<TipoLista>::_insert(TipoLista ob) {
	Lista *aux = sig;
	while (aux->sig != aux && aux->cont < ob) {
		aux = aux->sig;
	}
	aux->ant->sig = new Lista();
	aux->ant->sig->ant = aux->ant;
	aux->ant->sig->sig = aux;
	aux->ant = aux->ant->sig;
	aux = aux->ant;
	aux->cont = ob;

}

template<class TipoLista> void Lista<TipoLista>::_initList() {
	sig = new Lista<TipoLista>;
	sig->sig = sig;
	sig->ant = this;
	ant = this;
}

template<class TipoLista> int Lista<TipoLista>::_search(TipoLista ob) {
	Lista *aux = sig;
	int i = 0;
	while (!(aux->cont == ob) && aux != aux->sig) {
		i++;
		aux = aux->sig;
	}
	if (aux == aux->sig) {
		cout << "El elemento no esta en la lista" << endl;
		return -1;
	}
	return i;
}

template<class TipoLista> void Lista<TipoLista>::_delete(TipoLista ob) {
	Lista *aux = sig;

	while (!(aux->cont == ob) && aux != aux->sig) {
		aux = aux->sig;
	}

	if (aux == aux->sig) {
		cout << "El elemento no esta en la lista" << endl;
		return;
	}

	aux->sig->ant = aux->ant;
	aux->ant->sig = aux->sig;

	delete aux;
	cout << "Se borro correctamente el elemento" << endl;

}

template<class TipoLista> void Lista<TipoLista>::_deleteall() {
	Lista<TipoLista> *aux;
	Lista<TipoLista> *aux2;
	aux = this;
	while (aux != aux->sig) {
		aux2 = aux->sig;
		aux2->sig == aux2 ? aux->sig = aux : aux->sig = aux2->sig;
	}

}

template<class TipoLista> void Lista<TipoLista>::recorre() {
	Lista *aux = sig;
	while (aux != aux->sig) {
		cout << cont << endl;
		aux = aux->sig;
	}
}

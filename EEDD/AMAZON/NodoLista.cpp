#include "NodoLista.hpp"
#include "Pedido.hpp"

NodoLista::NodoLista(Pedido* p, NodoLista* sig){
	pedido = p;
	siguiente = sig;
}

NodoLista::~NodoLista() {
}

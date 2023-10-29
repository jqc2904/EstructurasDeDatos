#include "NodoCola.hpp"
#include "Pedido.hpp"

NodoCola::NodoCola(Pedido* p, NodoCola* sig){
	pedido = p;
	siguiente = sig;
}

NodoCola::~NodoCola() {
}

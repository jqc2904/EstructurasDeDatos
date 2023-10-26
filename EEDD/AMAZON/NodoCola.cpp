#include "NodoCola.hpp"
#include "Pedido.hpp"

NodoCola::NodoCola(const Pedido& p, NodoCola* sig) : p(p){
    this->siguiente = sig;
}

NodoCola::~NodoCola() {
}

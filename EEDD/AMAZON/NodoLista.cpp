#include "NodoLista.hpp"

NodoLista::NodoLista(const Pedido& p, NodoLista* sig) : valor(p), siguiente(sig) {
}

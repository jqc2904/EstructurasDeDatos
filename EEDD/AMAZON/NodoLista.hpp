#ifndef NODOLISTA_HPP
#define NODOLISTA_HPP

#include "Pedido.hpp"

class NodoLista {
public:
    NodoLista(const Pedido& p, NodoLista* sig = nullptr);
    // Otros constructores y métodos si son necesarios

    Pedido valor;
    NodoLista* siguiente;
};

typedef NodoLista* pnodoLista;

#endif // NODOLISTA_HPP

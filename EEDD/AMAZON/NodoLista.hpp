#include <iostream>
#include "Pedido.hpp"

class NodoLista {
public:
    NodoLista(Pedido* p, NodoLista* sig = nullptr);
    ~NodoLista();

private:
    Pedido* pedido;
    NodoLista* siguiente;

    friend class Lista;
};

typedef NodoLista* pnodoLista;

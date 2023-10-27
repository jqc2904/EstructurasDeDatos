#include <iostream>
#include "Pedido.hpp"

class NodoCola {
public:
    NodoCola(Pedido p, NodoCola* sig = nullptr);
    ~NodoCola();

private:
    Pedido* pedido;
    NodoCola* siguiente;

    friend class Cola;
};

typedef NodoCola* pnodoCola;
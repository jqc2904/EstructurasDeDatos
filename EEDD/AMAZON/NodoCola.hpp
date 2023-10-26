#ifndef NODOCOLA_HPP
#define NODOCOLA_HPP

#include "Pedido.hpp"

class NodoCola {
public:
    NodoCola(const Pedido& p, NodoCola* sig = nullptr);
    ~NodoCola();

private:
    Pedido p;
    NodoCola* siguiente;

    friend class Cola;
};

typedef NodoCola* pnodoCola;

#endif // NODOCOLA_HPP

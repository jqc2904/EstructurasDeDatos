#ifndef PILA_HPP
#define PILA_HPP

#include "Pedido.hpp"
#include "NodoPila.hpp"

class Pila {
public:
    Pila();
    ~Pila();
    void insertar(const Pedido& p);
    Pedido extraer();
    const Pedido& cima() const;
    void mostrar() const;
    int getLongitud() const;
    void vaciarPila();

private:
    pnodoPila ultimo;
    int longitud;
};

#endif // PILA_HPP

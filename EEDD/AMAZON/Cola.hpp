#ifndef COLA_HPP
#define COLA_HPP

#include "NodoCola.hpp"
#include "Pedido.hpp"

class Cola {
public:
    Cola();
    ~Cola();
    
    void insertar(const Pedido& p);
    Pedido eliminar();
    void mostrar() const;
    Pedido verPrimero() const;
    int getLongitud() const;
	void vaciar();

private:
    pnodoCola primero, ultimo;
    int longitud;
};

#endif // COLA_HPP

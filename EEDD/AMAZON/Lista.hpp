#ifndef LISTA_HPP
#define LISTA_HPP

#include "NodoLista.hpp"

class Lista {
public:
    Lista();
    ~Lista();
    
    void append(const Pedido& p);
    void clear();
    void extend(const Lista& other);
    int index(const Pedido& p) const;
	void ordenarPorPedido();
	void mostrar() const;
	Pedido getPedidoMayor() const;
    Pedido getPedidoMenor() const;
	int getLongitud() const;

private:
    pnodoLista primero;
    int longitud;
};

#endif // LISTA_HPP

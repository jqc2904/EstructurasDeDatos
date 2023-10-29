#include "NodoLista.hpp"

class Lista {
public:
    Lista();
    ~Lista();
    
    void append(Pedido* p);
    void clear();
	void ordenarPorPedido();
	void mostrar();
	Pedido* getPedidoMayor();
    Pedido* getPedidoMenor();
	int getLongitud();

private:
    pnodoLista primero;
    int longitud;
};

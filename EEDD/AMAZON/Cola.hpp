#include "NodoCola.hpp"
#include "Pedido.hpp"

class Cola {
public:
    Cola();
    ~Cola();
    
    void insertar(Pedido p);
    Pedido* eliminar();
    void mostrar();
    Pedido* verPrimero();
    int getLongitud();
	void vaciar();

private:
    pnodoCola primero, ultimo;
    int longitud;
};
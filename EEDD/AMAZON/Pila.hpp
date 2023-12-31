#include "Pedido.hpp"
#include "NodoPila.hpp"

class Pila 
{
public:
    Pila();
    ~Pila();
    void insertar(Pedido* p);
    Pedido* extraer();
    void mostrar();
    int getLongitud();
    void vaciarPila();

private:
    pnodoPila ultimo;
    int longitud;
};
#include "NodoPila.hpp"
#include "Pedido.hpp"

NodoPila::NodoPila(Pedido p, NodoPila* sig)
: p(p), siguiente(sig)
{
}
NodoPila::~NodoPila();
{
}
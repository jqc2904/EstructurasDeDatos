#include <iostream>
#include "Pedido.hpp"

using namespace std;

class NodoPila
{
	public:
		NodoPila(Pedido p, NodoPila* sig = nullptr);
		~NodoPila();
	private:
		Pedido* pedido;
		NodoPila* siguiente;
		friend class Pila;
};
typedef NodoPila* pnodoPila;
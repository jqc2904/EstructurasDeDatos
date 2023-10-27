#include "Pedido.cpp"
#include "Pila.hpp"

Pila::Pila() {
    ultimo = nullptr;
    longitud = 0;
}

void Pila::insertar(Pedido p) 
{
    pnodoPila nuevo = new NodoPila(p, ultimo);
    ultimo = nuevo;
    longitud++;
}

Pedido* Pila::extraer() {
	pnodoPila nodo;
	Pedido *p;
    if (!ultimo) {
        return nullptr;
    }
	nodo = ultimo;
	ultimo = nodo->siguiente;
	p = nodo->pedido;
	longitud--;
	delete nodo;
	return p;
}

Pedido* Pila::cima(){
	pnodoPila nodo;
    if (!ultimo) {
        return nullptr;
    }
    return ultimo->pedido;
}

void Pila::mostrar() {
    pnodoPila aux = ultimo;
    cout << "\tContenido de la pila:" << endl;
    while (aux) {
        cout << "DNI: " << aux->valor.getDNI() << ", Urgente: " << (aux->valor.getEsUrgente() ? "Sí" : "No") << endl;
        aux = aux->siguiente;
    }
    cout << endl;
}

int Pila::getLongitud(){
    return longitud;
}

void Pila::vaciarPila() {
    pnodoPila aux = ultimo;
    while (aux) {
        pnodoPila temp = aux;
        aux = aux->siguiente;
        delete temp;
    }
}

Pila::~Pila() {
    vaciarPila();
}

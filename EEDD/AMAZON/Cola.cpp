#include <iostream>
#include "Cola.hpp"

Cola::Cola() {
    primero = nullptr;
    ultimo = nullptr;
    longitud = 0;
}

Cola::~Cola() {
    while (primero) {
        eliminar();
    }
}

void Cola::vaciar() {
    while (primero) {
        eliminar();
    }
    longitud = 0;
}

void Cola::insertar(const Pedido& p) {
    pnodoCola nuevo = new NodoCola(p);
    
    if (!primero) {
        primero = nuevo;
    } else {
        ultimo->siguiente = nuevo;
    }
    
    ultimo = nuevo;
    longitud++;
}

Pedido Cola::eliminar() {
    pnodoCola nodo = primero;

    if (!nodo) {
        return Pedido();
    }

    Pedido p = nodo->p;
    primero = nodo->siguiente;
    delete nodo;
    if (!primero) {
        ultimo = nullptr;
    }
    longitud--;
    return p;
}


Pedido Cola::verPrimero() const {
    if (!primero) {
        return Pedido();
    }
    return primero->p;
}

int Cola::getLongitud() const {
    return longitud;
}

void Cola::mostrar() const {
    pnodoCola aux = primero;
    std::cout << "\tContenido de la cola:" << std::endl;
    while (aux) {
        std::cout << "DNI: " << aux->p.getDNI() << ", Urgencia: " << (aux->p.getEsUrgente() ? "Sí" : "No") << ", Número de Pedido: " << aux->p.getNPedido() << std::endl;
        aux = aux->siguiente;
    }
}
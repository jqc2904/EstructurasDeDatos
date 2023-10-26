#include <iostream>
#include "Lista.hpp"

Lista::Lista() {
    primero = nullptr;
    longitud = 0;
}

Lista::~Lista() {
    clear();
}

int Lista::getLongitud() const {
    return longitud;
}

Pedido Lista::getPedidoMayor() const {
    if (longitud == 0) {
        return Pedido();
    }

    pnodoLista aux = primero;
    Pedido mayor = aux->valor;

    while (aux) {
        if (aux->valor.getNPedido() > mayor.getNPedido()) {
            mayor = aux->valor;
        }
        aux = aux->siguiente;
    }

    return mayor;
}

Pedido Lista::getPedidoMenor() const {
    if (longitud == 0) {
        return Pedido();
    }

    pnodoLista aux = primero;
    Pedido menor = aux->valor;

    while (aux) {
        if (aux->valor.getNPedido() < menor.getNPedido()) {
            menor = aux->valor;
        }
        aux = aux->siguiente;
    }

    return menor;
}

void Lista::mostrar() const {
    pnodoLista aux = primero;
    std::cout << "Contenido de la lista:" << std::endl;
    
    while (aux) {
        std::cout << "DNI: " << aux->valor.getDNI() << ", Urgencia: " << (aux->valor.getEsUrgente() ? "Sí" : "No") << ", Número de Pedido: " << aux->valor.getNPedido() << ", Número de Seguimiento: " << aux->valor.getNSeguimiento() << std::endl;
        aux = aux->siguiente;
    }
}

void Lista::ordenarPorPedido() {
    if (longitud <= 1) {
        // No se requiere ordenar si la lista tiene 0 o 1 elemento.
        return;
    }
	// or
    bool intercambio;
    do {
        intercambio = false;
        pnodoLista actual = primero;
        pnodoLista siguiente = primero->siguiente;

        while (siguiente) {
            if (actual->valor.getNPedido() > siguiente->valor.getNPedido()) {
                // Intercambia los nodos si el pedido actual es mayor que el siguiente
                Pedido temp = actual->valor;
                actual->valor = siguiente->valor;
                siguiente->valor = temp;
                intercambio = true;
            }

            actual = siguiente;
            siguiente = siguiente->siguiente;
        }
    } while (intercambio);
}

void Lista::append(const Pedido& p) {
    pnodoLista nuevo = new NodoLista(p);
    
    if (!primero) {
        primero = nuevo;
    } else {
        pnodoLista aux = primero;
        while (aux->siguiente) {
            aux = aux->siguiente;
        }
        aux->siguiente = nuevo;
    }
    
    longitud++;
}

void Lista::clear() {
    while (primero) {
        pnodoLista temp = primero;
        primero = primero->siguiente;
        delete temp;
    }
    longitud = 0;
}

void Lista::extend(const Lista& other) {
    pnodoLista aux = other.primero;
    while (aux) {
        append(aux->valor);
        aux = aux->siguiente;
    }
}
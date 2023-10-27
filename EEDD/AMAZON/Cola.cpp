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

void Cola::insertar(Pedido p) {
    pnodoCola nuevo = new NodoCola(p);
    if (ultimo)
		ultimo->siguiente = nuevo;
    ultimo = nuevo;
	if(!primero)
		primero = nuevo;
    longitud++;
}

Pedido* Cola::eliminar() {
    pnodoCola nodo;
	Pedido *p;
	nodo = primero;
    if (!nodo) {
        return nullptr;
    }
	primero = nodo->siguiente;
	p = nodo->pedido;
    delete nodo;
    if (!primero) {
        ultimo = nullptr;
    }
    longitud--;
    return p;
}


Pedido* Cola::verPrimero(){
    if (!primero) {
        return nullptr;
    }
    return primero->pedido;
}

int Cola::getLongitud(){
    return longitud;
}

void Cola::mostrar(){
    pnodoCola aux = primero;
    std::cout << "\tContenido de la cola:" << std::endl;
    while (aux) {
        std::cout << "DNI: " << aux->pedido->getDNI() << ", Urgencia: " << (aux->pedido->getEsUrgente() ? "Sí" : "No") << ", Número de Pedido: " << aux->pedido.getNPedido() << std::endl;
        aux = aux->siguiente;
    }
	cout << endl;
}
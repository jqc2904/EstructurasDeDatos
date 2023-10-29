#ifndef PEDIDO_CPP
#define PEDIDO_CPP

#include <string>
#include "Pedido.hpp"

Pedido::Pedido() {
    this->DNI = "000000000A";
    this->esUrgente = false;
    this->NPedido = 0;
    this->NSeguimiento = 0;
}

int Pedido::getNPedido() const {
    return this->NPedido;
}

void Pedido::setNPedido(int n) {
    this->NPedido = n;
}

int Pedido::getNSeguimiento() const {
    return this->NSeguimiento;
}

void Pedido::setNSeguimiento(int n) {
    this->NSeguimiento = n;
}

const std::string& Pedido::getDNI() const {
    return this->DNI;
}

bool Pedido::getEsUrgente() const {
    return this->esUrgente;
}

void Pedido::setDNI(const std::string& nuevoDNI) {
    this->DNI = nuevoDNI;
}

void Pedido::setEsUrgente(bool urgente) {
    this->esUrgente = urgente;
}


Pedido::~Pedido() {
}

#endif // PEDIDO_CPP
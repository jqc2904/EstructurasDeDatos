#include "Pedido.cpp"
#include "Pila.hpp"

Pila::Pila() {
    ultimo = nullptr;
    longitud = 0;
}

void Pila::insertar(const Pedido& p) {
    pnodoPila nuevo = new NodoPila(p, ultimo);
    ultimo = nuevo;
    longitud++;
}

Pedido Pila::extraer() {
    if (!ultimo) {
        // se devuelve un Pedido "vacío" por simplicidad.
        return Pedido();
    }
    pnodoPila nodo = ultimo;
    Pedido p = nodo->p;
    ultimo = nodo->siguiente;
    delete nodo;
    longitud--;
    return p;
}

const Pedido& Pila::cima() const {
    if (!ultimo) {
        // De manera similar al método extraer, puedes lanzar una excepción o manejar el error aquí.
        // Aquí se devuelve un Pedido "vacío" por simplicidad.
		Pedido pedidoVacio;
        return pedidoVacio;
    }
    return ultimo->p;
}

void Pila::mostrar() const {
    pnodoPila aux = ultimo;
    cout << "\tContenido de la pila:" << endl;
    while (aux) {
        cout << "DNI: " << aux->valor.getDNI() << ", Urgente: " << (aux->valor.getEsUrgente() ? "Sí" : "No") << endl;
        aux = aux->siguiente;
    }
    cout << endl;
}

int Pila::getLongitud() const {
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

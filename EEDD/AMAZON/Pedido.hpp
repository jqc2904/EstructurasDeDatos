#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include <string> 

class Pedido {
public:
    Pedido();
    int getNPedido() const;
    int getNSeguimiento() const;
    const std::string& getDNI() const;
    bool getEsUrgente() const;
    void setNPedido(int numeroPedido);
    void setNSeguimiento(int numeroSeguimiento);
	void setDNI(const std::string& nuevoDNI);
	void setEsUrgente(bool urgente);
    ~Pedido();
    
private:
    std::string DNI;
    bool esUrgente;
    int NPedido;
    int NSeguimiento;
};

#endif // PEDIDO_HPP
